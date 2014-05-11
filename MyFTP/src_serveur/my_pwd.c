/*
** my_ls.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 15:50:47 2012 marie baudy
** Last update Sun Apr  8 22:58:41 2012 marie baudy
*/

#include "../my_ftp.h"

int		my_pwd(int sc)
{
  char	*str;

  if ((str = getenv("PWD")) == NULL)
    {
      printf("PATH not found\n");
      return (0);
    }
  write(sc, "\n", 1);
  write(sc, str, strlen(str));
  write(sc, "\n", 1);
  return (1);
}
