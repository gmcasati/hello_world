typedef struct Double_node_ Double_node;

Double_node* create_double_node(int value);

Double_node* get_next(Double_node* node);
void set_next(Double_node* node, Double_node* next);

Double_node* get_previous(Double_node* node);
void set_previous(Double_node* node, Double_node* previous);

int get_data(Double_node* node);