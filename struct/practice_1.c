#include <stdio.h>

struct Student
{
    char name[50];
    char group[20];
    int age;
    float gpa;
};

void insertStudent(struct Student *group, int *length);
void printStudent(struct Student *group, int length);
void printMaxGpa(struct Student *group, int length, int choice);
void questionForStop(int *choice);

int main()
{

    /**
     * 1. Nhap vao 1 danh sach sinh vien cua lop C2505E cho den khi chon stop
     * 2. Luu tru danh sach sinh vien nay vao mot mang Student
     * 3. Hien thi tat ca sinh vien ra man hinh
     * 4. Hien thi ra sinh vien co diem GPA cao nhat
     */

    int choice = 1;
    int i = 0;
    int count;
    char buff[5];
    printf("Lop co bao nhieu sinh vien: ");
    scanf("%d", &count);
    struct Student c2505e[count];
    fgets(buff, sizeof(buff), stdin);
    do
    {
        insertStudent(c2505e, &i);
        printStudent(c2505e, i);
        questionForStop(&choice);
        printMaxGpa(c2505e, i, choice);
    } while (choice != 0 || i > count);

    return 0;
}

void printMaxGpa(struct Student *group, int length, int choice)
{
    if (choice == 0)
    {
        int maxIndex = 0;
        struct Student *ptr = group;
        for (int i = 0; i < length; i++)
        {
            if ((*(ptr + i)).gpa >= (*(ptr + maxIndex)).gpa)
            {
                maxIndex = i;
            }
        }
        struct Student *maxGpa = group;
        maxGpa += maxIndex;
        printf("Max GPA from Student %s with GPA = %.2f", (*maxGpa).name, (*maxGpa).gpa);
    }
}

void insertStudent(struct Student *group, int *length)
{
    struct Student student;
    printf("Nhap ten sinh vien: \n");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Nhap ten lop: \n");
    fgets(student.group, sizeof(student.group), stdin);

    printf("Nhap gpa: \n");
    scanf("%f", &student.gpa);

    printf("Nhap tuoi: \n");
    scanf("%d", &student.age);
    group[*length] = student;
    *length++;
};

void printStudent(struct Student *group, int length)
{
    for (int i = 0; i < length; i++)
    {
        struct Student std = *(group + i);
        printf("#%d Ten: %s - Lop: %s - Tuoi: %d - GPA: %.2f\n", i + 1,
               std.name, std.group, std.age, std.gpa);
    }
}

void questionForStop(int *choice)
{
    printf("1 - Continue, 0 - Find student with max GPA and Exit ?\n");
    scanf("%d", choice);
    if (choice != 0)
    {
        char buff[5];
        fgets(buff, sizeof(buff), stdin);
    }
}