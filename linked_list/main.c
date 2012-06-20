/*
** main.c for main in /home/clement/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Fri Mar  9 01:04:37 2012 clement demily
** Last update Wed Jun 20 19:56:09 2012 clement demily
*/

#include "list/list.h"

int			main(void)
{
  t_list		*l;
  char			*s1;
  char			*s2;
  char			*s3;

  l = NULL;
  s1 = strdup("test1");
  s2 = strdup("test2");
  s3 = strdup("test3");
  l = push_back(&l, s1);
  l = push_back(&l, s2);
  l = push_back(&l, s3);
  printf("size : %i\n", list_size(l));
  rev_list(&l);
  dump_string_list(l);
  free_list(l);
  return (0);
}
