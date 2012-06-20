/*
** apply_on_eq_in_list.c for apply_in_eq_on_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:46:59 2012 clement demily
** Last update Fri Mar 16 00:26:35 2012 clement demily
*/

#include "list.h"

int	apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)())
{
  t_list	*tmp;

  if (begin == NULL)
    return (1);
  tmp = begin;
  while (tmp != NULL)
    {
      if (cmp(data_ref, tmp->data) == 0)
	  f(tmp->data);
      tmp = tmp->next;
    }
  return (0);
}
