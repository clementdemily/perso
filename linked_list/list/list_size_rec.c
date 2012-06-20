/*
** list_size_rec.c for list_size_rec in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Fri Mar 16 00:11:48 2012 clement demily
** Last update Fri Mar 16 00:12:48 2012 clement demily
*/

#include "list.h"

int		list_size_rec(t_list *list)
{
  if (is_empty(list))
    return (0);
  return (1 + list_size_rec(list->next));
}
