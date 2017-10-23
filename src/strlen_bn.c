/*
** strlen_bn.c for lenbn in /home/deguer_r/Documents/CPE/CPE_2015_BSQ
** 
** Made by 
** Login   <romain.deguerville@epitech.net>
** 
** Started on  Tue Dec 15 13:34:07 2015 
** Last update Sun Dec 20 22:20:57 2015 Romain Deguerville
*/

#include <stdio.h>
#include "my.h"

int	my_strlenbn(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != '\n')
    {
      i = i + 1;
      a = a + 1;
    }
  i = i + 1;
  a = a + 1;
  while (str[i] != '\n' && str[i] != '\0')
      i = i + 1;
  return (i - a);
}
