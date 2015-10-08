CC 		= g++
FLAGS 	= -Wall -Wextra -std=c++11

.PHONY: all clean

all: $(target)

% : %.cpp 
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
