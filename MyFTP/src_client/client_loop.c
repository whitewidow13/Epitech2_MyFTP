/*
** serveur_loop.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 13:29:59 2012 marie baudy
** Last update Sun Apr  8 22:54:40 2012 marie baudy
*/

#include "../my_ftp.h"

int	client_loop(int sc)
{
  int	nb_read;
  char	buff[500];

  printf("Welcome on my (presque) perfect FTP\n");
  while (1)
    {
      write(1, "\nmon beau prompt : ", strlen("\nmon beau prompt : "));
      nb_read = read(1, buff, 500);
      buff[nb_read - 1] = '\0';
      write(sc, buff, strlen(buff));
      if (strncmp(buff, "quit", 4) == 0)
	{
	  close(sc);
	  return (0);
	}
      if (strncmp(buff, "ls", 2) == 0)
	ls(sc);
      else if (strncmp(buff, "pwd", 3) == 0)
	pwd(sc);
    }
  return (0);
}
