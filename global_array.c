//
// Created by Ivo Georgiev on 2019-03-07. Modified by Dan Wilder.
//

#include <stdio.h>
#include <string.h>

struct students{
    char firstName[20];
    char lastName[20];
    char dateOfBirth[20];
    int age;
};
struct students arrayOfStudents[4] = {
        {"Daniel", "Wilder", "December3rd", 30},
        {"Echgelen", "Wilder", "January1st", 24},
        {"Joel", "Wilder", "January1st", 25},
        {"Jacob", "Wilder", "January1st", 19}
};

void run_global_array() {
    printf("-------------------\n");
    printf("Running global array\n");
    printf("-------------------\n");
    // YOUR CODE HERE
    for (int i = 0; i < 4; i++) {
        strcpy(arrayOfStudents[i].firstName, "Dee ");
        strcpy(arrayOfStudents[i].lastName, "Dub ");
        strcpy(arrayOfStudents[i].dateOfBirth, "Today ");
        arrayOfStudents[i].age = 30;
        printf("%s", arrayOfStudents[i].firstName);
        printf("%s", arrayOfStudents[i].lastName);
        printf("%s", arrayOfStudents[i].dateOfBirth);
        printf("%d\n", arrayOfStudents[i].age);

    }
}