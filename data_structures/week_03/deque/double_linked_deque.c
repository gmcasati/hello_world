#include "..\double_node\double_node.h"
#include "deque.h"
#include <stdlib.h>

#define PROBLEM 0
#define OK 1

struct Deque_ {
    Double_node* begin;
    Double_node* end;
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
    Double_node* new_node = create_double_node(value);
    
    if(new_node == NULL) {
        return PROBLEM;
    }

    if(deque->begin == NULL) {
        deque->end = new_node;
    } else {
        set_next(new_node, deque->begin);
        set_previous(deque->begin, new_node);
    }

    deque->begin = new_node;
    return OK;
}

int insert_end(Deque* deque, int value) {
    Double_node* new_node = create_double_node(value);
    
    if(new_node == NULL) {
        return PROBLEM;
    }

    if(deque->begin == NULL) {
        deque->begin = new_node;
    } else {
        set_previous(new_node, deque->end);
        set_next(deque->end, new_node);
    }

    deque->end = new_node;
    return OK;
}

int remove_begin(Deque* deque, int* value) {
    Double_node* removed;
    Double_node* new_begin;
    
    if(deque->begin == NULL) {
        return PROBLEM;
    }

    removed = deque->begin;
    *value = get_data(deque->begin);
    new_begin = get_next(deque->begin);
    if(new_begin == NULL) {
        deque->end = NULL;
    } else {
        set_previous(new_begin, NULL);
    }
    deque->begin = new_begin;
    free(removed);
    return OK;
}

int remove_end(Deque* deque, int* value) {
    Double_node* removed;

    if(deque->begin == NULL) {
        return PROBLEM;
    }

    removed = deque->end;
    *value = get_data(deque->end);
    deque->end = get_previous(deque->end);
    if(deque->end == NULL) {
        deque->begin = NULL;
    } else {
        set_next(deque->end, NULL);
    }
    free(removed);
    return OK;
}

int get_begin(Deque* deque, int* value) {
    if(deque->begin == NULL) return PROBLEM;
    *value = get_data(deque->begin);
    return OK;
}

int get_end(Deque* deque, int* value) {
    if(deque->begin == NULL) return PROBLEM;
    *value = get_data(deque->end);
    return OK;
}

void free_deque(Deque* deque) {
    Double_node* cursor = deque->begin;
    Double_node* current;
    while(cursor != NULL) {
        current = cursor;
        cursor = get_next(current);
        free(current);
    }
    free(deque);
}