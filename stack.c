#include<stdio.h>
#include "stack.h"

void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

int isFull(Stack *s){
    return s->top == STACK_SIZE -1;
}

int push(Stack *s, int value){
    if(isFull(s)){
        return 0; //Falha ao adicionar(pilha cheia)
    }
    s->data[++(s->top)] = value;
    return 1; //Sucesso
}

int pop(Stack *s, int *value){
    if(isEmpty(s)){
        return 0; // Falha ao remover (pilha vazia)
    }
    *value = s->data[(s->top)--];
    return 1; //Sucesso
}
