/*
** xfunction.h for xfunction in /home/clement/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Fri Mar  9 00:55:46 2012 clement demily
** Last update Fri Mar  9 01:00:38 2012 clement demily
*/

#ifndef	__XFUNCTION_H__
#define __XFUNCTION_H__

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	<string.h>

void		*xmalloc(size_t size);
int		xwrite(int fd, char *str, size_t n);
int		xopen(const char *pathname, int flags, mode_t mode);
int		xdup(int oldfd);
int		xdup2(int oldf, int newfd);

#endif
