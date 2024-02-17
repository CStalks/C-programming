#include <stdio.h>

typedef struct student {
    char name[20];
    int  age;
    int  points;

} Student;

int main(){
    Student student1 = {"Eric Leonard", 30, 90};
    Student student2 = {"Walter White", 50, 100};

    printf("Students Info\n\n");

    printf("Name: %s\n", student1.name);
    printf("Age:  %d\n", student1.age);
    printf("Total points: %d\n\n", student1.points);
 

    printf("Name: %s\n", student2.name);
    printf("Age:  %d\n", student2.age);
    printf("Total points: %d\n\n", student2.points);

    printf("The average of both points: %d\n", (student1.points + student2.points)/2);
    
    return 0;
}