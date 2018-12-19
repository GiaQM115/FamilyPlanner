CC=	gcc
CFLAGS=	-std=c99 -pedantic -Wall -Wextra -Werror
DEPS=	driver.o implement.o

famplan: 	$(DEPS)
		$(CC) -o $@ $^ $(CFLAGS)

driver.o:	driver.c planner.h
		$(CC) -c -o $@ driver.c $(CFLAGS)

implement.o:	implement.c planner.h
		$(CC) -c -o $@ implement.c $(CFLAGS)
