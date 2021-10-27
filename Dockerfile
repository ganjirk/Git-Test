FROM gcc:latest

COPY  ./src/*.c ./build/

COPY ./Include/*.h ./build/

WORKDIR ./build/

RUN   sed -i "s|../Include/basichead.h|basichead.h|g" Calc.c

RUN gcc  -c -o Main.o Main.c
RUN gcc  -c -o Calc.o Calc.c
RUN gcc  -o runme Main.o Calc.o
RUN chmod +x runme

CMD ["./runme"]
