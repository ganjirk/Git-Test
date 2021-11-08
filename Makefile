################################################################################
### CUSTOMIZE BELOW HERE #######################################################

CC=gcc # define the compiler to use

CFLAGS=-O3
LFLAGS=-lm
DEPS=/home/rajkumarganji/Git-Test/Include/basichead.h
DIR=/home/rajkumarganji/Git-Test/
#OBJ=Main.o Operators.o

################################################################################
### DO NOT EDIT THE FOLLOWING LINES ############################################

SRC=src/Main.c src/Operators.c src/Functions.c
TARGET=runme


OBJ := src/Main.o
OBJ += src/Operators.o
OBJ += src/Functions.o

# Compiles each of the object files as separate targets
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
# -o $@ -> Tells make to put the output in a file named after the target
# $^ 	-> all of the file names in $(OBJ) separated by a space
runme: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	
###################################################

.PHONY: clean
# Target to clean files created during compilation
	
clean:
	rm -f src/*.o
	
purge: 
	rm -f $(TARGET)

################################################################################
################################################################################
