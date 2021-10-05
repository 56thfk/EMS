CC = gcc

CFLAGS = -Wall

LIB =

INCLUDE = -Iinclude/

SRC_DIR = ./src

TARGET = main

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: main

$/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ -MD

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
