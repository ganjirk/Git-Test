################################################################################
### CUSTOMIZE BELOW HERE #######################################################

CC=gcc # define the compiler to use
TARGET=runme # define the name of the executable
SOURCES=*.c
CFLAGS=-O3
LFLAGS=-lm
DEPS=*.h

################################################################################
### DO NOT EDIT THE FOLLOWING LINES ############################################

# define list of objects
OBJSC=$(SOURCES:.c=.o)
OBJS=$(OBJSC:.cpp=.o)

# the target is obtained linking all .o files

all: $(DEPS) $(SOURCES) $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
	
clean:
	rm -f *.o
	
purge: clean
	rm -f $(TARGET)

################################################################################
################################################################################
