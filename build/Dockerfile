FROM gcc:4.9

#COPY ../src/*c

#COPY ../Include/*h

#WORKDIR ./runme

RUN gcc  -c -o Main.o cd ../src/ Main.c
RUN gcc  -c -o Calc.o cd ../src/ Calc.c
RUN gcc  -o runme Main.o Calc.o

CMD ["./runme"]
