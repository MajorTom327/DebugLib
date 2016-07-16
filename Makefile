# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vthomas <vthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 14:39:19 by vthomas           #+#    #+#              #
#    Updated: 2016/07/16 04:12:11 by vthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra
NAME = libdbg.a

SRC_PATH = ./src/
SRC_NAME = dbg_breakpoint.c\
		   dbg_title.c\
		   dbg_info.c\
		   dbg_diff_int.c\
		   dbg_var_char.c\
		   dbg_var_str.c\
		   dbg_var_int.c\
		   dbg_var_array_char.c\
		   dbg_var_array_int.c\
		   dbg_var_array_str.c\
		   ft_putnbr.c\
		   ft_spacelevel.c\
		   ft_strlen.c
OBJ_PATH = ./obj/
INC_PATH = ./include
INC_NAME = debug.h

INC = $(addprefix -I, $(INC_PATH))
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $(INC) -o $@ $<

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(OBJ_PATH)
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf $(LIB)

re: fclean all

test: re
	@clear
	@echo "\033[90mCompiling for test...\033[0m"
	@$(CC) main.c $(NAME) $(INC) $(CFLAGS)
	@echo ""
	@echo "/* ******************** */\n** \033[32mCompiling Finished !\033[0m **\n/* ******************** */"
	-@./a.out

norme:
	@clear
	@norminette $(SRC) $(INC_PATH)*.h
.PHONY: fclean clean
