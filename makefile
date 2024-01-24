project=main.o sub.o add.o
target=xzcal
CC=g++
$(target):$(project)
	$(CC) -o $(target) $(project) 
%.o:%.cpp
	$(CC) -c $^ -I ./include

.PHONY clean:
	rm $(project) $(target)
	
	
