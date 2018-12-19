/* main driver for Family Planner
 * author: Gianna Mule
 * date: 12/10/16
 * Contents:
 *	main
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "planner.h"

int main(int argc, char** argv) {

	(void)argc;
	(void)argv;

	printf("Welcome to the Planner\n");

	Date* d = malloc(sizeof(Date));
	
	time_t t = time(NULL);
	struct tm *tm = localtime(&t);
	
	d->year = tm->tm_year + 1900;
	d->month = tm->tm_mon + 1;
	d->day = tm->tm_mday;
	d->monthName = Months[tm->tm_mon];

	printf("The date is %d/%d/%d, month of %s\n", d->month, d->day, d->year, d->monthName);
	
	free(d);

	return EXIT_SUCCESS;
	
}
