/*
** xdup.c for xdup in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:26:07 2012 clement demily
** Last update Thu Mar 15 23:26:12 2012 clement demily
*/

#include	"xfunction.h"

int		xdup(int oldfd)
{
  int		fd;

  if ((fd = dup(oldfd)) == -1)
    {
      xwrite(2, "Dup Failed\n", 11);
      exit(0);
    }
  return (fd);
}
