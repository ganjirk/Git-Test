FROM gcc:latest

COPY  ./src/*.c ./build/

COPY ./Include/*.h ./build/

WORKDIR ./build/

RUN   sed -i "s|../Include/basichead.h|basichead.h|g" *.c

RUN gcc  -c -o Main.o Main.c
RUN gcc  -c -o Operators.o Operators.c
RUN gcc  -c -o Functions.o Functions.c
RUN gcc  -o runme Main.o Operators.o Functions.o

CMD ["chmod +x runme"]

COPY runme ./build/

CMD ["./runme"]
