CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -lssl -lcrypto
SOURCES = src/sorbet_extended.c src/disk_utils.c src/data_management.c src/error_handling.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = sorbet_extended

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDFLAGS)

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
