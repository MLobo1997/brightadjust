FLAGS= -Wall -Wextra -pedantic -Wno-long-long -O2
CFLAGSDEBUG= -Wall -Wextra -pedantic -Wno-long-long -g
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))
EXEC=brightadjust


$(EXEC): $(OBJS)
			 $(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

limpar:
			rm $(EXEC) *.o

debug:
			gcc -Wall -Wextra -pedantic -Wno-long-long -g *.c -o debug

install: cp brightadjust /usr/bin/brightadjust
