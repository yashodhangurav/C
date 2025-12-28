#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

int s[MAXSIZE], top = -1;

void push(){
    if(top == MAXSIZE - 1){
        printf("Stack is overflow!!!\n");
    }
    else{
        printf("Enter the element to be pushed: ");
        scanf("%d", &s[++top]);
    }
}

void pop(){
    if(top == -1){
        printf("Stack is underflow!!!\n");
    }
    else{
        printf("Popped element is: %d\n", s[top--]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty!!!\n");
    }
    else{
        printf("Elements in the stack are:\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", s[i]);
        }
    }
}

int main(){
    int ch;

    while(1){
        printf("\n-------- Stack Operations --------\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!!!\n");
        }
    }

    return 0;
}
