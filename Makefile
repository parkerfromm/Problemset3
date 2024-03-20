CXX = g++
CXXFLAGS = -g 
LDFLAGS = -mavx512f -larmadillo -llapack -lblas

# Executable
EXE = ps3

# Object Files
OBJS = time.o ps3.o

# Default target
all: $(EXE)

# To compile individual object files
ps3: 
	$(CXX) $(CXXFLAGS) -o ps3 ps3.cpp $(LDFLAGS)

# To link the final executable
make:
	make $(EXE)

# Clean up
clean:
	rm -f $(EXE)


## sorry I can not get this version to detect armadillo for 
## some reason :(


# CC := g++
# CFLAGS := -Wall -g  -I./armadillo-12.8.0/include
# LDFLAGS :=-mavx512f -llapack -lblas -larmadillo  

# # Find source files with main function
# SRC := $(shell grep -l 'int main' *.cpp)
# EXCS := $(SRC:.cpp=)

# all: $(EXCS)

# %: %.c
# 	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# # Clean target
# clean:
# 	rm -f $(EXECUTABLES)
