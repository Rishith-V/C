# Define the C compiler
CC = gcc

# Define compiler flags (e.g., warnings, debug symbols)
CFLAGS = -Wall -g

# --- CHANGE THESE TO MATCH YOUR FILENAMES ---
# Define the source file and the executable name
SRCS = program.c
TARGET = program
# -----------------------------------------

# The default rule that runs when you just type "make"
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Rule to clean up the build files
clean:
	rm -f $(TARGET)

# Declare targets that don't create files
.PHONY: all run clean