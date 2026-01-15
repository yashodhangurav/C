// #include <stdio.h>
// #define M 100

// void insert(int ht[], int key);
// void display(int ht[]);

// int main()
// {
//     int ht[M], empKey, ch = 1;

//     // Initialize hash table
//     for(int i = 0; i < M; i++)
//         ht[i] = -1;

//     while(ch)
//     {
//         printf("Enter 4-digit Employee Key: ");
//         scanf("%d", &empKey);

//         insert(ht, empKey);

//         printf("Continue? (1/0): ");
//         scanf("%d", &ch);
//     }

//     display(ht);
//     return 0;
// }

// void insert(int ht[], int key)
// {
//     int index = key % M;

//     // Linear probing
//     while(ht[index] != -1)
//     {
//         printf("Collision at index %d\n", index);
//         index = (index + 1) % M;
//     }

//     ht[index] = key;
// }

// void display(int ht[])
// {
//     printf("\nHash Table Contents:\n");
//     for(int i = 0; i < M; i++)
//         if(ht[i] != -1)
//             printf("Index %d : %d\n", i, ht[i]);
// }




// -----------------------------------------------practice DS in C/prgm12.c-----------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#define M 100

void insert(int ht[], int key);
void display(int ht[]);

int main(){
    int ht[M], empKey, ch = 1;

    for(int  i= 0; i<M; i++){
        ht[i] = -1;
    }

    while(ch){
        printf("Enter the 4 digit employee key: ");
        scanf("%d", &empKey);

        insert(ht, empKey);

        printf("Contonue? (1/0) :");
        scanf("%d", &ch);
    }
    display(ht);
    return 0;
}


void insert(int ht[], int key){
    int index = key%M;

    while(ht[index] != -1){
        printf("Collion at index: %d\n", index);
        index = (index+1)%M;
    }
    ht[index] = key;
}

void display(int ht[]){
    printf("\n hash table contents are: \n");
    for(int i = 0; i<M; i++){
        if(ht[i] != -1){
            printf("index %d : %d\n", i, ht[i]);
        }
    }
}