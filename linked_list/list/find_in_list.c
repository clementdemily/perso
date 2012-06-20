/*
** find_in_list.c for find_in_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:31:00 2012 clement demily
** Last update Thu Mar 15 23:31:09 2012 clement demily
*/

#include "list.h"

/* Find an element into a list */
/* Return a pointer to the element if its find OR NULL */
t_list			*find_in_list(t_list *list, void *data)
{
  t_list		*tmp;

  tmp = list;
  while (tmp)
    {
      if (strcmp((char *)tmp->data, (char *)data) == 0)
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
