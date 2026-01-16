// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct student {
//     char usn[11], name[15], branch[5], phno[11];
//     int sem;
//     struct student *next;
// };

// struct student *f = NULL, *r = NULL;

// void insert(int end) {
//     struct student *t = malloc(sizeof(struct student));
//     printf("USN Name Branch Sem Phone:\n");
//     scanf("%s %s %s %d %s", t->usn, t->name, t->branch, &t->sem, t->phno);
//     t->next = NULL;

//     if (!f) f = r = t;
//     else if (end) r->next = t, r = t;
//     else t->next = f, f = t;
// }

// void delete(int end) {
//     struct student *t, *p;
//     if (!f) {
//         printf("List empty\n");
//         return;
//     }
//     if (f == r) {
//         t = f;
//         f = r = NULL;
//     } else if (end) {
//         for (p = f; p->next != r; p = p->next);
//         t = r;
//         r = p;
//         r->next = NULL;
//     } else {
//         t = f;
//         f = f->next;
//     }
//     printf("Deleted: %s %s\n", t->usn, t->name);
//     free(t);
// }

// void display() {
//     struct student *t;
//     if (!f) {
//         printf("List empty\n");
//         return;
//     }
//     for (t = f; t; t = t->next)
//         printf("%s %s %s %d %s\n",
//                t->usn, t->name, t->branch, t->sem, t->phno);
// }

// int main() {
//     int ch, n;
//     while (1) {
//         printf("\n1.Create 2.Display 3.InsEnd 4.DelEnd 5.InsBeg 6.DelBeg 7.Exit\n");
//         scanf("%d", &ch);
//         switch (ch) {
//             case 1: printf("No. of nodes: ");
//                     scanf("%d", &n);
//                     while (n--) insert(1);
//                     break;
//             case 2: display(); break;
//             case 3: insert(1); break;
//             case 4: delete(1); break;
//             case 5: insert(0); break;
//             case 6: delete(0); break;
//             case 7: exit(0);
//             default: printf("Invalid choice\n");
//         }
//     }
// }


// --------------------------------practice DS in C/prgm7.c------------------------------------------

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct student{
//     char usn[10], name[20], branch[10], phone[10];
//     int sem;
//     struct student *next;
// };

// struct student *f = NULL, *r = NULL;

// void insert(int end){
//     struct student *t = malloc(sizeof(struct student));
//     printf("USN Name branch sem phone: \n");
//     scanf("%s %s %s %d %s", t->usn, t->name, t->branch, &t->sem, t->phone);
//     t->next = NULL;

//     if(!f) f=r=t;
//     else if(end) r->next= t, r=t;
//     else t->next = f, f = t; 
// }


// void delete(int end){
//     struct student *t, *p;
//     if(!f){
//         printf("LinkList is empty!!");
//         return;
//     }
//     if( f == r){
//         t = f;
//         f = r = NULL;
//     }
//     else if(end){
//         for(p = f; p->next != r; p = p->next);
//         t = r;
//         r = p;
//         r->next = NULL;
//     }
//     else{
//         t = f;
//         f = f->next;
//     }

//     printf("Deleted: %s %s\n", t->usn, t->name);
//     free(t);
// }

// void display(){
//     struct student *t;
//     if(!f){
//         printf("LinkList is empty!!");
//         return;
//     }
//     for(t = f; t; t = t->next){
//         printf("%s %s %s %d %s\n", t->usn, t->name, t->branch, &t->sem, t->phone);
//     };

// }

// void main(){
//     int ch, n;

//     while(1){
//         printf("1.create 2.insertEnd 3.DeleteEnd 4.Insertbeg 5.deleteBeg 6.exit\n");
//         printf("choice: ");
//         scanf("%d", &ch);

//         switch(ch){
//             case 1: printf("Enter the number of the nodes: ");
//                     scanf("%d", &n);
//                     while(n--) insert(1);
//                     break;
//             case 2: display(); break;
//             case 3: insert(1); break;
//             case 4: delete(1); break;
//             case 5: insert(0); break;
//             case 6: delete(0); break;
//             case 7: exit(0);
//             default: printf("Invalid choice\n");
//         }
//     }
// }




// --------------------------------practice2 DS in C/prgm7.c------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student{
    char usn[10], name[10], branch[10], phone[10];
    int sem;
    struct student *next;
};
struct student *f = NULL, *r = NULL;


void insert(int end){
    struct student *t = malloc(sizeof(struct student));
    
    printf("USN Name Branch Sem Phone: \n");
    scanf("%s %s %s %d %s", t->usn, t->name, t->branch, &t->sem, t->phone);
    t->next = NULL;


    if(!f) f = r = t;
    else if(end) r->next = t, r = t;
    else t->next = f, f = t; 
}


void delete(int end){
    struct student *t, *p;
    if(!f){
        printf("Lst is empty!!");
        return;
    }
    if(f == r){
        t = f;
        f = r = NULL;
    }

    else if(end){
        for(p = f; p->next != r; p = p->next);
        t = r;
        r = p;
        r->next = NULL;
    }
    else{
        t = f;
        f = f->next;
    }

    printf("Deleted : %s %s\n", t->usn, t->name);
    free(t);
}

void display(){
    struct student *t;
    if(!f){
        printf("list is empty!!!");
        return;
    }
    for(t = f; t; t = t->next){
        printf("%s %s %s %d %s", t->usn, t->name, t->branch, &t->sem, t->phone);
    }
}

int main(){
    int ch, n;

    while(1){
        printf("1.Create\n 2.display\n 3.insertEnd\n 4.deleteEnd\n 5.insertBeg\n 6.deleteBeg\n 7.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: printf("Enter the number of the  nodes: ");
                    scanf("%d", &n);
                    while(n--) insert(1);
                    break;
            case 2: display(); break;
            case 3: insert(1); break;
            case 4: delete(1); break;
            case 5: insert(0); break;
            case 6: delete(0); break;
            case 7: exit(0);
            default: printf(" ___Invalid_choice___ \n");
        }
    }
}