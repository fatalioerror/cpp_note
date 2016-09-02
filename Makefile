CC = g++
CXX = g++
CXXFLAGS += -std=c++14

OBJS = my_sizeof.o
EXES = my_sizeof

.PHONY: all clean

all: $(EXES) $(OBJS)

%: %.o
	$(CXX) -o $@ $< $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c $< $(CXXFLAGS)

clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
