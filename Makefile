target = test as teststr testvec testgetline cmpstr linkstr replacestr \
		 vectorsize vectorop base clock virtualbase friendclass static \
		 complex clock++ complex-nonmem virtualfunc dynamic_cast \
		 testTemplate vectorinsert bool plusplus typechange cast-name testvirtual
CC 		= g++
FLAGS 	= -Wall -std=c++11

.PHONY: all clean

all : $(target)	

$(target) : % : %.cpp 
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
