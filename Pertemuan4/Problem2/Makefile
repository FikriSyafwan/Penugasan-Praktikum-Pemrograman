# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target: Build the program
multiplication_table: multiplication_table.o
	$(CXX) $(CXXFLAGS) -o multiplication_table multiplication_table.o

# Compile the source file into object file
multiplication_table.o: multiplication_table.cpp
	$(CXX) $(CXXFLAGS) -c multiplication_table.cpp

# Run the program interactively with user input
run: multiplication_table
	./multiplication_table

# Clean up compiled files
clean:
	rm -f *.o multiplication_table

# Test the program using test cases from test.txt
test: multiplication_table
	@echo "Running tests from test.txt:"
	@while read input; do \
		echo "Input: $$input"; \
		echo $$input | ./multiplication_table; \
		echo ""; \
	done < test.txt
