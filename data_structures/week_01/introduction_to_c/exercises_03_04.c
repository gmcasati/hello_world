#include <stdio.h>

float average_of_five (int v_1, int v_2, int v_3, int v_4, int v_5) {
    return (v_1 + v_2 + v_3 + v_4 + v_5) / 5.0; 
}

int highest_of_five (int v_1, int v_2, int v_3, int v_4, int v_5) {
    if (v_1 > v_2) {
        if (v_1 > v_3) {
            if (v_1 > v_4) {
                if(v_1 > v_5) {
                    return v_1;
                }
                else {
                    return v_5;
                }
            }
            else {
                if(v_4 > v_5) {
                    return v_4;
                }
                else {
                    return v_5;
                }
            }
        } else {
            if (v_3 > v_4) {
                if(v_3 > v_5) {
                    return v_3;
                }
                else {
                    return v_5;
                }
            }
            else {
                if(v_4 > v_5) {
                    return v_4;
                }
                else {
                    return v_5;
                }
            }
        }
    } else {
        if (v_2 > v_3) {
            if (v_2 > v_4) {
                if(v_2 > v_5) {
                    return v_2;
                }
                else {
                    return v_5;
                }
            }
            else {
                if(v_4 > v_5) {
                    return v_4;
                }
                else {
                    return v_5;
                }
            }
        } else {
            if (v_3 > v_4) {
                if(v_3 > v_5) {
                    return v_3;
                }
                else {
                    return v_5;
                }
            }
            else {
                if(v_4 > v_5) {
                    return v_4;
                }
                else {
                    return v_5;
                }
            }
        }
    }
}

int main () {
    int a;
    int b;
    int c;
    int d;
    int e;

    a = 3;
    b = 10;
    c = 178;
    d = 177;
    e = 64;

    printf("Average of (%d, %d, %d, %d, %d): %.2f\n",
    a, b, c, d, e, average_of_five(a, b, c, d, e));

    printf("Highest of (%d, %d, %d, %d, %d): %d\n",
    a, b, c, d, e, highest_of_five(a, b, c, d, e));

    return 0;
}
