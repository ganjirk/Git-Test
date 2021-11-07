FROM gcc:latest

COPY  ./src/*.c ./build/

COPY ./Include/*.h ./build/

WORKDIR ./build/

RUN   sed -i "s|../Include/basichead.h|basichead.h|g" Operators.c

RUN gcc  -c -o Main.o Main.c
RUN gcc  -c -o Operators.o Operators.c
RUN gcc  -o runme Main.o Operators.o

CMD ["./runme"]
