#include "double_node.h"
#include <stdlib.h>

struct Double_node_ {
    int data;
    Double_node* previous;
    Double_node* next;
};

Double_node* create_double_node(int value) {
    Double_node* new_node = (Double_node*) malloc(sizeof(struct Double_node_));
    if(new_node != NULL) {
        new_node->data = value;
        new_node->previous = NULL;
        new_node->next = NULL;
    }
    return new_node;
}

Double_node* get_next(Double_node* node) {
    return node->next;    
}

void set_next(Double_node* node, Double_node* next) {
    node->next = next;
}

Double_node* get_previous(Double_node* node) {
    return node->previous;
}

void set_previous(Double_node* node, Double_node* previous) {
    node->previous = previous;
}

int get_data(Double_node* node) {
    return node->data;
}