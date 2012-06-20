/*
** rev_list.c for rev_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:30:21 2012 clement demily
** Last update Wed Jun 20 19:18:37 2012 clement demily
*/

#include "list.h"

int			rev_list(t_list **list)
{
  t_list	*elem_prev;
  t_list	*elem_next;
  t_list	*elem_current;

  if (list == NULL)
    return (-1);
  elem_current = *list;
  elem_prev = NULL;
  while (elem_current != NULL)
    {
      elem_next = elem_current->next;
      elem_current->next = elem_prev;
      elem_prev = elem_current;
      elem_current = elem_next;
    }
  *list = elem_prev;
  return (0);
}
