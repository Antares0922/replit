CC = gcc
CFLAGS = -g -Wall

main : main.c
	$(CC) $(CFLAGS) main.c -o main

