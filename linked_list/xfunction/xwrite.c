/*
** xwrite.c for xwrite in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:25:15 2012 clement demily
** Last update Thu Mar 15 23:25:34 2012 clement demily
*/

#include	"xfunction.h"

int		xwrite(int fd, char *str, size_t n)
{
  int		ret;

  if ((ret = write(fd, str, n)) == -1)
    {
      write(2, "Write Failed\n", 13);
      exit(-1);
    }
  return (ret);
}
