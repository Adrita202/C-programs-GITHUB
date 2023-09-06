#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student st[5];
    int i, totalMarks = 0;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", st[i].name);
        printf("Roll: ");
        scanf("%d", &st[i].roll);
        printf("Marks: ");
        scanf("%d", &st[i].marks);

        totalMarks += st[i].marks;
    }

    printf("\nTotal marks: %d\n", totalMarks);

    return 0;
}

