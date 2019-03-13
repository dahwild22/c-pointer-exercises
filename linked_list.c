//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *BuildOneTwoThree() {
    struct node *head = NULL;
    struct node *middle = NULL;
    struct node *tail = NULL;
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    tail = malloc(sizeof(struct node));

    head->data = 1;
    head->next = middle;
    middle->data = 2;
    middle->next = tail;
    tail->data = 3;
    tail->next = NULL;

    return head;
}

void run_linked_list() {



}