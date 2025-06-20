#include <stdio.h>

struct Student
{
    char name[50];
    char group[20];
    int age;
    float gpa;
};

int main()
{
    struct Student student;
    printf("Nhap ten sinh vien: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Nhap ten lop: ");
    fgets(student.group, sizeof(student.group), stdin);

    printf("Nhap gpa: ");
    scanf("%f", &student.gpa);

    printf("Nhap tuoi: ");
    scanf("%d", &student.age);

    printf("Ten: %s - Lop: %s - Tuoi: %d - GPA: %.2f",
           student.name, student.group, student.age, student.gpa);
    return 0;
}
