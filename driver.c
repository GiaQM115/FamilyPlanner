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



	(void)argc;
	(void)argv;

	printf("Welcome to the Planner\n");

	Date* today = malloc(sizeof(Date));

	setDate(today);

	printf("The date is %d/%d/%d, month of %s\n", today->month, today->day, today->year, today->monthName);
	
	free(today);

	return EXIT_SUCCESS;
	
}
