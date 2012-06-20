/*
** push_front.c for push_front in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Fri Mar 16 00:20:50 2012 clement demily
** Last update Wed Jun 20 19:26:42 2012 clement demily
*/

#include "list.h"

t_list			*push_front(t_list **list, void *data)
{
  t_list		*e;

  e = (t_list *)xmalloc(sizeof(t_list));
  e->data = data;
  e->next = *list;
  *list = e;
  return (*list);
}
