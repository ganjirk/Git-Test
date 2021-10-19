################################################################################
### CUSTOMIZE BELOW HERE #######################################################

CC=gcc # define the compiler to use
TARGET=runme # define the name of the executable
SOURCES=*.c
CFLAGS=-O3
LFLAGS=-lm
DEPS=*.h
OBJ=*.o

################################################################################
### DO NOT EDIT THE FOLLOWING LINES ############################################

# define list of objects
#OBJSC=$(SOURCES:.c=.o)
#OBJS=$(OBJSC:.cpp=.o)

# the target is obtained linking all .o files

all: $(OBJ)
	$(CC) $(LFLAGS) $(OBJ) -o $(TARGET)

Main.o: Main.c $(DEPS)
	$(CC) $(LFLAGS) -c Main.c $(DEPS)

Calc.o: Calc.c $(DEPS)
	$(CC) $(LFLAGS) -c Calc.c $(DEPS)

clean:
	rm -f *.o
	
purge: clean
	rm -f $(TARGET)

################################################################################
################################################################################
