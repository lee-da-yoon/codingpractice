// 35 slide 

# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;  // Node라는 이름의 자기참조구조체 정의 

int main(){
    Node* head = NULL;  // 여기의 세 줄 - 노드를 가리킬 포인터 변수 세개를 선언하고 NULL로 초기화하기 ?
    Node * second = NULL;
    Node *third = NULL; 

    // 노드 3개 생성 
    head = (Node *) malloc (sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third = (Node* ) malloc (sizeof(Node));

    // 데이터 저장 및 연결 
    head -> data = 12;   // 일단 data에 저장하고 
    head -> next = second;  // next에는 다음 연결할 Node 자료형의 포인터변수 넣기 

    second -> data = 99;  // 동일 
    second -> next =third;

    third -> data = 37;
    third -> next = NULL;   // 얘는 마지막이라서 연결할 포인터 변수 없으니까 NULL이다 

    // 연결 리스트 출력 
    Node *current = head;  // 첫 노드인 head부터 시작? 
    printf("연결 리스트 데이터 \n");
    while (current != NULL){
        printf("%d ", current -> data);  // data를 출력하고 
        current = current -> next;  // 다음 걸로 옮겨가기? 
    }
    printf("\n");

    // 메모리 해제 
    free(head);
    free(second);
    free(third);

    return 0;
}
