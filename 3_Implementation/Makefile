OBJS	= project_main.o
SOURCE	= project_main.c
HEADER	= 
OUT	= output.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

output.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT)
project_main.o: project_main.c
	$(CC) $(FLAGS) project_main.c 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
