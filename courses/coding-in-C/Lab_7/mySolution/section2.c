/*
 * File: section2.c
 * Description: Train with linked lists in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Each queue element stores a double and a pointer to the next element
typedef struct queueElem
{
    double container;   // data stored in the node
    struct queueElem * next;  // pointer to the next node
} queueElem;

// The Queue itself keeps pointers to the head and tail nodes
typedef struct Queue
{
    queueElem * head;  // points to the first node in the queue, 
    queueElem * tail;  // points to the last node in the queue
} Queue;


// Initialize a new Queue
Queue * initQueue (){
    Queue * Q = malloc(sizeof(Queue));
    Q->head = NULL; // initially, the queue is empty → head points to nothing
    Q->tail = NULL; // tail also points to nothing
    return Q;
}
// Enqueue: Add an element to the back of the queue
void enqueue(Queue * Q, double a) {
    queueElem * el = malloc(sizeof(queueElem)); // create a new node
    el->container = a; // store the value
    el->next = NULL;    // next will be NULL because it will be the last node

    // If the queue is empty, head and tail both point to this new node
    if(Q->head == NULL && Q->tail == NULL) {
        Q->head = el;
        Q->tail = el;
    } else {
        // Link the new node after the current tail
        Q->tail->next = el; // update the 'next' pointer of the last element to the new element
        Q->tail = el;   // update tail pointer to the new last node
    }
}

// Dequeue: Remove an element from the front of the queue, remove the first node
double dequeue(Queue * Q) {
    // If queue is empty
    if (Q->head == NULL && Q->tail == NULL) {
        return -1;
    } else {
        queueElem * out = Q->head;  // Pointer to the node to remove
        Q->head = out->next;

        //out->next = NULL;   // ❌ ERROR: this line is wrong and unnecessary
        // The main issue:
        // Q->head is never updated → head still points to freed memory!
        // Correct behavior: Q->head = Q->head->next;

        double ausgabe = out->container;
        free(out);
        return ausgabe;
    }
}

//Print all elements of the queue
void printQueue(Queue * Q) {
    queueElem * temp = Q->head;     // start from the head
    printf("Queue:\n");
    while (temp != NULL) {
        printf("%.0f\n", temp->container);
        temp = temp->next;  // move to the next node
    }
    
}

// Delete the entire queue
void deleteQueue(Queue * Q) {
    while (Q->head != NULL){
        dequeue(Q); // remove elements one by one
    }
    printf("Queue deleted.\n");
    free(Q);    // finally, free the Queue struct itself
}

void insertQueue(Queue *Q, int position, int value){
    queueElem *temp = Q->head;
    for (int i = 1; i < position - 1; i++){
        temp = temp->next;
    }
    queueElem * el = malloc(sizeof(queueElem)); // create a new node
    el->container = value; // store the value
    el->next = temp->next;    // next will be ne next node
    temp->next = el;           // pints of el
}

 
int main () {

    Queue * queue = initQueue();

    enqueue(queue, 1);
    enqueue(queue, 5);
    enqueue(queue, 8);
    enqueue(queue, 9);
    printQueue(queue);

    dequeue(queue);
    printQueue(queue);
    deleteQueue(queue);

    Queue *test = initQueue();

    int array [51] = {0};

    srand(time(NULL));

    for (int i = 0; i < 50; i++){
        
        int value = rand();

        enqueue(test, i);
        array[i] = i;
    }

    // printQueue(test);
    printf("--Array:--\n");
    
    int i = 50;
    for (i = 50; i > 2; i--) {
        array[i + 1] = array[i];
    }
    array[i] = 22;

    for (int i = 0; i < 51 ; i++) {
        printf("%d\n", array[i]);
    }
    insertQueue(test, 3, 22);
    printQueue(test);


    deleteQueue(test);
    return 0;
}