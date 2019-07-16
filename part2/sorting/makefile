.PHONY: all clean

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.out,$(SRCS))

all: $(OBJS)

clean:
	rm -fv $(OBJS)

%.out: %.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@