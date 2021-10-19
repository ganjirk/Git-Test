################################################################################
### CUSTOMIZE BELOW HERE #######################################################

CC=gcc # define the compiler to use
TARGET=runme # define the name of the executable
SOURCES=*.c
CFLAGS=-O3
LFLAGS=-lm
DEPS=basichead.h
OBJ=Main.o Calc.o

################################################################################
### DO NOT EDIT THE FOLLOWING LINES ############################################

runme: Main.o Calc.o
	$(CC) $(LFLAGS) -o runme Main.o Calc.o

Main.o: Main.c
	$(CC) $(LFLAGS) -c Main.c

Calc.o: Calc.c
	$(CC) $(LFLAGS) -c Calc.c $(DEPS)

clean:
	rm -f *.o
	
purge: 
	rm -f $(TARGET)

################################################################################
################################################################################
