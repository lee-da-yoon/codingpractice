// 37slide

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;  // 일단 자기참조 구조체 정의

int main(){
    Node * head = NULL;   // 리스트의 시작. 비어있음, 시작 주소를 잃으면 안 되므로 head는 이동 시키지 않음 
    Node * newNode;  // 새 노드 담을 포인트 
    Node *current;  // 탐색용 노드 포인터 
    int num;  // 사용자가 입력한 정수를 저장 

    printf("Enter numbers (a negative  number to stop) : \n");
    while (1){  // 무한반복 - 음수 입력 시 종료 
        printf("Enter a number : ");
        scanf("%d", &num);   // 사용자에게 정수를 입력받기 
        if (num < 0)
            break;

        newNode = (Node*)malloc(sizeof(Node));  // 새 노드를 동적 할당 
        newNode -> data = num;  // 입력받은 num을 newnode의 data에 저장. 
        newNode -> next = NULL;  // 항상 맨 뒤에 붙이는 것이므로 포인터 는 null이 된다

        //첫번째 노드 저장 
        if (head == NULL){  // 첫번째가 비어있으면? 
            head = newNode;  // 새 노드의 주소값을 head에 저장 -- 이 newnode를 첫 노드로 만들기 
        }
        else{  // 안 비어 있다면 = 이미 노드가 존재하면 -> 맨 끝 노드를 찾아가 뒤에 연결 
            current = head;
            while (current -> next != NULL)  // current의 다음 포인터가 null이 아니면  --  다음 포인터가 null이면 마지막 노드라는 의미이미로 
                current = current -> next; // current에 next의 포인터를 저장??  - 한칸씩 전진하기 
            
            current -> next  =  newNode;   // 마지막 노드라면 -  마지막 노드의 next에 newnode의 주소 저장 
        }
    } // 여기까지 입력 반복 종료 

    printf("\nlinkde List : ");
    current = head;  // 다시 처음부터 

    while (current != NULL){  // 다음 노드 존재하면 계속 반복 
        printf("%d -> ", current -> data);  // 현재 노드의 데이터를 출력하고 
        current = current -> next;  // 다음 노드로 옮겨가기 
    }

    printf("NULL\n");

    // 메모리 해제 
    current = head;  // 다시 처음부터 

    while (current != NULL){  // 다음 노드가 없을 때까지 반복 
        Node * temp =  current;   // temp라는 임시 자기참조구조체 변수 만들기 - 현재의 내용을 옮겨담기 
        current = current -> next;  // current는 다음 것으로 옮겨가고 
        free(temp);  // 옮겨 간 다음에 temp에 든 이전 것 메모리 해제하기 
    }

    return 0;
}


