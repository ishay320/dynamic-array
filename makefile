CC:=gcc
CFLAGS:=-Wall -Wextra -g
SOURCES=example.c
OBJECTS=$(SOURCES:.c=.o)
TARGET:=example

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJECTS)
