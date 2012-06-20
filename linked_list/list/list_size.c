/*
** list_size.c for list_size in /home/clement/perso/linked_list/list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:31:45 2012 clement demily
** Last update Wed Jun 20 19:16:34 2012 clement demily
*/

#include "list.h"

int			list_size(t_list *list)
{
  int			counter;

  counter = 0;
  while (list != NULL)
    {
      counter++;
      list = list->next;
    }
  return (counter);
}
