// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 5

// int q[MAX], f = -1, r = -1;

// void insert() {
//     if ((r + 1) % MAX == f) {
//         printf("Queue is full!!\n");
//         return;
//     }
//     if (f == -1) f = 0;
//     r = (r + 1) % MAX;
//     printf("Enter element: ");
//     scanf("%d", &q[r]);
// }

// void delete() {
//     if (f == -1) {
//         printf("Queue is empty!!\n");
//         return;
//     }
//     printf("Deleted element: %d\n", q[f]);
//     if (f == r)
//         f = r = -1;
//     else
//         f = (f + 1) % MAX;
// }

// void display() {
//     if (f == -1) {
//         printf("Queue is empty!!\n");
//         return;
//     }
//     printf("Queue: ");
//     for (int i = f; ; i = (i + 1) % MAX) {
//         printf("%d ", q[i]);
//         if (i == r) break;
//     }
//     printf("\n");
// }

// int main() {
//     int ch;
//     while (1) {
//         printf("\n1.Insert 2.Delete 3.Display 4.Exit\nChoice: ");
//         scanf("%d", &ch);
//         switch (ch) {
//             case 1: insert(); break;
//             case 2: delete(); break;
//             case 3: display(); break;
//             case 4: exit(0);
//             default: printf("Invalid choice!!\n");
//         }
//     }
// }


#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int q[MAX], f = -1, r = -1;

void insert(){
    if((r+1)%MAX == f){
        printf("Queue is full!!\n");
        return;
    }
    if(f == -1) f++;
    r = (r+1) % MAX;
    printf("Enter the element: ");
    scanf("%d", &q[r]);
}

void delete(){
    if(f == -1){
        printf("queue is empty!!\n");
        return;
    }
    printf("Deleted element is : %d\n", q[f]);
    f = (f+1)%MAX;
}

void display(){
    if(f == -1){
        printf("Queue is empty!!\n");
        return;
    }
    for(int i = f; ; i = (i+1)%MAX){
        printf("%d ,", q[i]);
        if(i == r) break;
    }
}

void main(){
    int ch;

    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit \n Choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!!\n");
        }
    }
}