CXX = g++
CXXFLAGS = -Wall -std=c++11
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = patterns

# Default target
all: $(TARGET)

# Link all object files to create the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Compile each .cpp file to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Rebuild everything from scratch
rebuild: clean all

# Debug: show which files will be compiled
debug:
	@echo "Source files: $(SOURCES)"
	@echo "Object files: $(OBJECTS)"

.PHONY: all clean run rebuild debug