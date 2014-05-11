/*
** commun_func.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 11:46:02 2012 marie baudy
** Last update Sun Apr  8 14:46:00 2012 marie baudy
*/

#include "my_ftp.h"

int			create_socket()
{
  struct protoent	*proto;
  int			s;

  if ((proto = getprotobyname("TCP")) == NULL)
    {
      printf("Cannot take protocole\n");
      exit(0);
    }
  if ((s = socket(AF_INET, SOCK_STREAM, proto->p_proto)) == -1)
    {
      printf("Cannot create socket\n");
      exit(0);
    }
  return (s);
}

void	my_error(char *str, int ss, int sc)
{
  printf("%s\n", str);
  if (ss != -1)
    if (close(ss) == -1)
      printf("Cannot close socket\n");
  if (sc != -1)
    if (close(sc) == -1)
      printf("Cannot close socket\n");
  exit(0);
}
