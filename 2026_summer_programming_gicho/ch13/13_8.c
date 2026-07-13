//47 slide

# include <stdio.h>
# include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

void inputStudent (Student *S){


}

void printStudent(const Student *s){

}

int main(){
    Student * student = (Student *) malloc(sizeof(Student));
    if (student == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter student information : \n"):
    inputStudent(student);

    printf("\nStudent Information: \n"):
    printStudent(student);
}