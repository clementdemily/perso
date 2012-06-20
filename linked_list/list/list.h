/*
** list.h for list in /home/clement/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar  8 23:11:29 2012 clement demily
** Last update Wed Jun 20 19:45:17 2012 clement demily
*/

#ifndef	__LIST_H__
#define __LIST_H__

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<string.h>

#define	_XOPEN_SOURCE	600

#include	"../xfunction/xfunction.h"

typedef	struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;

/* xfunction.c */
void		*xmalloc(size_t size);

t_list		*create_element(void *data);

/* edit list */
t_list		*push_back(t_list **list, void *data);
t_list		*push_back_rec(t_list **list, void *data);
t_list		*push_front(t_list **list, void *data);
t_list		*remove_from_list(t_list **list, void *data);
int		apply_on_list(t_list *begin, int (*f)());
int		apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)());
int		rev_list(t_list **begin);
int		add_list_to_list(t_list **begin1, t_list *begin2);
int		sort_list(t_list **begin);

/* test */
t_list		*find_in_list(t_list *list, void *data);
int		in_list(t_list *list, void *data);
int		in_list_rec(t_list *list, void *data);
int		is_empty(t_list *list);

/* display list */
int		list_size(t_list *begin);
int		list_size_rec(t_list *list);
void		dump_string_list(t_list *list);
void		dump_int_list(t_list *list);
void		dump_list(t_list *list, void (*print)());

void		free_list(t_list *list);

#endif
