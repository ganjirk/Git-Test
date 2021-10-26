FROM gcc:4.9

COPY . ../src/*c

COPY . ../Include/*h

#WORKDIR RUN ./runme

RUN gcc  -c -o Main.o Main.c
RUN gcc  -c -o Calc.o Calc.c
RUN gcc  -o runme Main.o Calc.o

CMD["./runme"]
