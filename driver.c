/* main driver for Family Planner
 * author: Gianna Mule
 * date: 12/10/16
 * Contents:
 *	main
 * */

#include <stdio.h>
#include <stdlib.h>
#include "planner.h"

int main(int argc, char** argv) {

	Date* today = malloc(sizeof(Date));
	users = calloc(1, sizeof(User));
	users[0] = malloc(sizeof(User));
	numUsers = 0;

	(void)argc;
	(void)argv;

	setDate(today);

	drawMain("Mule Family");

	free(today);
	for(int i = 0; i < numUsers; i++) {
		free(users[i]);
	}	
	free(users);

	return EXIT_SUCCESS;
	
}
