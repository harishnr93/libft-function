# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 14:03:41 by hnataraj          #+#    #+#              #
#    Updated: 2025/07/11 14:04:02 by hnataraj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME		= libft.a

# Compiler and flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

# Source files - Part 1 (Libc functions)
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_atoi.c ft_calloc.c ft_strdup.c

# Source files - Part 2 (Additional functions)
SRCS		+= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			   ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			   ft_putendl_fd.c ft_putnbr_fd.c

# Bonus source files
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			  ft_lstmap.c

# Object files
OBJS		= $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

# Header file
HEADER		= libft.h

# Colors for output
GREEN		= \033[0;32m
RED			= \033[0;31m
YELLOW		= \033[0;33m
NC			= \033[0m

# Default target
all: $(NAME)

# Create library
$(NAME): $(OBJS)
	@echo "$(YELLOW)Creating library $(NAME)...$(NC)"
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(NC)"

# Compile source files
%.o: %.c $(HEADER)
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

# Bonus rule
bonus: $(BONUS_OBJS) $(OBJS)
	@echo "$(YELLOW)Creating library with bonus $(NAME)...$(NC)"
	@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)✓ $(NAME) with bonus created successfully!$(NC)"

# Clean object files
clean:
	@echo "$(RED)Cleaning object files...$(NC)"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)✓ Object files cleaned!$(NC)"

# Clean everything
fclean: clean
	@echo "$(RED)Removing $(NAME)...$(NC)"
	@$(RM) $(NAME)
	@echo "$(GREEN)✓ $(NAME) removed!$(NC)"

# Rebuild everything
re: fclean all

# Test compilation (optional)
test: $(NAME)
	@echo "$(YELLOW)Compiling test program...$(NC)"
	@$(CC) $(CFLAGS) -L. -lft main.c -o test_program
	@echo "$(GREEN)✓ Test program compiled!$(NC)"

# Run norminette (if available)
norm:
	@echo "$(YELLOW)Running norminette...$(NC)"
	@norminette $(SRCS) $(BONUS_SRCS) $(HEADER) | grep -E "(Error|Warning)" || echo "$(GREEN)✓ Norminette passed!$(NC)"

# Help
help:
	@echo "$(YELLOW)Available targets:$(NC)"
	@echo "  all     - Build the library"
	@echo "  bonus   - Build the library with bonus functions"
	@echo "  clean   - Remove object files"
	@echo "  fclean  - Remove object files and library"
	@echo "  re      - Rebuild everything"
	@echo "  test    - Compile test program (requires main.c)"
	@echo "  norm    - Run norminette check"
	@echo "  help    - Show this help message"

# Phony targets
.PHONY: all bonus clean fclean re test norm help