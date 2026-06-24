#include <stdio.h>

#define MAX_STACK_SIZE 100 // 스택의 크기

int stack[MAX_STACK_SIZE]; // int형을 저장할 수 있는 스택
int top = -1;

int is_empty()
{
	if (top == -1)
		return 1;
    return 0;
}

int is_full()
{
	if (top == MAX_STACK_SIZE - 1)
		return 1;
	return 0;
}

void push(int item)
{
	if (is_full()) // 스택이 가득 찼다면
	{
		printf("stack is full!\n");
		return;
	}
		
	stack[++top] = item;
}

int pop()
{
    if (is_empty()) // 스택이 비어있다면
    {
        printf("stack is empty!\n");
        return -1;
    }
    return stack[top--];
}

int peek()
{
    if (is_empty()) // 스택이 비어있다면
    {
        printf("stack is empty!\n");
        return -1;
    }
    return stack[top];
}

int main()
{
    push(1);
    push(2);
    push(3);

    printf("Amount of data: %d\n", top + 1);

    printf("pop: %d\n", pop());
    printf("peek: %d\n", peek());
    printf("pop: %d\n", pop());
    printf("pop: %d\n", pop());
    return 0;
}