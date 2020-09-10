typedef struct Deque_ Deque;

Deque* create_deque();

int insert_begin(Deque* deque, int value);
int insert_end(Deque* deque, int value);

int remove_begin(Deque* deque, int* value);
int remove_end(Deque* deque, int* value);

int get_begin(Deque* deque, int* value);
int get_end(Deque* deque, int* value);

void free_deque(Deque* deque);