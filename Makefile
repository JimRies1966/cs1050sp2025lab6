##############################################################################
# Makefile for Lab 6
# CMP_SC 1050
# Spring 2025
# February 24, 2025
# By Jim Ries (RiesJ@missouri.edu)
##############################################################################
CC = gcc
CPP = g++
CFLAGS = -Wall -Werror -c -g -std=c11 
CPPFLAGS = -Wall -Werror -c -g 
LDFLAGS = -lm 

default: lab6

honors: CFLAGS+= -DHONORS
honors: clean lab6

%.o : %.c 
	@echo Compiling $^ 
	@$(CC) $(CFLAGS) $^

%.o : %.cc
	@echo Compiling $^ 
	@$(CPP) $(CPPFLAGS) $^

lab6 : main.o lab6.o
	@echo Linking $@ 
	@$(CC) $^ $(LDFLAGS) -o $@

clean : 
	@rm -rf *.o
	@rm -rf lab6
	@echo All Clean!
