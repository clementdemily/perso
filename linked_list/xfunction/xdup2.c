/*
** xdup2.c for xdup2 in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:26:24 2012 clement demily
** Last update Thu Mar 15 23:26:37 2012 clement demily
*/

#include	"xfunction.h"

int		xdup2(int oldfd, int newfd)
{
  int		fd;

  if ((fd = dup2(oldfd, newfd)) == -1)
    {
      xwrite(2, "Dup2 Failed\n", 12);
      exit(0);
    }
  return (fd);
}
