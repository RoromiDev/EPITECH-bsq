/*
** strlen_nb_line.c for nb line in /home/deguer_r/Documents/CPE/CPE_2015_BSQ
** 
** Made by 
** Login   <romain.deguerville@epitech.net>
** 
** Started on  Tue Dec 15 13:34:53 2015 
** Last update Sun Dec 20 22:35:57 2015 Romain Deguerville
*/

#include "my.h"

int	my_strnbline(char *str)
{
  int	i;
  int	save;

  save = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	save = save + 1;
      i = i + 1;
    }
  if (str[i - 1] == '\n')
    save = save - 1;
  return (save);
}
