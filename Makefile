.PHONY: all clean

CXXFLAGS = -O3 -std=c++2b

all: driver

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -S -c $^
	$(CXX) $(CXXFLAGS) -c $^

driver : driver.o print_json.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f *.o *.s driver
