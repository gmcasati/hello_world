#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "..\double_node\double_node.h"

#define PROBLEM 0
#define OK 1

struct List_ {
    int quantity;
    Double_node* begin;
    Double_node* end;
};

List* create_list() {
    List* list = (List*) malloc(sizeof(struct List_));
    if(list != NULL) {
        list->quantity = 0;
        list->begin = NULL;
        list->end = NULL;
    }
    return list;
}

int insert_begin(List* list, int value) {
    Double_node* new = create_double_node(value);
    if(new == NULL) return PROBLEM;
    if(list->begin == NULL) {
        list->end = new;
    } else {
        set_next(new, list->begin);
        set_previous(list->begin, new);
    }
    list->begin = new;
    list->quantity++;
    return OK;
}

int insert_end(List* list, int value) {
    Double_node* new = create_double_node(value);
    if(new == NULL) return PROBLEM;
    if(list->begin == NULL) {
        list->begin = new;
    } else {
        set_previous(new, list->end);
        set_next(list->end, new);
    }
    list->end = new;
    list->quantity++;
    return OK;
}

int insert_position(List* list, int position, int value) {
    if(position < 1 || (position - 1) > list->quantity) return PROBLEM;
    if(position == 1) {
        return insert_begin(list, value);
    }
    if(position == (list->quantity + 1)) {
        return insert_end(list, value);
    }
    Double_node* new = create_double_node(value);
    Double_node* cursor;
    int i;
    if(position < (list->quantity / 2)) {
        cursor = list->begin;
        for(i = 1; i < position - 1; i++) {
            cursor = get_next(cursor);
        }
    } else {
        cursor = list->end;
        for(i = list->quantity; i >= position; i--) {
            cursor = get_previous(cursor);
        }
    }
    Double_node* temp = get_next(cursor);
    set_previous(new, cursor);
    set_next(new, temp);
    set_next(cursor, new);
    set_previous(temp, new);
    list->quantity++;
    return OK;
}

int remove_begin(List* list, int* value) {
    Double_node* removed;
    if(list->begin == NULL) return PROBLEM;
    removed = list->begin;
    *value = get_data(list->begin);
    list->begin = get_next(list->begin);
    if(list->begin == NULL) {
        list->end = NULL;
    } else {
        set_previous(list->begin, NULL);
    }
    free(removed);
    list->quantity--;
    return OK;    
}

int remove_end(List* list, int* value) {
    Double_node* removed;
    if(list->begin == NULL) return PROBLEM;
    removed = list->end;
    *value = get_data(list->end);
    list->end = get_previous(list->end);
    if(list->end == NULL) {
        list->begin = NULL;
    } else {
        set_next(list->end, NULL);
    }
    free(removed);
    list->quantity--;
    return OK;
}

int remove_position(List* list, int position, int* value) {
    Double_node* cursor;
    int i;
    if(list->begin == NULL) return PROBLEM;
    if(position < 1 || position > list->quantity) return PROBLEM;
    if(position == 1) {
        return remove_begin(list, value);
    } else if(position == list->quantity) {
        return remove_end(list, value);
    }
    if(position < (list->quantity / 2)) {
        cursor = list->begin;
        for(i = 1; i < position; i++) {
            cursor = get_next(cursor);
        }
    } else {
        cursor = list->end;
        for(i = list->quantity; i > position; i--) {
            cursor = get_previous(cursor);
        }
    }
    *value = get_data(cursor);
    set_next(get_previous(cursor), get_next(cursor));
    set_previous(get_next(cursor), get_previous(cursor));
    free(cursor);
    list->quantity--;
    return OK;
}

int get_begin(List* list, int* value) {
    if(list->begin == NULL) return PROBLEM;
    *value = get_data(list->begin);
}

int get_end(List* list, int* value) {
    if(list->begin == NULL) return PROBLEM;
    *value = get_data(list->end);
}

int get_position(List* list, int position, int* value) {
    Double_node* cursor;
    int i;
    if(list->begin == NULL) return PROBLEM;
    if(position < 1 || position > list->quantity) return PROBLEM;
    if(position == 1) {
        return get_begin(list, value);
    } else if(position == list->quantity) {
        return get_end(list, value);
    }
    if(position < (list->quantity/2)) {
        cursor = list->begin;
        for(i = 0; i < position; i++) {
            cursor = get_next(cursor);
        }
    } else {
        cursor = list->end;
        for(i = list->quantity; i > position; i--) {
            cursor = get_previous(cursor);
        }
    }
    *value = get_data(cursor);
    return OK;
}

int length(List* list) {
    return list->quantity;
}

void show_direct(List* list) {
    Double_node* cursor = list->begin;
    int i = 1;
    while(cursor != NULL) {
        printf("[%2d] -- %4d\n", i++, get_data(cursor));
        cursor = get_next(cursor);
    }
}

void show_reverse(List* list) {
    Double_node* cursor = list->end;
    int i = list->quantity;
    while(cursor != NULL) {
        printf("[%2d] -- %4d\n", i--, get_data(cursor));
        cursor = get_previous(cursor);
    }
}

void free_list(List* list) {
    Double_node* cursor = list->begin;
    Double_node* removed;
    while(cursor != NULL) {
        removed = cursor;
        cursor = get_next(cursor);
        printf("Removing %4d...\n", get_data(removed));
        free(removed);
    }
    free(list);
}