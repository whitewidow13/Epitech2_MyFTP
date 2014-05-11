##
## Makefile for my_ftp in /home/baudy_m//Desktop/Tek2/Projets/Systeme_Unix/myftp-2015-2014s-baudy_m
##
## Made by marie baudy
## Login   <baudy_m@epitech.net>
##
## Started on  Sun Apr  8 12:47:38 2012 marie baudy
## Last update Sun Apr  8 23:22:27 2012 marie baudy
##

NAME_SERVEUR=	serveur
NAME_CLIENT=	client

SRC_SERVEUR=	commun_func.c			\
		src_serveur/create_serveur.c	\
		src_serveur/serveur_loop.c	\
		src_serveur/check_command.c	\
		src_serveur/my_ls.c		\
		src_serveur/my_pwd.c		

SRC_CLIENT=	commun_func.c			\
		src_client/create_client.c	\
		src_client/client_loop.c	\
		src_client/ls.c			\
		src_client/pwd.c


OBJ_SERVEUR=	$(SRC_SERVEUR:.c=.o)
OBJ_CLIENT=	$(SRC_CLIENT:.c=.o)

CC=		gcc

CFLAGS=		-W -Wall -Wextra

RM=		rm -rf

all:	
	$(CC) -o $(NAME_SERVEUR) $(CFLAGS) $(SRC_SERVEUR)
	$(CC) -o $(NAME_CLIENT) $(CFLAGS) $(SRC_CLIENT)
	cp serveur src_serveur
	cp client src_client

clean:
	$(RM) *~ *# *.o

fclean: clean
	$(RM) $(NAME_SERVEUR)
	$(RM) $(NAME_CLIENT)

re:	fclean all
