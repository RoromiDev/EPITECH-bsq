/*
** create_tab.c for create in /home/deguer_r/Documents/CPE/CPE_2015_BSQ
** 
** Made by 
** Login   <romain.deguerville@epitech.net>
** 
** Started on  Tue Dec 15 13:35:41 2015 
** Last update Sun Dec 20 22:34:02 2015 Romain Deguerville
*/

#include <stdlib.h>
#include "my.h"

void	my_create_tab(char *buff)
{
  char	**tab;
  int	i;

  i = 0;
  tab = malloc(sizeof(*tab) * (my_strnbline(buff) + 1));
  if (tab == NULL)
    exit(84);
  while (i < my_strnbline(buff))
    {
      tab[i] = malloc(sizeof(tab) * (my_strlenbn(buff) + 1));
      if (tab[i] == NULL)
	exit(84);
      i = i + 1;
    }
  my_bufftotab(buff, tab, 0, 0);
  redirect(tab, my_strnbline(buff) - 1, my_strlenbn(buff) - 1);
}
