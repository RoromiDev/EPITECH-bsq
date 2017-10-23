/*
** test_segfault.c for test in /home/deguer_r/CPE/CPE_2015_BSQ
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Thu Dec 17 12:31:42 2015 Romain Deguerville
** Last update Fri Dec 18 12:42:56 2015 Romain Deguerville
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	test_argv(int argc)
{
  if (argc != 2)
    {
      write(2, "./bsq [map]\n", 13);
      exit(84);
    }
}

void	find_file(int fd)
{
  if (fd == -1)
    {
      write(2, "Fichier introuvable\n", 21);
      write(2, "./bsq [map]\n", 13);
      exit(84);
    }
}

void	test_file(char *tab)
{
  if (tab == NULL)
    {
      write(2, "Fichier eronné\n", 16);
      write(2, "./bsq [map]\n", 13);
      exit(84);
    }
}

void	test_char(char c)
{
  if (c != '.' && c != 'o' && c != '\n' && c != '\0')
    {
      write(2, "Fichier eronné\n", 16);
      write(2, "./bsq [map]\n", 13);
      exit(84);
    }
}

void	empty_file(char c)
{
  if (c == '\0')
    {
      write(2, "Fichier eronné\n", 16);
      write(2, "./bsq [map]\n", 13);
      exit(84);
    }
}
