/*
** create_serveur.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 13:20:25 2012 marie baudy
** Last update Sun Apr  8 22:05:34 2012 marie baudy
*/

#include "../my_ftp.h"

int			main(int ac, char **av)
{
  int			ss;
  struct sockaddr_in	sin;

  if (ac != 2)
    {
      printf("USAGE : ./serveur port\n");
      exit(0);
    }
  ss = create_socket();
  sin.sin_family = AF_INET;
  sin.sin_port = htons(atoi(av[1]));
  sin.sin_addr.s_addr = INADDR_ANY;
  if (bind(ss, (const struct sockaddr *)&sin, sizeof(sin)) == -1)
    my_error("Cannot assigne address to serveur", ss, -1);
  if (listen(ss, 40) == -1)
    my_error("Cannot create a queue", ss, -1);
  serveur_loop(ss);
  return (0);
}
