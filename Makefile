CC=	gcc
CFLAGS=	-std=c99 -pedantic -Wall -Wextra -Werror

famplan: 	planner.h driver.c
		$(CC) -o $@ $^ $(CFLAGS)
