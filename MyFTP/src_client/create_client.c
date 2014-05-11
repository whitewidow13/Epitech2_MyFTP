/*
** create_serveur.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 13:20:25 2012 marie baudy
** Last update Sun Apr  8 18:53:10 2012 marie baudy
*/

#include "../my_ftp.h"

int			main(int ac, char **av)
{
  int			sc;
  struct sockaddr_in	sin_client;

  if (ac != 3)
    {
      printf("USAGE : ./client machine port\n");
      exit(0);
    }
  sc = create_socket();
  sin_client.sin_family = AF_INET;
  sin_client.sin_port = htons(atoi(av[2]));
  sin_client.sin_addr.s_addr = inet_addr(av[1]);
  if (connect(sc, (const struct sockaddr *)&sin_client,
	      sizeof(sin_client)) == -1)
    my_error("Cannot connect to server", -1, sc);
  client_loop(sc);
  return (0);
}
