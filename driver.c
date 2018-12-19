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

	addUser("Gia\0",users[0]);

	printf("Welcome to the Planner\n");
	printf("The date is %d/%d/%d, month of %s\n", today->month, today->day, today->year, today->monthName);
	printf("There are %d users:\n\t%s\n",numUsers,users[0]->name);

	free(today);

	return EXIT_SUCCESS;
	
}
