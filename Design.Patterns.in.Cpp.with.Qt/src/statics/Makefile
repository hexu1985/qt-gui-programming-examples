# Makefile

RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g
INCLUDE = 
LDFLAGS = 
LDPATH = 

PROGS =	static-test static3

.PHONY: all
all: $(PROGS)
	@echo "build OK!"

clean:
	@$(RM) $(PROGS) *.o
	@echo "clean OK!"

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDE)

static-test: static-test.o static.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

static3: static3.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

