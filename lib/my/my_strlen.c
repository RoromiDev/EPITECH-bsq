/*
** my_strlen.c for my_strlen in /home/deguer_r/popopo
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Tue Dec  1 17:37:52 2015 Romain Deguerville
** Last update Tue Dec  1 17:41:29 2015 Romain Deguerville
*/

#include <stdlib.h>

int     my_strlen(char *str)
{
  int   compteur;

  compteur = 0;
  if (str == NULL)
    return (0);
  while (str[compteur] != '\0')
    {
      compteur = compteur + 1;
    }
  return (compteur);
}

