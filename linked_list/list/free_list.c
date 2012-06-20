/*
** free_list.c for free_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:33:14 2012 clement demily
** Last update Wed Jun 20 19:25:50 2012 clement demily
*/

#include "list.h"

/* Free a list */
void			free_list(t_list *list)
{
  t_list		*tmp;

  while (list != NULL)
    {
      tmp = list;
      free(tmp->data);
      free(tmp);
      list = list->next;
    }
}
