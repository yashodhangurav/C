#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Day{
    char *name;
    int date;
    char *description;
};

struct Day create(){
    struct Day day;
    char temp[100];

    printf("Enter the day of the week: ");
    scanf("%s", temp);
    day.name = strdup(temp);

    printf("Enter the date: ");
    scanf("%d", &day.date);

    printf("Enter a description: ");
    scanf("%s", temp);
    day.description = strdup(temp);

    return day;
};

void read(struct Day *calendar, int numDays){
    for(int i = 0; i<numDays; i++){
        calendar[i] = create();
    }
}

void display(struct Day *calendar, int numDays){
    for(int i = 0; i<numDays; i++){
        printf("Day: %s", calendar[i].name);
        printf("date: %d", calendar[i].date);
        printf("description: %s", calendar[i].description);
    }
}

int main(){
    int numDays;

    printf("Enter the number of the days  in a week : ");
    scanf("%d", &numDays);

    struct Day *calendar = (struct Day*)malloc(numDays * sizeof(struct Day));

    if(calendar == NULL){
        printf("memory allocation is failed!!");
        return 1;
    }

    read(calendar, numDays);
    display(calendar, numDays);

    for(int i = 0; i<numDays; i++){
        free(calendar[i].name);
        free(calendar[i].description);
    }

    free(calendar);

    return 0;
}