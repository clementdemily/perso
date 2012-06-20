/*
** create_element.c for create_element in /home/clement/perso/linked_list
** 
** Made by clement demily
** Login   <demily_c@epitech.net>
** 
** Started on  Wed Jun 20 19:43:45 2012 clement demily
** Last update Wed Jun 20 19:44:44 2012 clement demily
*/

#include	"list.h"

t_list		*create_element(void *data)
{
  t_list	*ret;

  ret = (t_list *)xmalloc(sizeof(t_list));
  ret->data = data;
  ret->next = NULL;
  return (ret);
}
