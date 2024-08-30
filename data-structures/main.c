//
//  main.c
//  data-structures
//
//  Created by Mikaela Nicole Ramos on 8/4/24.
//

#include <stdio.h>

#include "queue.h"

int main(int argc, const char * argv[]) {
    QueueNode *queue = createQueue();

    push(queue, 7);
    push(queue, 5);
    push(queue, 10);
    push(queue, 2);
    push(queue, 1);
    pop(&queue);
    
    search(queue, 1);
    push(queue, 3);
    push(queue, 4);
    pop(&queue);
    pop(&queue);
    
    search(queue, 11);
    top(*queue);
    pop(&queue);
    push(queue, 78);
    push(queue, 91);
    top(*queue);
    
    pop(&queue);
    top(*queue);
    return 0;
}
