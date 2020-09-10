#include <stdlib.h>
#include "single_node.h"

struct Node_ {
    int data;
    Node* next;
};

Node* create_node(int data) {
    Node* node = (Node*) malloc(sizeof(struct Node_));
    if(node != NULL) {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

Node* get_next(Node* node) {
    return node->next;
}

void set_next(Node* node, Node* next) {
    node->next = next;
}

int get_data(Node* node) {
    return node->data;
}