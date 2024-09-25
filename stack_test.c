#include <stdio.h>
#include "stack.h"
#include "stack.c"

int main(){

        Stack Stack1;
        Stack* ptr = &Stack1;
        initStack(ptr);

        printf("A pilha esta vazia? ");
        isEmpty(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        push(ptr, 1);

        printf("%d\n", ptr -> top);

        printf("A pilha esta vazia? ");
        isEmpty(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        int numb = 1;
        int* num = &numb;

        pop(ptr, num);

        printf("A pilha esta vazia? ");
        isEmpty(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        printf("A pilha esta cheia? ");
        isFull(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        for(int i = 0; i < 100; i++){
            push(ptr, i);
        }

        printf("%d\n", ptr -> top);

        printf("A pilha esta cheia? ");
        isFull(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        for(int i = 0; i < 100; i++){
            numb = i;
            pop(ptr, num);
        }

        printf("A pilha esta cheia? ");
        isFull(ptr) == 1 ? printf("%s\n", "Sim") : printf("%s\n", "Nao");

        printf("%d", ptr -> top);

        return 0;
}
