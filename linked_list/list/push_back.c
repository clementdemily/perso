/*
** push_back.c for push_back in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:28:06 2012 clement demily
** Last update Wed Jun 20 19:46:52 2012 clement demily
*/

#include "list.h"

/* Add an element into a list */
/* Return a pointer to the head list */
t_list			*push_back(t_list **list, void *data)
{
  t_list		*elem;
  t_list		*first;

  elem = create_element(data);
  first = *list;
  if (is_empty(*list))
    first = elem;
  else
    {
      while ((*list)->next != NULL)
	*list = (*list)->next;
      (*list)->next = elem;
    }
  *list = first;
  return (*list);
}
