/**
 * function implementation file
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "planner.h"

char* Months[12] = {"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December"};

// name:	setDate
void setDate(Date* d) {
	time_t t = time(NULL);
	struct tm *tm = localtime(&t);
	
	d->year = tm->tm_year + 1900;
	d->month = tm->tm_mon + 1;
	d->day = tm->tm_mday;
	d->monthName = Months[tm->tm_mon];
	
	return;
}


