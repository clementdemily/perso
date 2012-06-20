/*
** apply_on_list.c for apply_on_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:30:00 2012 clement demily
** Last update Wed Jun 20 19:18:04 2012 clement demily
*/

#include "list.h"

int			apply_on_list(t_list *list, int (*f)())
{
  t_list	*tmp;

  if (is_empty(list))
    return (0);
  tmp = list;
  while (tmp != NULL)
    {
      f(tmp->data);
      tmp = tmp->next;
    }
  return (1);
}
