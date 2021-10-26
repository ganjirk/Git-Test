FROM gcc:latest

COPY . cd ../src/*c

COPY . cd ../Include/*h

#WORKDIR ./runme

RUN gcc  -c -o Main.o Main.c
RUN gcc  -c -o Calc.o Calc.c
RUN gcc  -o runme Main.o Calc.o

CMD ["./runme"]
