//
//  queue.h
//  data-structures
//
//  Created by Mikaela Nicole Ramos on 8/4/24.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdbool.h>

typedef struct queueNode{
    int data;
    struct queueNode* next;
} QueueNode;

QueueNode* createQueue(void);
bool search(QueueNode *queue, int value);
int top(QueueNode queue);
void push(QueueNode *queue, int value);
int pop(QueueNode** queue);

#endif /* queue_h */
