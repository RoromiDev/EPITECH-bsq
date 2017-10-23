/*
** my_putstr.c for Piscine_C_J04 in /home/deguer_r/Desktop/Piscine_C_J04
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Thu Oct  1 10:08:07 2015 Romain Deguerville
** Last update Fri Dec 18 14:27:05 2015 Romain Deguerville
*/

#include <unistd.h>
#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      str = str + 1;
    }
}
