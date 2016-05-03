##
## Makefile for indie_studio in /home/polyeezy/rendu/CPP/mouillette_indie
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr 25 11:03:41 2016 Valerian Polizzi
## Last update Tue May  3 17:07:56 2016 Gonzague PAGIN
##

CC		=		g++

IrrlichtHome 	:= 		./lib/IrrLicht

BinPath 	= 		.

NAME		=		hyperSprint

SRC		=		src/main.cpp				\
				src/Manager/GraphicManager.cpp		\
				src/Manager/SoundManager.cpp		\
				src/General/Vec3.cpp			\
				src/AEntities/AEntity.cpp		\
				src/AEntities/EntityManager.cpp		\

OBJ		=		$(SRC:.cpp=.o)

INCLUDES	=		-I./include -I./include/Manager -I./include/AEntities/ -I./include/General/
INCLUDES	+=		-I./lib/IrrLicht/include/
INCLUDES	+=		-L/usr/X11R6/lib64 -lGL -lXxf86vm -lXext -lX11 -lXcursor

LDFLAGS		+=		-L$(IrrlichtHome)/lib/Linux -lIrrlicht -lIrrKlang
LDFLAGS		+=		-L/usr/X11R6/lib64 -lGL -lXxf86vm -lXext -lX11 -lXcursor

USERCXXFLAGS 	= 		-O3 -ffast-math
CXXFLAGS 	= 		$(USERCXXFLAGS)

CPPFLAGS	+=		-Wall -Wextra -Werror  $(INCLUDES) -std=c++11
CPPFLAGS 	+=		

MR_CLEAN        =               find ./ \( -name "*~" -o -name "\#*\#" \) -delete

all		:		$(NAME)

$(NAME)		:		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS) $(LDFLAGS)

clean		:
				$(MR_CLEAN)
				rm -f $(OBJ)

fclean		:		clean
				rm -f $(NAME)

re		:		clean all

.PHONY		:		all clean fclean re lib
