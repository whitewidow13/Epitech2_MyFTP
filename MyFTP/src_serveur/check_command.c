/*
** check_command.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 15:56:14 2012 marie baudy
** Last update Sun Apr  8 23:01:38 2012 marie baudy
*/

#include "../my_ftp.h"

int	execute(int sc)
{
  int	nb_read;
  char	buff[500];

  nb_read = read(sc, buff, 500);
  if (strncmp(buff, "ls", 2) == 0)
    my_ls(sc);
  else if (strncmp(buff, "pwd", 3) == 0)
    my_pwd(sc);
  else if (strncmp(buff, "quit", 4) == 0)
    return (0);
  else
    write(sc, "Commande not found", strlen("Commande not found"));
  return (1);
}
