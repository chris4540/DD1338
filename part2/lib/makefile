.PHONY: all clean

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
INCLUDE = -I.
CXXFLAGS = $(INCLUDE)

all: $(OBJS)

clean:
	rm -fv $(OBJS)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $^ -o $@


