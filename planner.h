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

int numUsers;
User** users;

/**
 * name:	setDate
 * params:	Date* d
 * returns:	none
 * func:	sets all Date fields to todays date
 */
void setDate(Date* d);

/**
 * name:	addUser
 * params:	char* name, User* u
 * returns:	none
 * func:	creates a new user in pointer u with name name
 * 		does not initiliaze users Events list
 */
void addUser(char* n, User* u);

/**
 * name:	drawMain
 * params:	char* fam
 * returns:	none
 * func:	draws main scene graphics 
 */
void drawMain(char* fam);

#endif // PLANNER_H
