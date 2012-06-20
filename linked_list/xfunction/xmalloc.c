/*
** xmalloc.c for xmalloc in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Thu Mar 15 23:24:51 2012 clement demily
** Last update Thu Mar 15 23:25:03 2012 clement demily
*/

#include	"xfunction.h"

void		*xmalloc(size_t size)
{
  void		*ret;

  if ((ret = malloc(size)) == NULL)
    {
      write(2, "Malloc Failed\n", 13);
      exit(-1);
    }
  return (ret);
}
