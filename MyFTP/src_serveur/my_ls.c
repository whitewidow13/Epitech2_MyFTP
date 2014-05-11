/*
** my_ls.c for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m/src_serveur
**
** Made by marie baudy
** Login   <baudy_m@epitech.net>
**
** Started on  Sun Apr  8 15:50:47 2012 marie baudy
** Last update Sun Apr  8 17:54:10 2012 marie baudy
*/

#include "../my_ftp.h"

int		my_ls(int sc)
{
  DIR		*dir;
  struct dirent	*ptr;

  if ((dir = opendir(".")) == NULL)
    {
      printf("Cannot open directory\n");
      return (0);
    }
  while ((ptr = readdir(dir)) != NULL)
    {
      if (ptr->d_name[0] != '.')
	{
	  write(sc, ptr->d_name, strlen(ptr->d_name));
	  write(sc, "\n", 1);
	}
    }
  if (errno == EBADF)
    {
      printf("Cannot read file\n");
      return (0);
    }
  return (1);
}
