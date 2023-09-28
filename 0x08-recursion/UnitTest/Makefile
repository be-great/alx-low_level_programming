# List of unittest files (replace with your actual file names)
UNITTESTS = unittest0.c unittest1.c unittest2.c unittest3.c unittest4.c unittest5.c unittest6.c unittest7.c unittest8.c

# Pattern to match filenames
PATTERN = [0-9][^main][^main][^main][^main][^main].c

# Generate the list of output names by removing the ".c" extension
OUTPUTS = $(UNITTESTS:.c=)

# Define the default target to build all the test cases
all: $(OUTPUTS)

# Rule to build each test case
%: %.c
	gcc -o $@ $< $(filter ../$(PATTERN), $(wildcard ../$(PATTERN))) $(shell pkg-config --cflags --libs check)

# Phony target to clean the generated executables
.PHONY: clean
clean:
	rm -f $(OUTPUTS)
