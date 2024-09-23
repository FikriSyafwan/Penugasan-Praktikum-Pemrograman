# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target: Build the program
sum_n: sum_n.o
	$(CXX) $(CXXFLAGS) -o sum_n sum_n.o

# Compile the source file into object file
sum_n.o: sum_n.cpp
	$(CXX) $(CXXFLAGS) -c sum_n.cpp

# Run the program interactively with user input
run: sum_n
	./sum_n

# Clean up compiled files
clean:
	rm -f *.o sum_n

# Test the program using test cases from test.txt
test: sum_n
	@echo "Running tests from test.txt:"
	@while read input expected; do \
		echo "Input: $$input"; \
		echo "Expected Output: $$expected"; \
		result=$$(echo $$input | ./sum_n); \
		echo "Actual Output: $$result"; \
		if [ "$$result" = "$$expected" ]; then \
			echo "Test passed!"; \
		else \
			echo "Test failed!"; \
		fi; \
		echo ""; \
	done < test.txt
