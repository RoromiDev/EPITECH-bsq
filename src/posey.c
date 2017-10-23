/*
** main.c for main in /home/deguer_r/CPE_2015_bsq
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Mon Nov 30 20:59:17 2015 Romain Deguerville
** Last update Fri Dec 18 13:23:06 2015 Romain Deguerville
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

void	my_remp_tab(char **tab, int posx, int posy, int count)
{
  int	i;
  int	save;
  int	a;

  a = 0;
  save = count - 1;
  i = count - 1;
  while (i > 0)
    {
      while (save > 0)
	{
	  tab[posx][posy - a] = 'x';
	  a = a + 1;
	  save = save - 1;
	}
      save = count - 1;
      a = 0;
      posx = posx - 1;
      i = i - 1;
    }
}

void	my_search2(char **tab, int *lenght, int *width, t_bsq *bsq)
{
  bsq->tmpwidth = *width;
  bsq->tmplenght = *lenght;
  bsq->tmp = 1;
  while (*lenght >= 0 && *width >= 0 && test_tab(bsq->tmp, tab, *width,
						 *lenght) == 1)
    {
      *lenght = *lenght - 1;
      *width = *width - 1;
      bsq->tmp = bsq->tmp + 1;
    }
  if (bsq->tmp >= bsq->count)
    {
      bsq->count = bsq->tmp;
      bsq->posx = *lenght + bsq->count - 1;
      bsq->posy = *width + bsq->count - 1;
    }
  *width = bsq->tmpwidth;
  *lenght = bsq->tmplenght;
  *width = *width - 1;
}

void	my_search(char **tab, int *lenght, int *width, t_bsq *bsq)
{
  if (tab[*lenght][*width] == 'o' && *width != 0)
    *width = *width - 1;
  else if (*width == 0)
    {
      *lenght = *lenght - 1;
      *width = bsq->wid;
    }
  else if (tab[*lenght][*width] == '.')
    my_search2(tab, lenght, width, bsq);
  bsq->i = bsq->i + 1;
}

int	my_remp_tab1(char **tab)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (tab[a][b] != 0)
    {
      if (tab[a][b] == '.')
	{
	  tab[a][b] = 'x';
	  return (0);
	}
      else if (tab[a][b] == 'o')
	b = b + 1;
      else
	{
	  b = 0;
	  a = a + 1;
	}
    }
  return (0);
}

void	redirect(char **tab, int lenght, int width)
{
  t_bsq	bsq;

  bsq.len = lenght;
  bsq.wid = width;
  bsq.count = 0;
  bsq.tmp = 0;
  bsq.i = 0;
  while (bsq.i < (bsq.len + 1) * (bsq.wid + 1))
    my_search(tab, &lenght, &width, &bsq);
  if (bsq.count > 2)
    my_remp_tab(tab, bsq.posx, bsq.posy, bsq.count);
  else
    my_remp_tab1(tab);
  bsq.i = 0;
  while (bsq.i <= bsq.len)
    {
      my_putstr(tab[bsq.i]);
      my_putchar('\n');
      bsq.i = bsq.i + 1;
    }
}
