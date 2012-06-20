/*
** xopen.c for xopen in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:25:38 2012 clement demily
** Last update Thu Mar 15 23:25:55 2012 clement demily
*/

#include	"xfunction.h"

int		xopen(const char *pathname, int flags, mode_t mode)
{
  int		fd;

  if (mode != 0)
      fd = open(pathname, flags, mode);
  else
    fd = open(pathname, flags);
  if (fd == -1)
    {
      xwrite(2, "Open Failed\n", 12);
      exit(0);
    }
  return (fd);
}
