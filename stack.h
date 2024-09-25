#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

typedef struct {

    int data[STACK_SIZE];
    int top;

}Stack;

void initStack (Stack *s);
int isEmpty (Stack *s);
int isFull (Stack *s);
int push(Stack *s, int value);
int pop (Stack *s, int *value);

#endif
