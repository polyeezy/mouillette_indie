##
## Makefile for indie_studio in /home/polyeezy/rendu/CPP/mouillette_indie
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr 25 11:03:41 2016 Valerian Polizzi
## Last update Fri Apr 29 16:57:35 2016 Loïc Weinhard
##

CC		=		g++

NAME		=		hyperSprint

SRC		=		src/main.cpp				\
				src/Manager/GraphicManager.cpp		\
				src/Vec3.cpp				\
				src/AEntities/AEntity.cpp		\

OBJ		=		$(SRC:.cpp=.o)

INCLUDES	=		-I./include -I./include/Manager -I./include/AEntities/

CPPFLAGS	+=		-Wall -Wextra -Werror $(INCLUDES) -std=c++11


MR_CLEAN        =               find ./ \( -name "*~" -o -name "\#*\#" \) -delete

all		:		$(NAME)

$(NAME)		:		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS)

clean		:
				$(MR_CLEAN)
				rm -f $(OBJ)

fclean		:		clean
				rm -f $(NAME)

re		:		clean all

.PHONY		:		all clean fclean re lib
