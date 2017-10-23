/*
** main.c for cool in /home/deguer_r/Desktop/colle
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Sat Oct 24 16:56:14 2015 Romain Deguerville
** Last update Sun Dec 20 22:34:48 2015 Romain Deguerville
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

# define BUFF_SIZE 4096

void	test_read(int read)
{
  if (read == -1)
    {
      write(2, "File only\n", 11);
      exit(84);
    }
}

void	my_bufftotab(char *buff, char **tab, int a, int b)
{
  int	i;

  i = 0;
  while (buff[i] != '\n' && buff[i] != '\0')
    i = i + 1;
  i = i + 1;
  empty_file(buff[i + 1]);
  while (buff[i] != '\0')
    {
      test_char(buff[i]);
      if (buff[i] == '\n' || buff[i] == '\0')
	{
	  tab[a][b] = '\0';
	  a = a + 1;
	  b = 0;
	}
      else
	{
	  tab[a][b] = buff[i];
	  b = b + 1;
	}
      i = i + 1;
    }
}

char	*my_realloc(char *buff, char *fullbuffer, int len)
{
  char	*new;
  int	i;
  int	compteur;

  compteur = 0;
  i = 0;
  new = malloc(sizeof(*new) * (my_strlen(fullbuffer) + len + 1));
  if (new == NULL)
    exit(84);
  while (fullbuffer != NULL && fullbuffer[i] != '\0')
    {
      new[i] = fullbuffer[i];
      i = i + 1 ;
    }
  free(fullbuffer);
  while (buff[compteur] != '\0')
    {
      new[i] = buff[compteur];
      i = i + 1;
      compteur = compteur + 1;
    }
  new[i] = '\0';
  return (new);
}

int	main(int argc, char** argv)
{
  char	buff[BUFF_SIZE + 1];
  int	len;
  char	*extend;
  int	fd;

  test_argv(argc);
  extend = NULL;
  my_bzero(buff, BUFF_SIZE);
  fd = open(argv[1], O_RDONLY);
  find_file(fd);
  while ((len = read(fd, buff, BUFF_SIZE)) > 0)
    {
      buff[len] = 0;
      extend = my_realloc(buff, extend, len);
      my_bzero(buff, BUFF_SIZE);
    }
  test_read(len);
  test_file(extend);
  my_create_tab(extend);
  free(extend);
  close(fd);
  return (0);
}
