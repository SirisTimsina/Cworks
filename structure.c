
// Structure as a new user defined data type..
#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[20];
    double marks;
};

int main(){
printf("Enter student detail: \n");
struct Student s;

s.roll = 102; // use . (member access operator) to access structure members
strcpy(s.name,"Kapil");
s.marks = 77.65;

printf("Student Information: \n");
printf("Roll: %d, ", s.roll);
printf("Name: %s, ", s.name);
printf("Marks: %lf \n", s.marks);

// we can have array of structure
struct Student stu[5];
printf("Enter detail of five student: \n");
for(int i=0; i<5; i++){
    printf("Student %d: \n", i);
    printf("Enter roll:");
    scanf("%d", &stu[i].roll);
    printf("ENter name: ");
    scanf(" %s", stu[i].name);
    printf("Enter marks: ");
    scanf("%lf", &stu[i].marks);
}

// display all five students
    printf("Student Information: \n");
for(int i=0; i<5; i++){
printf("------------------------------------------------------\n");
printf("Roll: %d, ", stu[i].roll);
printf("Name: %s, ", stu[i].name);
printf("Marks: %lf \n", stu[i].marks);
}
printf("------------------------------------------------------\n");
return 0;
}