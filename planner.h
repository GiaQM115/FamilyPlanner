#ifndef PLANNER_H
#define PLANNER_H

typedef struct Date {
	char* monthName;
	int month;
	int day;
	int year;
} Date;

typedef struct Event {
	char* title;
	char* location;
	struct User* driver;
	struct User* owner;
	char* notes;
	Date* start;
	Date* end;
	int hour;
	int minute;
	int isMorning;
} Event;

typedef struct User {
	char* name;
	Event* Events;
} User;

/**
 * name:	setDate
 * params:	Date* d
 * returns:	none
 * func:	sets all Date fields to todays date
 */
void setDate(Date* d);

#endif // PLANNER_H
