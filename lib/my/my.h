/*
** my.h for my in /home/deguer_r/CPE_2015_Pushswap
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Mon Nov 16 18:52:25 2015 Romain Deguerville
** Last update Fri Dec 18 14:26:11 2015 Romain Deguerville
*/

#ifndef MY_H_
# define MY_H_

void	my_bufftotab(char*, char**, int, int);
void	my_create_tab(char*);
int	my_strlenbn(char*);
int	my_strnbline(char*);
void	my_bzero(char*, int);
char	*my_realloc(char*, char*, int);
int	test_tab(int, char**, int, int);
void	my_remp_tab(char**, int, int, int);
void	redirect(char**, int, int);
int	my_strlen(char*);
void	test_argv(int);
void	find_file(int);
void	test_file(char*);
void	test_char(char);
void	empty_file(char);
void	my_putchar(char);
void	my_putstr(char*);

#endif /* !MY_H_ */
