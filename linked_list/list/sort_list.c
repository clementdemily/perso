/*
** sort_list.c for sort_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:32:38 2012 clement demily
** Last update Thu Mar 15 23:32:52 2012 clement demily
*/

#include "list.h"

static void		swap_elem2(t_list *current)
{
  t_list		*next;

  next = current->next;
  current->next = next->next;
  next->next = current;
}

static void		swap_elem(t_list *prev)
{
  t_list		*current;
  t_list		*next;

  current = prev->next;
  next = current->next;
  prev->next = next;
  current->next = next->next;
  next->next = current;
}

int			sort_list(t_list **begin)
{
  t_list		*prev;
  t_list		*current;
  int			clear;

  clear = 0;
  while (clear == 0)
    {
      clear = 1;
      current = *begin;
      prev = NULL;
      while (current != NULL)
	{
	  if (strcmp((char *)current->data, (char *)current->next->data) > 0)
	    {
	      if (prev != NULL)
		swap_elem(prev);
	      else
		swap_elem2(current);
	      clear = 0;
	    }
	  prev = current;
	  current = current->next;
	}
    }
  return (0);
}
