/* syntex:
struct structure_name {
    data_type member1;
    data_type member2;
};
*/

// example:
#include <stdio.h>
struct Student {
    int roll;
    float marks;
    char grade;
};
int main() {
    struct Student s1 = {1, 8.9 , 'AB'};
    printf("Roll = %d\n", s1.roll);
    printf("Marks = %.1f\n", s1.marks);
    printf("Grade = %c\n", s1.grade);

    return 0;
}
