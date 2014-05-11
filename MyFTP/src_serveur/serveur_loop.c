/*
** serveur_loop.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 13:29:59 2012 marie baudy
** Last update Sun Apr  8 23:05:28 2012 marie baudy
*/

#include "../my_ftp.h"

int			serveur_loop(int ss)
{
  pid_t			pid;
  struct sockaddr_in	s;
  int			sc;
  int			l;

  while (1)
    {
      l = sizeof(s);
      if ((sc = accept(ss, (struct sockaddr *)&s, (socklen_t *)&l)) == -1)
	my_error("Cannot accept client", ss, -1);
       if ((pid = fork()) == 0)
	{
	  write(1, "New client : ", strlen("New client : "));
	  l = strlen(strcat(inet_ntoa(s.sin_addr), "\n"));
	  write(1, strcat(inet_ntoa(s.sin_addr), "\n"), l);
	  while (1)
	    if (execute(sc) == 0)
	      {
		printf("client leave\n");
		close(sc);
		exit(0);
	      }
	  return (0);
	}
    }
}
