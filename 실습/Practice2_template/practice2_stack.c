//Template
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int nData;
	struct Node *next;
}Node;

typedef struct Stack{
	Node *top;
}Stack;

void InitializeStack(Stack *stack);
void Push(Stack *stack, int nData);
int Pop(Stack *stack);

int main(void){
	//source code
	Stack stack;
	InitializeStack(&stack);
	Push(&stack, 5);
	Push(&stack, 7);
	Pop(&stack);
	Push(&stack, 10);
	Pop(&stack);
	Pop(&stack);
	return 0;
}

void InitializeStack(Stack *stack){
	//source code
	stack->top = NULL;
}

void Push(Stack *stack, int nData){
	//source code
	Node *node = (Node *)malloc(sizeof(Node));
	node->nData = nData;
	node->next = stack->top;
	stack->top = node;
}

int Pop(Stack *stack){
	//source code
	Node *removed = stack->top;
	if (removed == NULL){
		return -1;
	}
	int popped_data = removed->nData;
	stack->top = removed->next;
	free(removed);
	printf("popped data: %d\n", popped_data);
	return popped_data;
}
