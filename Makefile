target = test as teststr testvec testgetline cmpstr linkstr replacestr vectorsize vectorop \
		 clock 

all : $(target)	

% : %.cpp 
	g++ -Wall -std=c++11 -o $@ $<
clean : 
	rm $(target)
