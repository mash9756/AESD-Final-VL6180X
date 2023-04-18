
CC=gcc
RPIGCC=arm-linux-gnueabihf-gcc
FLAGS=-Wall -Werror
TARGET=vl6180_pi
MAIN=test
LIBS=-L/home/admin/pigpio-master
HDRS=-I/home/admin/pigpio-master

all: default

default: main_o
	$(RPIGCC) $(FLAGS) $(MAIN).o $(TARGET).o -o $(MAIN) $(LIBS) $(HDRS) -pthread -lpigpio -lrt

main_o:
	$(RPIGCC) $(FLAGS) -c $(TARGET).c -o $(TARGET).o $(LIBS) $(HDRS) -pthread -lpigpio -lrt
	$(RPIGCC) $(FLAGS) -c $(MAIN).c -o $(MAIN).o $(LIBS) $(HDRS) -pthread -lpigpio -lrt

host: main_host_o
	$(CC) $(FLAGS) $(MAIN).o $(TARGET).o -o $(MAIN) -pthread -lpigpio -lrt

main_host_o:
	$(CC) $(FLAGS) -c $(TARGET).c -o $(TARGET).o -pthread -lpigpio -lrt
	$(CC) $(FLAGS) -c $(MAIN).c -o $(MAIN).o -pthread -lpigpio -lrt

clean:
	rm -f *.o $(TARGET) $(MAIN)