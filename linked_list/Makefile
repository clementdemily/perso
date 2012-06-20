##
## Makefile for Makefile in /home/clement/perso/linked_list
## 
## Made by clement demily
## Login   <demily_c@epitech.net>
## 
## Started on  Thu Mar 15 23:36:50 2012 clement demily
## Last update Wed Jun 20 19:46:25 2012 clement demily
##

NAME=		libList

LIST_PATH=	./list

XFUNC_PATH=	./xfunction

SRC=		$(LIST_PATH)/add_list_to_list.c		\
		$(LIST_PATH)/apply_on_list.c		\
		$(LIST_PATH)/apply_on_eq_in_list.c	\
		$(LIST_PATH)/create_element.c		\
		$(LIST_PATH)/dump_int_list.c		\
		$(LIST_PATH)/dump_list.c		\
		$(LIST_PATH)/dump_string_list.c		\
		$(LIST_PATH)/find_in_list.c		\
		$(LIST_PATH)/free_list.c		\
		$(LIST_PATH)/in_list.c			\
		$(LIST_PATH)/in_list_rec.c		\
		$(LIST_PATH)/is_empty.c			\
		$(LIST_PATH)/list_size.c		\
		$(LIST_PATH)/list_size_rec.c		\
		$(LIST_PATH)/push_back.c		\
		$(LIST_PATH)/push_back_rec.c		\
		$(LIST_PATH)/push_front.c		\
		$(LIST_PATH)/remove_from_list.c		\
		$(LIST_PATH)/rev_list.c			\
		$(LIST_PATH)/sort_list.c		\
		$(XFUNC_PATH)/xmalloc.c			\
		$(XFUNC_PATH)/xwrite.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-fPIC -W -Wall -Wextra -Werror -g

CC=		gcc

RM=		rm -f



static:		$(OBJ)
		@ar rc $(NAME).a $(OBJ)
		@ranlib $(NAME).a
		@echo "Static Library '"$(NAME).a"' built"

dynamic:	$(OBJ)
		@$(CC) -shared -Wl,-soname,$(NAME).so -o $(NAME).so  $(OBJ)
		@echo "Dynamic Library '"$(NAME).so"' built"

clean:
		@$(RM) *~
		@$(RM) $(OBJ)
		@echo "Objects removed"

fclean:		clean
		@$(RM) $(NAME).a
		@$(RM) $(NAME).so
		@echo "Static library '"$(NAME).a"' removed"
		@echo "Dynamic library '"$(NAME).so"' removed"

all:		static dynamic

re:		fclean all