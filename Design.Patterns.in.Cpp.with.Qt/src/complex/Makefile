# Makefile

RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g
INCLUDE = 
LDFLAGS = 
LDPATH = 

PROGS =	complex-conversions complex-test

.PHONY: all
all: $(PROGS)
	@echo "build OK!"

clean:
	@$(RM) $(PROGS) *.o
	@echo "clean OK!"

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDE)

complex-conversions: complex-conversions.o complex.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

complex-test: complex-test.o complex.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)


