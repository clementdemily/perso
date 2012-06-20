/*
** remove_from_list.c for remove_from_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:29:12 2012 clement demily
** Last update Wed Jun 20 19:53:45 2012 clement demily
*/

#include "list.h"

/* Remove an element into a list */
/* Return a pointer to the head list */
t_list			*remove_from_list(t_list **list, void *data)
{
  t_list		*first;
  t_list		*prev;

  if (is_empty(*list))
    return (NULL);
  first = *list;
  prev = NULL;
  while (*list)
    {
      if (!strcmp((char *)(*list)->data, (char *)data))
	{
	  if ((*list) == first)
	    first = first->next;
	  else 
	    {
	      /* if (prev == NULL) */
	      /* 	prev = (*list)->next; */
	      /* else */
		prev->next = (*list)->next;
	    }
	  free((*list)->data);
	  free(*list);
	  *list = prev;
	}
      prev = *list;
      if ((*list))
	(*list) = (*list)->next;
    }
  *list = first;
  return (*list);
}
