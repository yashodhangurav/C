#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

int s[MAXSIZE], top = -1;

void push(){
    if(top == MAXSIZE - 1){
        printf("Stack is ocverflow!!");
        return;
    }else{
        printf("Enter the element which u want to insert : ");
        scanf("%d", s[++top]);
    }
}

void pop(){
    if(top == -1){
        printf("stack is empty to delete any eleent!!!");
        return;
    }else{
        printf("deleted element is : %d", s[top--]);
    }
}

void display(){
    int t = top;
    if(t == -1){
        printf("stack is empty!");
    }else{
        printf("stack elements are : ");
        while(t>=0){
            printf("%d", s[t--]);
        }
    }
}

void pali(){
    int num[5], rev[5];
    for(int i = 0, t = top; t>=0; i++, t--){
        num[i] = rev[t] = s[t];
        for(int i =0; top>=0; i++){
            if(num[i]!= rev[i])
            break;
        }

        if(i == top){
            printf("It is a palindrome!!");
        }else{
            printf("It is not a palindrome!!");
        }
    }
}

int main(){
    int ch;

    while(1){
        printf("Stack operations!!!!!!!!!!!!!");
        printf("1. push");
        printf("2. pop");
        printf("3. palindrome");
        printf("4. display");
        printf("5. exit");

        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: pali(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!!");
        }
    }

    return 0;
}