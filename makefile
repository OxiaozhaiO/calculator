project=main.o
target=xz
CC=g++
$(target):$(project)
	$(CC) -o $(target) $(project) 
%.o:%.cpp
	$(CC) -c $^ 

.PHONY clean:
	rm $(project) $(target)
	
	
