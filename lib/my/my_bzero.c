/*
** my_bzero.c for bzero in /home/deguer_r/Documents/CPE/CPE_2015_BSQ/lib/my
** 
** Made by 
** Login   <romain.deguerville@epitech.net>
** 
** Started on  Tue Dec 15 13:32:30 2015 
** Last update Tue Dec 15 13:32:50 2015 
*/

void	my_bzero(char *buff, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      buff[i] = '\0';
      i = i + 1;
    }
}
