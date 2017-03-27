# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/10 13:28:48 by tferrari          #+#    #+#              #
#    Updated: 2017/03/27 16:22:17 by tferrari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: libft

NAME_C = checker

NAME_P = push_swap

SRC_DIR = src

SRC_FILE_C =	main_checker.c ft_checker.c ft_push.c ft_rotate_reverse.c \
				ft_rotate.c ft_rotate_reverse2.c ft_rotate2.c ft_swap1.c \
				ft_swap2.c ft_check.c ft_swap_tab.c ft_print.c

SRC_FILE_P =	main_push.c ft_push.c ft_rotate_reverse.c ft_rotate.c \
				ft_rotate_reverse2.c ft_rotate2.c ft_swap1.c ft_swap2.c \
				ft_check.c ft_push_swap.c ft_swap_tab.c ft_checker.c \
				ft_write_order.c ft_print.c

SRC_C = $(addprefix $(SRC_DIR)/, $(SRC_FILE_C))

SRC_P = $(addprefix $(SRC_DIR)/, $(SRC_FILE_P))

OBJS_DIR_C = obj_c

OBJS_DIR_P = obj_p

OBJS_C = $(addprefix $(OBJS_DIR_C)/, $(SRC_FILE_C:.c=.o))

OBJS_P = $(addprefix $(OBJS_DIR_P)/, $(SRC_FILE_P:.c=.o))

INC = -ILibft/include -IInclude/

LFT = -L./Libft -lft

all : libft $(NAME_C) $(NAME_P)

$(NAME_C): $(OBJS_C)
	@gcc $(LFT) -o $(NAME_C) $(OBJS_C)
	@echo "\033[32mchecker créé\033[0m"

$(NAME_P): $(OBJS_P)
	@gcc $(LFT) -o $(NAME_P) $(OBJS_P)
	@echo "\033[32mpush_swap créé\033[0m"

libft:
	make -C Libft/

$(OBJS_DIR_P)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJS_DIR_P)
	@gcc -Wall -Werror -Wextra $(INC) -o $@ -c $<
	@echo "Fichier" $< "recompilé."

$(OBJS_DIR_C)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJS_DIR_C)
	@gcc -Wall -Werror -Wextra $(INC) -o $@ -c $<
	@echo "Fichier" $< "recompilé."

clean:
	@rm -rf $(OBJS_DIR_C)
	@rm -rf $(OBJS_DIR_P)
	@make -C Libft clean
	@echo "\033[31mFichier objet de checker supprimé\033[0m"
	@echo "\033[31mFichier objet de push_swap supprimé\033[0m"

fclean: clean
	@rm -f $(NAME_C)
	@rm -f $(NAME_P)
	@rm -f Libft/libft.a
	@echo "\033[31mLibft.a supprimé\033[0m"
	@echo "\033[31mchecker supprimé\033[0m"
	@echo "\033[31mpush_swap supprimé\033[0m"

re: fclean all
