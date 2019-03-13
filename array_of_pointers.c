//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>

void run_array_of_pointers() {
    printf("-------------------\n");
    printf("Running array of pointers\n");
    printf("-------------------\n");
    // YOUR CODE HERE
    int *arrayThing[3];
    int a = 10;
    int b = 20;
    int c = 3;

    arrayThing[0] = &a;
    arrayThing[1] = &b;
    arrayThing[2] = &c;

    for (int i = 0; i <3; i++){
        arrayThing[i] = 12;
        printf("Address = %d\t Value = %d\n", arrayThing[i], arrayThing[i]);

    }

}