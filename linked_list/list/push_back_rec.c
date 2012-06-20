/*
** push_back_rec.c for push_back_rec in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:50:02 2012 clement demily
** Last update Wed Jun 20 19:23:49 2012 clement demily
*/

#include "list.h"

static t_list		*tmp(t_list *first, t_list *current, void *data)
{
  t_list		*el;
      
  if (current->next != NULL)
    return (tmp(first, current->next, data));
  else
    {
      el = (t_list *)xmalloc(sizeof(t_list));
      el->data = data;
      el->next = NULL;
      current->next = el;
      return (first);
    }
  return (NULL);
}

t_list			*push_back_rec(t_list **list, void *data)
{
  if (is_empty(*list))
    return (push_back(list, data));
  else
    return (tmp(*list, (*list)->next, data));
  return (NULL);
}
