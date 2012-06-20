/*
** dump_list.c for dump_list in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:34:55 2012 clement demily
** Last update Wed Jun 20 19:14:50 2012 clement demily
*/

#include "list.h"

void			dump_list(t_list *list, void (*print)(void *))
{
  t_list		*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      print(tmp->data);
      tmp = tmp->next;
    }
}
