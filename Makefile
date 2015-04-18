target = test as teststr testvec testgetline cmpstr linkstr replacestr \
		 vectorsize vectorop base clock virtualbase friendclass static \
		 complex clock++ complex-nonmem virtualfunc dynamic_cast testTemplate

.PHONY: all clean

all : $(target)	

% : %.cpp 
	g++ -Wall -std=c++11 -o $@ $<
clean : 
	rm -f $(target)
