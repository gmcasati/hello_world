#include <stdio.h>
#include "statistics.h"

int main() {
    int v[6] = {2, 5, 7, 13, 18, 21};
    float average, standard_deviation;

    Series* series = create_series(v, 6);
    average = get_average(series);
    standard_deviation = get_standard_deviation(series);
    free_series(series);

    printf("Average           : %.5f\n", average);
    printf("Standard Deviation: %.5f\n", standard_deviation);

    return 0;
}