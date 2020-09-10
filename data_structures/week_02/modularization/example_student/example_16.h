typedef struct Student_ Student;

Student* create_student(int registrationID);
void define_grades(Student* student, float g1, float g2, float g3);
void define_grade(Student* student, float grade, int sequence);
float get_average(Student* student);
void get_grades(Student* student, float *g1, float *g2, float *g3,
    float *average);
void free_student(Student* student);

