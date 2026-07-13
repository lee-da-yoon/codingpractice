// 46 slide 

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

typedef struct {
    char name [20];
    int id;
    double score;
} Student;

void print_students(Student s[], int size);

int main(){
    Student students [3];

    for (int i = 0 ; i < 3; i++){
        pritnf("[%d번째 학생]\n", i + 1);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].id);
        scanf("%lf", &students[i].score);
    }

    print_students(students, 3);
    return 0;
}

void print_students(Student s[], int size){
    printf("[학생 목록]\n");
    for (int i = 0 ; i < size; i++){
        printf("%s      %d        %lf\n", s[i].name, s[i].id, s[i].score);
    }
}