#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Day {
    char *name;
    int date;
    char *description;
};

struct Day create(){
    struct Day day;
    char temp[100];

    printf("Enter the day of the week:");
    scanf("%s", temp);
    day.name = strdup(temp);

    printf("Enter the date: ");
    scanf("%d", &day.date);

    printf("Enter a description: ");
    scanf("%s", temp);
    day.description = strdup(temp);     //strdup allocates memory and copies the string

    return day;

};

void read( struct Day *calendar, int numDays){
    for(int i = 0; i<numDays; i++){
        printf("Enter the detals of the day %d\n", i+1);
        calendar[i] = create();
    }
}

void display(struct Day *calendar, int numDays){
    printf("\n ---------Calendar-----\n");
    for(int i =0; i<numDays; i++){
        printf("Day : %s\n", calendar[i].name);
        printf("Date : %d\n", calendar[i].date);
        printf("Description : %s\n", calendar[i].description);
    }
    printf("\n");
}


int main(){
    int numDays;

    printf("Enter the number of the days in the calendar: %d\n", numDays);
    scanf("%d\n", &numDays);

    struct Day *calendar = (struct Day *) malloc(numDays * sizeof(struct Day));

    read(calendar, numDays);
    display(calendar, numDays);

    free(calendar);
}