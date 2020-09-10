#include <stdlib.h>
#include <math.h>
#include "statistics.h"

#define TRUE 1
#define FALSE 0

struct Series_ {
    int quantity;
    int *values;
};

Series* create_series(int *array_values, int quantity) {
    int i;
    struct Series_* s = (struct Series_*) malloc(sizeof(struct Series_));
    if(s != NULL) {
        s->quantity = quantity;
        s->values = (int*) malloc(quantity * sizeof(int));
        if(s->values != NULL) {
          for(i = 0; i < quantity; i++) {
              s->values[i] = array_values[i];
          }  
        }
    }

    return s;
}

int simple_summation(Series *series, int *sum) {
    int i;
    
    if(series-> quantity == 0 || series->values == NULL)
        return FALSE;

    for(i = 0, *sum = 0; i < series->quantity; i++) {
        *sum += series->values[i];
    }

    return TRUE; 
}

int squares_summation(Series *series, int *sum) {
    int i;
    
    if(series-> quantity == 0 || series->values == NULL)
        return FALSE;

    for(i = 0, *sum = 0; i < series->quantity; i++) {
        *sum += pow(series->values[i], 2);
    }

    return TRUE;
}

float get_average(Series* series) {
    int sum;
    int result = simple_summation(series, &sum);

    if(result == FALSE)
        return -1;
    
    return ((float) sum / series->quantity);
}

float get_standard_deviation(Series* series) {
    int sum1, sum2;
    int result1, result2; 
    
    result1 = simple_summation(series, &sum1);
    result2 = squares_summation(series, &sum2);

    if(result1 == FALSE)
        return -1;
    
    if(result2 == FALSE)
        return -1;

    return sqrt((sum2 - (pow(sum1, 2) / series->quantity)) / (series->quantity - 1));
}

void free_series(Series* series) {
    free(series->values);
    free(series);
}