typedef struct Series_ Series;

Series* create_series(int *array_values, int quantity);
float get_average(Series* series);
float get_standard_deviation(Series* series);
void free_series(Series* series);