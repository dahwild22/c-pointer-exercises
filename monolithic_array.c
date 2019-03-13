//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * a;
    int b;
}$;

void run_monolithic_array() {
    printf("-------------------\n");
    printf("Running monolithic array\n");
    printf("-------------------\n");

    // YOUR CODE HERE
    $ *array = malloc(5*sizeof(array));

    for (int b = 0; b < 5; b++) {
        array[b].a = 1;
        printf("%d\n", array[b].a);
    }

    free(array);
/*
   for (int b = 0; b < 5; b++) {
       free(array[b].a);
       printf("%d\n", array[b].a);
   }
*/
}