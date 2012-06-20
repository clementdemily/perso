/*
** dump_int_list.c for dump_int_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:34:30 2012 clement demily
** Last update Wed Jun 20 19:14:20 2012 clement demily
*/

#include "list.h"

/* Print an integer list */
void			dump_int_list(t_list *list)
{
  int			i;
  t_list		*tmp;

  i = 0;
  tmp = list;
  while (tmp != NULL)
    {
      printf("[%i] : %i\n", i, *(int *)tmp->data);
      tmp = tmp->next;
      i++;
    }
}
