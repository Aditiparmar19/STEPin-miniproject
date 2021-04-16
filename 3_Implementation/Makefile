OBJS	= project_main.o
SOURCE	= project_main.c
HEADER	= 
OUT	= output.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm
# -g option enables debugging mode 
# -c flag generates object code for separate files


all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)


# create/compile the individual files >>separately<<
project_main.o: project_main.c
	$(CC) $(FLAGS) project_main.c -lcunit


# clean house
clean:
	rm -f $(OBJS) $(OUT)

# run the program
run: $(OUT)
	./$(OUT)
