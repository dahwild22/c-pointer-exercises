//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <string.h>

void run_local_array() {
    printf("-------------------\n");
    printf("Running local array\n");
    printf("-------------------\n");

    // YOUR CODE HERE
    struct car {
        char make[10];
        char model[10];
        int year;

    };

    struct car arrayofCars[3] = {
            {"Honda", "Civic", 2017},
            {"Ford", "F150", 2018},
            {"Toyota", "4Runner", 2015}
    };

    for (int i = 0; i < 3; i++) {
        strcpy(arrayofCars[i].make, "Chevy");
        strcpy(arrayofCars[i].model, "Equinox");
        arrayofCars[i].year = 2016;
        printf("%s ", arrayofCars[i].make);
        printf("%s ", arrayofCars[i].model);
        printf("%d\n", arrayofCars[i].year);
    }
}