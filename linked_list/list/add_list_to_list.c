/*
** add_list_to_list.c for add_list_to_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:32:09 2012 clement demily
** Last update Thu Mar 15 23:46:40 2012 clement demily
*/

#include "list.h"

int	add_list_to_list(t_list **begin1, t_list *begin2)
{
  t_list	*tmp;

  if ((begin1 == NULL) || (begin2 == NULL))
    return (1);
  tmp = *begin1;
  while (tmp->next != NULL)
    tmp = tmp->next;
  while (begin2 != NULL)
    {
      tmp->next = begin2;
      begin2 = begin2->next;
      tmp = tmp->next;
    }
  return (0);
}
