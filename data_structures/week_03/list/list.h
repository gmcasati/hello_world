typedef struct List_ List;

List* create_list();

int insert_begin(List* list, int value);
int insert_end(List* list, int value);
int insert_position(List* list, int position, int value);

int remove_begin(List* list, int* value);
int remove_end(List* list, int* value);
int remove_position(List* list, int position, int* value);

int get_begin(List* list, int* value);
int get_end(List* list, int* value);
int get_position(List* list, int position, int* value);

int length(List* list);
void show_direct(List* list);
void show_reverse(List* list);

void free_list(List* list);