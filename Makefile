# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/10 13:28:48 by tferrari          #+#    #+#              #
#    Updated: 2017/03/13 16:45:12 by tferrari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: libft

NAME = checker

SRC_DIR = src

SRC_FILE =	main.c ft_checker.c ft_push.c ft_rotate_reverse.c ft_rotate.c \
			ft_rotate_reverse2.c ft_rotate2.c ft_swap.c ft_swap2.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILE))

OBJS_DIR = obj

OBJS = $(addprefix $(OBJS_DIR)/, $(SRC_FILE:.c=.o))

INC = -ILibft/include -IInclude/

LFT = -L./Libft -lft

all : $(NAME)

$(NAME): libft $(OBJS)
	@gcc $(LFT) -o $(NAME) $(OBJS)
	@echo "checker OK"

libft:
	make -C Libft/

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJS_DIR)
	@gcc -Wall -Werror -Wextra $(INC) -o $@ -c $<
	@echo "Fichier" $< "recompilé."

clean:
	@rm -rf $(OBJS_DIR)
	@make -C Libft clean
	@echo "Fichier objet de checker supprimé"

fclean: clean
	@rm -f $(NAME)
	@rm -f Libft/libft.a
	@echo "Libft.a supprimé"
	@echo "checker supprimé"

re: fclean all
