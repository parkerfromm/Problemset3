# CXX = g++
# CXXFLAGS = -g 
# LDFLAGS = -mavx512f -larmadillo -llapack -lblas

# # Executable
# EXE = ps3

# # Object Files
# OBJS = time.o ps3.o

# # Default target
# all: $(EXE)

# # To compile individual object files
# ps3: 
# 	$(CXX) $(CXXFLAGS) -o ps3 ps3.cpp $(LDFLAGS)

# # To link the final executable
# make:
# 	make $(EXE)

# # Clean up
# clean:
# 	rm -f $(EXE)


## sorry I can not get this version to detect armadillo for 
## some reason :(


CPP := g++
CPPFLAGS := -Wall -g  -I./armadillo-12.8.0/include -MMD -MP -mavx512f
LDFLAGS := -llapack -lblas -larmadillo  

### uncomment if a libabry
## LIBFLAGS := -L/path/to/library


SRC:= $(shell grep -lRE 'int main' *.cpp)

EXCS := $(SRC:.cpp=)
OBJ := $(SRC:.cpp=.o)
DEP := $(OBJ:.o=.d)


OBJDIR := obj
DEPDIR := dep

all: $(EXCS)

setup:
	@mkdir -p $(OBJDIR) 
	@mkdir -p $(DEPDIR)

## add $(LIBFLAGGS) after $(CPPFLAGS) if libarary is included
$(EXCS): %: %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<

$(OBJDIR)/%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

-include $(DEP)

# # Clean target
clean: 
	rm -f $(EXCS)
