all: Funções Matriz Parâmetros

CC = gcc
CFLAGS=-Wall -g3 -O2

Funções: 
	cd Funções && $(MAKE)

Matriz:
	cd Matriz && $(MAKE)

Parâmetros:
	cd Parâmetros && $(MAKE)
