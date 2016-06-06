##
## Makefile for indie_studio in /home/polyeezy/rendu/CPP/mouillette_indie
##
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
##
## Started on  Mon Apr 25 11:03:41 2016 Valerian Polizzi
## Last update Mon Jun  6 22:20:19 2016 Marc MORANT
##

CC		=		clang++

IrrlichtHome 	:= 		./lib/IrrLicht

BinPath 	= 		.

NAME		=		hyperSprint

SRC		=		src/main.cpp				\
				src/Manager/Core.cpp			\
				src/Manager/GraphicManager.cpp		\
				src/Manager/SoundManager.cpp		\
				src/Manager/ControllerManager.cpp	\
				src/Manager/SceneManager.cpp		\
				src/Manager/CameraManager.cpp		\
				src/Manager/TextureManager.cpp		\
				src/General/Vec3.cpp			\
				src/AEntities/AEntity.cpp		\
				src/AEntities/EntityManager.cpp		\
				src/AEntities/Button.cpp		\
				src/Scenes/MainMenu.cpp			\
				src/AEntities/GraphicEntity.cpp		\
				src/AEntities/GraphicEntityManager.cpp		\
				src/Scenes/AMenu.cpp			\
				src/Scenes/AScene.cpp			\
				src/Scenes/Options.cpp			\
				src/Scenes/AGameplay.cpp		\
				src/AEntities/ACar.cpp			\
				src/Scenes/Play.cpp			\
				src/Entities/cars/FordGT.cpp		\
				src/AEntities/AMap.cpp			\
				src/Entities/maps/Map1.cpp			\
				src/General/Game.cpp			\
				src/General/Timer.cpp			\


OBJ		=		$(SRC:.cpp=.o)

INCLUDES	=		-I./include -I./include/Manager -I./include/AEntities/ -I./include/General/
INCLUDES	+=		-I./lib/IrrLicht/include/ -I./include/Scenes/ -I./include/Entities -I./include/Entities/cars
INCLUDES	+=		-I./include/Entities/map


LDFLAGS		+=		-L$(IrrlichtHome)/lib/Linux -L/usr/X11R6/lib64 -L/usr/lib  -lIrrlicht -lpthread -lIrrKlang
LDFLAGS		+=		-lGL -lXxf86vm -lXext -lX11 -lXcursor

USERCXXFLAGS 	= 		-O3 -ffast-math
CXXFLAGS 	= 		$(USERCXXFLAGS)

CXXFLAGS	+=		-Wall -Wextra -Werror -Wno-unused-variable -Wno-unused-parameter $(INCLUDES) -std=c++11 -g3

MR_CLEAN        =               find ./ \( -name "*~" -o -name "\#*\#" \) -delete


all		:		$(NAME)

$(NAME)		:		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CXXFLAGS) -lpthread $(LDFLAGS)
				printf "#!/bin/bash\nexport LD_LIBRARY_PATH=$(PWD)/lib/IrrLicht/lib/Linux\n./hyperSprint" > run.sh
				chmod +x run.sh

install		:		$(NAME)
				cp lib/IrrLicht/lib/Linux/* /usr/lib
				cp hyperSprint /usr/bin
				cp -R conf /usr/bin

clean		:
				$(MR_CLEAN)
				rm -f $(OBJ)

fclean		:		clean
				rm -f $(NAME)
				rm -f run.sh

re		:		clean all

.PHONY		:		all clean fclean re lib
