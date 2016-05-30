##
## Makefile for indie_studio in /home/polyeezy/rendu/CPP/mouillette_indie
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr 25 11:03:41 2016 Valerian Polizzi
## Last update Mon May 30 11:47:51 2016 Loïc Weinhard
##

CC		=		clang++

IrrlichtHome 	:= 		./lib/IrrLicht

BinPath 	= 		.

NAME		=		hyperSprint

SRC		=		src/main.cpp				\
				src/Manager/Core.cpp			\
				src/Manager/GraphicManager.cpp		\
				src/Manager/ControllerManager.cpp	\
				src/General/Vec3.cpp			\
				src/AEntities/AEntity.cpp		\
				src/AEntities/EntityManager.cpp		\
				src/Scenes/MainMenu.cpp			\

OBJ		=		$(SRC:.cpp=.o)

INCLUDES	=		-I./include -I./include/Manager -I./include/AEntities/ -I./include/General/
INCLUDES	+=		-I./lib/IrrLicht/include/ -I./include/Scenes/


LDFLAGS		+=		-L$(IrrlichtHome)/lib/Linux -L/usr/X11R6/lib64 -L/usr/lib  -lIrrlicht -lpthread ##-lIrrKlang
LDFLAGS		+=		-lGL -lXxf86vm -lXext -lX11 -lXcursor

USERCXXFLAGS 	= 		-O3 -ffast-math
CXXFLAGS 	= 		$(USERCXXFLAGS)

CXXFLAGS	+=		-Wall -Wextra -Wno-unused-variable -Wno-unused-parameter $(INCLUDES) -std=c++11

MR_CLEAN        =               find ./ \( -name "*~" -o -name "\#*\#" \) -delete

all		:		$(NAME)

$(NAME)		:		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CXXFLAGS) -lpthread $(LDFLAGS)

clean		:
				$(MR_CLEAN)
				rm -f $(OBJ)

fclean		:		clean
				rm -f $(NAME)

re		:		clean all

.PHONY		:		all clean fclean re lib
