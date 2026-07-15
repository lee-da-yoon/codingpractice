//47 slide

# include <stdio.h>
# include <string.h>
# include<stdlib.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

void inputStudent (Student *s){

    printf("Enter student's name: ");
    gets(s -> name);

    printf("Enter student's age: ");
    scanf("%d", & s -> age);

    printf("Enter student's grade: ");
    scanf("%f", &s -> grade);
}

void printStudent(const Student *s){
    printf("Name : %s, Age : %d, Grade : %.2f\n", s->name, s->age, s->grade);
}

int main(){
    Student * student = (Student *) malloc(sizeof(Student));
    if (student == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter student information : \n");
    inputStudent(student);

    printf("\nStudent Information: \n");
    printStudent(student);

    free (student);
    return 0;
}