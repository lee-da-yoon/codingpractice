//39 slide 

# include <Stdio.h>
# include <string.h>

typedef struct {
    char name[50]; 
    int age;
    float grade;
} Student;

void input (Student *s){
    fgets(s -> name, sizeof(s -> name), stdin);
    s -> name[strcspn(s -> name, "\n")] = '\0'; // 개행 문자 제거 
    scanf("%d", &s -> age);
    scanf("%d", &s-> grade);
}

void print(const Student *s){
    printf("%s\n", s -> name);
    printf("%d\n", s -> age);
    printf("%.2f\n", s -> grade);
}

int main(){
    Student student;
    Student *s = &student;  // 구조체 변수 주소를 포인터에 할당 

    input(s);
    print(s);

    return 0;
}