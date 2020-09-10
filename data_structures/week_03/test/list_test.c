#include <stdio.h>
#include <stdlib.h>
#include "..\list\list.h"

int main() {
    List* list;
    int flag, value;

    list = create_list(list);
    if(list != NULL) {
        printf("List size: %d.\n", length(list));
        printf("Inserting 1 at the begin...\n");
        flag = insert_begin(list, 1);
        if(flag = 0) printf("Problems when inserting 1.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 2 at the end...\n");
        flag = insert_end(list, 2);
        if(flag = 0) printf("Problems when inserting 1.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 3 in position 2...\n");
        flag = insert_position(list, 2, 3);
        if(flag = 0) printf("Problems when inserting 3 in position 2.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 4 in position 2...\n");
        flag = insert_position(list, 2, 4);
        if(flag = 0) printf("Problems when inserting 4 in position 2.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 5 at the end...\n");
        flag = insert_end(list, 5);
        if(flag = 0) printf("Problems when inserting 5 at the end.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 6 at the end...\n");
        flag = insert_end(list, 6);
        if(flag = 0) printf("Problems when inserting 6 at the end.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Inserting 7 in position 2...\n");
        flag = insert_position(list, 2, 7);
        if(flag = 0) printf("Problems when inserting 7 in position 2.\n");
        printf("List size: %d.\n", length(list));
        printf("Show direct:\n");
        show_direct(list);
        printf("Getting the begin of the list.\n");
        flag = get_begin(list, &value);
        if(flag = 0) printf("Problems when getting the begin.\n");
        printf("[ 1] -- %4d\n", value);
        printf("Getting the end of the list.\n");
        flag = get_end(list, &value);
        if(flag = 0) printf("Problems when getting the end.\n");
        printf("[ 4] -- %4d\n", value);
        printf("Getting element in position 2.\n");
        flag = get_position(list, 2, &value);
        if(flag = 0) printf("Problems when getting element in position 2.\n");
        printf("[ 2] -- %4d\n", value);
        printf("Removing the begin of the list.\n");
        flag = remove_begin(list, &value);
        if(flag = 0) printf("Problems when removing the begin.\n");
        printf("Removing begin -- %4d\n", value);
        printf("Show direct:\n");
        show_direct(list);
        printf("Removing the end of the list.\n");
        flag = remove_end(list, &value);
        if(flag = 0) printf("Problems when removing the end.\n");
        printf("Removing end -- %4d\n", value);
        printf("Show direct:\n");
        show_direct(list);
        printf("Removing element in position 2.\n");
        flag = remove_position(list, 2, &value);
        if(flag = 0) printf("Problems when removing element in position 2.\n");
        printf("Removing position 2 -- %4d\n", value);
        printf("Show direct:\n");
        show_direct(list);
        printf("Show reverse:\n");
        show_reverse(list);
        free_list(list);
    }
    return 0;
}