CC = gcc
TARGET = libft
OBJECTS = ft_calloc_ft_strdup.o ft_fd.o ft_is.o ft_itoa.o ft_mem1.o ft_mem2.o ft_split.o ft_str1.o ft_str2.o ft_striteri.o ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_substr.o ft_to.o

all : $(TARGET)

CFLAGS = -Wall -Wetra -Werror
LDFLAGS = -lc

.c.o : 
	$(CC) $(CFALGS) -c -o $@ $<

$(TARGET) : OBJECTS
	$(CC) $(LDFLAGS) -o $@ $^

clean :
	rm -f $(OBJECTS) $(TARGET)