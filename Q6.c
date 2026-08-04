#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for (int i =0; i<3; i++) {
        if (s[i].marks >= 75) {
            printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
        }
    }
    return 0;
}