# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otodd <otodd@student.42london.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 14:23:16 by otodd             #+#    #+#              #
#    Updated: 2024/12/06 14:37:59 by otodd            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW		=	\033[1;33m
RED			=	\033[1;31m
GREEN		=	\033[1;32m
BLUE		=	\033[1;34m
CYAN		=	\033[1;36m
NC			=	\033[0m

CC			=	c++
CXXFLAGS 	= 	-Wall -Wextra -Werror -std=c++98
NAME		=	megaphone

SRC_DIR 	= 	src
OBJ_DIR 	= 	obj

SRC			=	$(SRC_DIR)/megaphone.cpp
OBJS 		= 	$(OBJ_DIR)/megaphone.o

all: $(NAME)

dir:
	@if [ ! -d "obj" ]; then \
		echo "[$(GREEN)CPP00$(NC)]  Creating obj directory..."; \
		mkdir -p obj; \
	fi	

$(NAME): $(OBJS)
	@echo "[$(GREEN)CPP00$(NC)]  Building $@..."
	@$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | dir
	@mkdir -p $(@D)
	@echo "[$(BLUE)CPP00$(NC)]  Compiling $< --> $@"
	@$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "[$(YELLOW)CPP00$(NC)]  Cleaning object directory..."
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "[$(RED)CPP00$(NC)]  Cleaning executable directory..."
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re