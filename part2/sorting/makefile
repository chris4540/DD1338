.PHONY: all clean

SRCS = $(wildcard *.cpp)
EXES = $(patsubst %.cpp,%,$(SRCS))
LIBS = ../lib/
INCLUDE = -I$(LIBS)
CXXFLAGS = $(INCLUDE)
LIB_OBJS = utils.o

all: quicksort qsort

quicksort: quicksort.o
	$(CXX) -o $@ $(CXXFLAGS) $^

qsort: qsort.o
	$(CXX) -o $@ $(CXXFLAGS) $^

clean:
	rm -fv $(EXES)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $^ -o $@