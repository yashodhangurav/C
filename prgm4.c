#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int F (char c){
    if(c == '+'|| c == '-') return 2;
    if( c== '*'|| c == '/' || c == '%') return 4;
    if( c == '^') return 5;
    if( c == '(') return 0;
    if( c == '#') return -1;
    return 8;
}

int G (char c){
    if(c == '+'|| c == '-') return 1;
    if(c == '*'|| c == '/'|| c == '%') return 3;
    if( c == '^') return 6;
    if( c == '(') return 7;
    if( c == ')') return 0;
    return 8;
}


void infix_postfix(char infix[], char postfix[]){
    char s[20];
    int top = -1, j = 0;
    s[++top] = '#';

    for(int i  = 0; i<strlen(infix); i++){
        char sym = infix[i];

        while(F(s[top]) > G(sym)){
            postfix[j++] = s[top--];
        }
        if(F(s[top]) != G(sym)){
            s[++top] = sym;
        }else{
            top--;
        }
    }

    while(s[top] != '#')
        postfix[j++] = s[top--];

    postfix[j] = '\0';
}

int main(){
    char infix[20], postfix[20];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infix_postfix(infix, postfix);
    printf("Postfix expression is : %s", postfix);
    return 0;
}
