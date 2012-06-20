/*
** in_list.c for in_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:31:21 2012 clement demily
** Last update Thu Mar 15 23:31:29 2012 clement demily
*/

#include "list.h"

/* Find an element into a list */
/* Return a pointer 1 if its find or 0 */
int			in_list(t_list *list, void *data)
{
  t_list		*tmp;

  tmp = list;
  while (tmp)
    {
      if (strcmp((char *)tmp->data, (char *)data) == 0)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}
