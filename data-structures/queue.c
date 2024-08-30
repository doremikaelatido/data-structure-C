//
//  queue.c
//  data-structures
//
//  Created by Mikaela Nicole Ramos on 8/4/24.
//

#include "queue.h"

#include <stdlib.h>

QueueNode* createQueue(void){
    QueueNode *queue = malloc(sizeof(QueueNode));
    queue->data = NULL;
    
    return queue;
}

bool search(QueueNode *queue, int value){
    QueueNode *tmp = queue;
    while (tmp != NULL){
        if (tmp->data == value){
            printf("Value %i found\n", value);
            return true;
        }
        tmp = tmp->next;
    }
    printf("Value %i not found\n", value);
    return false;
}

int top(QueueNode queue){
    printf("TOP - %i\n", queue.data);
    return queue.data;
}

void display(QueueNode queue){
    QueueNode *tmp = &queue;
    printf("Queue: ");
    while(tmp->data != NULL){
        printf("%i  ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void push(QueueNode *queue, int value){
    printf("PUSH %i - ", value);
    QueueNode *tmp = queue;
    
    while (tmp->data != NULL){
        tmp = tmp->next;
    }

    tmp->data = value;
    QueueNode *next = malloc(sizeof(QueueNode));
    next->data = NULL;
    tmp->next = next;
    
    display(*queue);
}

int pop(QueueNode** queue){
    printf("POP - ");
    QueueNode* head = *queue;
    int poppedValue = head->data;
    *queue = head->next;
    display(**queue);
    
    return poppedValue;
}
