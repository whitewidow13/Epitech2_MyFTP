/*
** ls.c for client in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_client
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 17:48:57 2012 marie baudy
** Last update Sun Apr  8 22:15:23 2012 marie baudy
*/

#include "../my_ftp.h"

void	pwd(int sc)
{
  char	buff[5000];
  int	i;

  i = read(sc, buff, 5000);
  write(1, buff, i);
}
