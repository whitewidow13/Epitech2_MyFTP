/*
** my_ftp.h for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 13:06:03 2012 marie baudy
** Last update Sun Apr  8 22:32:16 2012 marie baudy
*/

#ifndef __MY_FTP_H__
#define __MY_FTP_H__

#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <errno.h>

/* commun_func.c */

int	create_socket();
void	my_error(char *str, int ss, int sc);

/*************** SERVEUR ***************/

/* create_serveur.c */

int	main(int ac, char **av);

/* serveur_loop.c */

int	serveur_loop(int ss);

/* my_ls.c */

int	my_ls(int sc);

/* check_command.c */

int	execute(int sc);

/* my_pwd.c */

int	my_pwd(int sc);

/*************** CLIENT ***************/

/* create_client.c */

int	main(int ac, char **av);

/* client_loop.c */

int	client_loop(int sc);

/* ls.c */

void	ls(int sc);

/* pwd.c */

void	ls(int sc);
void	pwd(int sc);

#endif /* __MY_FTP_H__ */
