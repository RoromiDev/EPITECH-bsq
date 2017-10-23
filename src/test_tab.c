/*
** test_tab.c for test_tab in /home/deguer_r/CPE/CPE_2015_BSQ
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Fri Dec 18 12:24:45 2015 Romain Deguerville
** Last update Fri Dec 18 12:25:12 2015 Romain Deguerville
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

int	test_tab(int tmp, char **tab, int width, int lenght)
{
  int	i;

  i = 1;
  if (tab[lenght][width] != '.')
    return (0);
  while (i < tmp)
    {
      if (tab[lenght][width + i] != '.'  || tab[lenght + i][width] != '.')
        return (0);
      i = i + 1;
    }
  return (1);
}
