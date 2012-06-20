/*
** in_list_rec.c for in_list_rec in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Fri Mar 16 00:17:10 2012 clement demily
** Last update Fri Mar 16 00:19:17 2012 clement demily
*/

#include "list.h"

int			in_list_rec(t_list *list, void *data)
{
  if (!is_empty(list))
    {
      if (strcmp((char *)list->data, (char *)data) == 0)
	return (1);
      return (in_list_rec(list->next, data));
    }
  return (0);
}
