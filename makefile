#Makefile for "projeto final LP" C++ application
#Created by Yan Carlos 04/07/2018
PROG =	sentinels
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++14 -I/usr/q01/include/src
LDFLAGS = -L/usr/sentinels/lib-lmylib
OBJS = viking.o paladino.o mago.o assassino.o esqueleto.o minotauro.o tycondrius.o verdugo.o ghoul.o fases.o dado.o ataque.o bloqueio.o esquiva.o entidade.o monstros.o personagem.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
viking.o	:	viking.h
	$(CC) $(CPPFLAGS) -c viking.cpp
assassino.o	:	assassino.h
	$(CC) $(CPPFLAGS) -c assassino.cpp
paladino.o	:	paladino.h
	$(CC) $(CPPFLAGS) -c paladino.cpp
mago.o	:	mago.h
	$(CC) $(CPPFLAGS) -c mago.cpp
esqueleto.o	:	esqueleto.h
	$(CC) $(CPPFLAGS) -c esqueleto.cpp
minotauro.o	:	minotauro.h
	$(CC) $(CPPFLAGS) -c minotauro.cpp
tycondrius.o	:	tycondrius.h
	$(CC) $(CPPFLAGS) -c tycondrius.cpp
ghoul.o	:	ghoul.h
	$(CC) $(CPPFLAGS) -c ghoul.cpp
fases.o	:	fases.h
	$(CC) $(CPPFLAGS) -c fases.cpp
dado.o	:	dado.h
	$(CC) $(CPPFLAGS) -c dado.cpp
ataque.o	:	ataque.h
	$(CC) $(CPPFLAGS) -c ataque.cpp
bloqueio.o	:	bloqueio.h
	$(CC) $(CPPFLAGS) -c bloqueio.cpp
esquiva.o	:	esquiva.h
	$(CC) $(CPPFLAGS) -c esquiva.cpp
entidade.o	:	entidade.h
	$(CC) $(CPPFLAGS) -c entidade.cpp
monstros.o	:	monstros.h
	$(CC) $(CPPFLAGS) -c monstros.cpp
personagem.o	:	personagem.h
	$(CC) $(CPPFLAGS) -c personagem.cpp
main.o	:	combate.h
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG)$(OBJS)
