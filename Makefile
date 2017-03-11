# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/10 13:28:48 by tferrari          #+#    #+#              #
#    Updated: 2017/03/10 13:59:56 by tferrari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tferrari.filler

SRC_DIR = src

SRC_FILE =	main.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILE))

OBJS_DIR = obj

OBJS = $(addprefix $(OBJS_DIR)/, $(SRC_FILE:.c=.o))

INC = Libft/libft.h Include/ft_printf.h

LFT = Libft/libft.a

all : $(NAME)

$(NAME): $(LFT) $(OBJS)
	@gcc -Wall -Werror -Wextra -IInclude -c $@ $<
	@echo "tferrari.filler OK"

libft: $(LFT)

$(LFT):
	make -C Libft/

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJS_DIR)	
	@gcc -o $(NAME) $(OBJS)
	@echo "Fichier" $< "recompilé."

clean:
	@rm -rf $(OBJS_DIR)
	@make -C Libft clean
	@echo "Fichier objet de filler supprimé"

fclean: clean
	@rm -f $(NAME)
	@rm -f Libft/libft.a
	@echo "Libft.a supprimé"
	@echo "tferrari.filler supprimé"

re: fclean all
