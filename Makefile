CC=	gcc
CFLAGS=	-std=c99 -pedantic -Wall -Wextra -Werror
DEPS=	driver.o implement.o graphics.o

famplan: 	$(DEPS)
		$(CC) -o $@ $^ $(CFLAGS) -lSDL2

driver.o:	driver.c planner.h
		$(CC) -c -o $@ driver.c $(CFLAGS)

implement.o:	implement.c planner.h
		$(CC) -c -o $@ implement.c $(CFLAGS)

graphics.o:	graphics.c planner.h
		$(CC) -c -o $@ graphics.c `sdl2-config --cflags --libs`
