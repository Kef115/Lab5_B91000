CC = gcc
CFLAGS = -Wall -I./src
SRC = src/main.c src/json.c src/cJSON.c
TARGET = build/mi_programa

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f build/*
