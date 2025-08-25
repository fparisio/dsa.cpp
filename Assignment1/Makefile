CXX = g++
CXXFLAGS = -Wall -std=c++14
SOURCES = $(wildcard *.cpp)
HEADERS = $(wildcard *.h)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = patterns

# Allow multiple ways to enable auto mode:
# - make run auto
# - make run AUTO=1
# - make run ARGS=--auto
ifneq (,$(filter auto,$(MAKECMDGOALS)))
ARGS += --auto
endif
ifdef AUTO
ifneq ($(AUTO),)
ARGS += --auto
endif
endif

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
	./$(TARGET) $(ARGS)

# Rebuild everything from scratch
rebuild: clean all

# Debug: show which files will be compiled
debug:
	@echo "Source files: $(SOURCES)"
	@echo "Object files: $(OBJECTS)"

.PHONY: all clean run rebuild debug --auto auto

# Dummy targets so `auto`/`--auto` are treated as goals and not files
--auto:
auto: