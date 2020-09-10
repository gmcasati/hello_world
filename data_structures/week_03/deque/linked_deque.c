#include "..\single_node\single_node.h"
#include "linked_deque.h"
#include <stdlib.h>

#define PROBLEM 0
#define OK 1

struct Deque_ {
    Node* begin;
    Node* end;
};

Deque* create_deque() {
    Deque* deque = (Deque*) malloc(sizeof(struct Deque_));
    if(deque != NULL) {
        deque->begin = NULL;
        deque->end = NULL;
    }
    return deque;
}

int insert_begin(Deque* deque, int value) {
    Node* new_node = create_node(value);
    
    if(new_node == NULL) {
        return PROBLEM;
    }

    set_next(new_node, deque->begin);
    deque->begin = new_node;
    return OK;
}

int insert_end(Deque* deque, int value) {
    Node* new_node = create_node(value);

    if(new_node == NULL) {
        return PROBLEM;
    }

    if(deque->begin == NULL) {
        deque->begin = new_node;
    } else {
        set_next(deque->end, new_node);
    }

    deque->end = new_node;
    return OK;
}

int remove_begin(Deque* deque, int* value) {
    Node* removed;

    if(deque->begin == NULL) {
        return PROBLEM;
    }

    removed = deque->begin;
    *value = get_data(deque->begin);
    deque->begin = get_next(deque->begin);
    free(removed);
    return OK;
}

int remove_end(Deque* deque, int* value) {
    Node* cursor;
    Node* new_end;
    Node* removed;

    if(deque->begin == NULL) {
        return PROBLEM;
    }

    removed = deque->end;
    if(get_next(deque->begin) == NULL) {
        deque->begin = NULL;
        new_end = NULL; 
    } else {
        cursor = deque->begin;
        while(get_next(cursor) != NULL) {
            new_end = cursor;
            cursor = get_next(cursor);
        }
        set_next(new_end, NULL);
    }

    deque->end = new_end;
    free(removed);
    return OK;
}

int get_begin(Deque* deque, int* value) {
    
    if(deque->begin == NULL) {
        return PROBLEM;
    }

    *value = get_data(deque->begin);
    return OK;
}

int get_end(Deque* deque, int* value) {
    
    if(deque->begin == NULL) {
        return PROBLEM;
    }

    *value = get_data(deque->end);
    return OK;
}

void free_deque(Deque* deque) {
    Node* cursor = deque->begin;
    Node* removed;
    while(cursor != NULL) {
        removed = cursor;
        cursor = get_next(cursor);
        free(removed);
    }
    free(deque);
}