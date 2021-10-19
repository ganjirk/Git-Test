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

# define list of objects
#OBJSC=$(SOURCES:.c=.o)
#OBJS=$(OBJSC:.cpp=.o)

# the target is obtained linking all .o files

all: $(TARGET)
$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^ 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
#Main.o: Main.c
#	$(CC) $(LFLAGS) -c Main.c

#Calc.o: Calc.c
#	$(CC) $(LFLAGS) -c Calc.c $(DEPS)

clean:
	rm -f *.o
	
purge: clean
	rm -f $(TARGET)

################################################################################
################################################################################
