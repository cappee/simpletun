TARGET = simpletun

SRCS = simpletun.c caesar/caesar.c rc4/rc4.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -O2 -Irc4

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean