/*
** dump_string_list.c for dump_string_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:34:02 2012 clement demily
** Last update Wed Jun 20 19:42:15 2012 clement demily
*/

#include "list.h"

/* Print a string list */
void			dump_string_list(t_list *list)
{
  int			i;
  t_list		*tmp;

  i = 0;
  tmp = list;
  while (tmp)
    {
      printf("[%i] : %s\n", i, (char *)tmp->data);
      tmp = tmp->next;
      i++;
    }
}
