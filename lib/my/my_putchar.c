/*
** my_putchar.c for Piscine_C_J07 in /home/deguer_r/Desktop/Piscine_C_J07/lib/my
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Wed Oct  7 10:29:36 2015 Romain Deguerville
** Last update Thu Dec 17 18:11:01 2015 Romain Deguerville
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
