OBJS	= project_main.o
SOURCE	= project_main.c
HEADER	= 
OUT	= aa.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

project_main.o: project_main.c
	$(CC) $(FLAGS) project_main.c 


clean:
	rm -f $(OBJS) $(OUT)
