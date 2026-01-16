// #include<stdio.h>
// #include<math.h>

// void tower(int n, int source, int temp, int destination){
//     if(n == 0){
//         return;
//     }
//     tower(n-1, source, destination, temp);
//     printf("\n disc moves %d, from %c to %c", n , source , destination);
//     tower(n-1, temp, source, destination);
// }

// void main(){
//     int n;
//     printf("Enter the number of the disc: ");
//     scanf("%d", &n);
//     printf("Enter the sequence of the moves: ");
//     tower(n, 'A', 'B', 'C');
//     printf("\n Total number of the moves are: %d", (int)pow(2,n)-1);

// }



// ------------------------------------------practice DS in C/prgm5b.c------------------------------------------


#include<stdio.h>
#include<math.h>

void tower(int n, int source, int temp, int destination){
    if(n == 0){
        return;
    }

    tower(n-1, source , destination, temp);
    printf("\n disc move %d, from %c to %c", n, source , destination);
    tower(n-1, temp, source, destination);
}

void main(){
    int n;
    printf("Enter the number of the disc: ");
    scanf("%d", &n);

    printf("the sequence of the moves: ");
    tower(n, 'A', 'B', 'C');
    printf("Total number of the moves are : %d", (int)pow(2,n)-1);
}