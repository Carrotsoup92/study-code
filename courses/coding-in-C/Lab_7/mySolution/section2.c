/*
 * File: section2.c
 * Description: Train with linked lists in C
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct queueElem
{
    double container;   // data stored in the node
    queueElem * next;  // pointer to the next node
} queueElem;

typedef struct Queue
{
    queueElem * head;
    queueElem * tail;
} Queue;

Queue * initQueue (){
    Queue * Q = malloc(sizeof(Queue));
    Q->head = NULL;
    Q->tail = NULL;
    return Q;
}

void enqueue(Queue * Q, int a) {
    queueElem * el = malloc(sizeof(queueElem));
    el->container = a;
    el->next = NULL;
    if(Q->head == NULL && Q->tail == NULL) {
        Q->head = el;
        Q->tail = el;
    } else {
        Q->tail->next = el;
        Q->tail = el;
    }
}

int dequeue(Queue * Q) {
    if (Q->head == NULL && Q->tail == NULL) {
        return -1;
    } else {
        queueElem * out = Q->head;
        out->next = NULL;
        int ausgabe = out->container;
        free(out);
        return ausgabe;
    }
}

void printQueue(Queue * Q) {
    queueElem * temp = Q->head;
    printf("Queue:\n");
    while (temp != NULL) {
        printf("%d\n", temp->container);
        temp = temp->next;
    }
    
}

void deleteQueue(Queue * Q) {
    while (Q->head != NULL){
        dequeue(Q);
    }
    free(Q);
}

 
int main () {

     


    return 0;
}