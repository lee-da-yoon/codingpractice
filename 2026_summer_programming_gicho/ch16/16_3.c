// 37slide

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

int main(void)
{
    Node * head = NULL;
    Node * newnode;
    Node *current;
    int num;

    while (1){
        printf("¼ýÀÚ?");
        scanf("%d", &num);

        if(num < 0)
            break;
    

    newnode = (Node *)malloc(sizeof(Node));
    newnode -> data = num;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
    }
    else{
        current = head;
        while (current -> next != NULL)
            current = current -> next;
        
            current -> next = newnode;
    }
}

printf("\nlinked list: ");

current = head;
while (current != NULL){
    printf("%d -> ", current -> data);
    current = current -> next;
}

printf("NULL\n");

current = head;

while (current != NULL){
    Node *temp = current;
    current = current -> next;
    free(temp);
}
return 0;

}