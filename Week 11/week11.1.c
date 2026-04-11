#include <stdio.h>

// Define structure
struct Student
{
    int id;
    float marks;
};

int main()
{
    struct Student s;  // Declare structure variable

    printf("Enter ID and Marks: ");
    scanf("%d %f", &s.id, &s.marks);

    printf("Student ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    printf("\n 25331A05H4");

    
    return 0;
}
