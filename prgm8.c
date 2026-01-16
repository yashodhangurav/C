// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct emp {
//     int ssn, phno;
//     float sal;
//     char name[20], dept[10], desg[20];
//     struct emp *prev, *next;
// };

// struct emp *head = NULL, *tail = NULL;
// int count = 0;

// struct emp* create() {
//     struct emp *t = malloc(sizeof(struct emp));
//     printf("SSN Name Dept Desg Salary Phone:\n");
//     scanf("%d %s %s %s %f %d",
//           &t->ssn, t->name, t->dept, t->desg, &t->sal, &t->phno);
//     t->prev = t->next = NULL;
//     count++;
//     return t;
// }

// void insertBeg() {
//     struct emp *t = create();
//     if (!head) head = tail = t;
//     else {
//         t->next = head;
//         head->prev = t;
//         head = t;
//     }
// }

// void insertEnd() {
//     struct emp *t = create();
//     if (!head) head = tail = t;
//     else {
//         tail->next = t;
//         t->prev = tail;
//         tail = t;
//     }
// }

// void deleteBeg() {
//     struct emp *t;
//     if (!head) { printf("List empty\n"); return; }
//     t = head;
//     if (head == tail) head = tail = NULL;
//     else {
//         head = head->next;
//         head->prev = NULL;
//     }
//     printf("Deleted: %d %s\n", t->ssn, t->name);
//     free(t);
//     count--;
// }

// void deleteEnd() {
//     struct emp *t;
//     if (!tail) { printf("List empty\n"); return; }
//     t = tail;
//     if (head == tail) head = tail = NULL;
//     else {
//         tail = tail->prev;
//         tail->next = NULL;
//     }
//     printf("Deleted: %d %s\n", t->ssn, t->name);
//     free(t);
//     count--;
// }

// void display() {
//     struct emp *t = head;
//     if (!t) { printf("List empty\n"); return; }
//     while (t) {
//         printf("%d %s %s %s %.2f %d\n",
//                t->ssn, t->name, t->dept, t->desg, t->sal, t->phno);
//         t = t->next;
//     }
//     printf("Total Employees: %d\n", count);
// }

// int main() {
//     int ch, n;
//     while (1) {
//         printf("\n1.Create 2.Display 3.InsEnd 4.DelEnd 5.InsBeg 6.DelBeg 7.Exit\n");
//         printf("Choice: ");
//         scanf("%d", &ch);
//         switch (ch) {
//             case 1: printf("No. of employees: ");
//                     scanf("%d", &n);
//                     while (n--) insertEnd();
//                     break;
//             case 2: display(); break;
//             case 3: insertEnd(); break;
//             case 4: deleteEnd(); break;
//             case 5: insertBeg(); break;
//             case 6: deleteBeg(); break;
//             case 7: exit(0);
//             default: printf("Invalid choice\n");
//         }
//     }
// }



// --------------------------------practice DS in C/prgm8.c--------------------------------

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct emp{
//     int ssn, phone;
//     float sal;
//     char name[20], dep[20], desg[20];
//     struct emp *prev, *next;
// };

// struct emp *head = NULL , *tail = NULL;
// int count = 0;
 
// struct emp *create(){
//     struct emp *t = malloc(sizeof(struct emp));
//     printf("ssn name  dep  desg  sal phone \n");
//     scanf("%d" "%s" "%s" "%s" "%f" "%d", &t->ssn, t->name, t->dep, t->desg, &t->sal, &t->phone);
//     t->prev = t->next = NULL;
//     count++;
//     return t;
// }


// void insertBeg(){
//        struct emp *t = create();    //creating temporary node
//        if(!head) head = tail = t;
//        else{
//         t->next = head;
//         head->prev = t;
//         head = t;
//        } 
// }

// void insertEnd(){
//     struct emp *t = create();
//     if(!head) head = tail = t;
//     else{
//         tail->next = t;
//         t->prev = tail;
//         tail = t;
//     }
// }

// void deleteBeg(){
//     struct emp *t;
//     if(!head){
//         printf("List is empty!!");
//         return;
//     }
//     t = head;
//     if(head == tail) head = tail = NULL;
//     else{
//         head = head->next;
//         head->prev = NULL;
//     }
//     printf("DEleted nodes are: %d %s\n", t->ssn, t->name);
//     free(t);
//     count--;
// }

// void deleteEnd(){
//     struct emp *t;
//     if(!tail){
//         printf("List is empty!!");
//         return;
//     }
//     t = tail;
//     if(head == tail) head = tail = NULL;
//     else{
//         tail = tail->prev;
//         tail->next = NULL;
//     }
//     printf("Deleted : %d %s\n", t->ssn, t->name);
//     free(t);
//     count--;
// }


// void display(){
//     struct emp *t = head;
//     if(!t){
//         printf("list is empty!!\n");
//         return;
//     }
//     while(t){
//         printf("%d %s %s %s %.2f %d\n", t->ssn, t->name, t->dep, t->desg, t->sal, t->phone);
//         t = t->next;
//     }
//     printf("total employees are : %d\n", count);
// }

// int main(){
//     int ch, n;
//     while(1){
//         printf("\n 1.Create 2.Display 3.InsEnd 4.DelEnd 5.InsBeg 6.DelBeg 7.Exit\n");
//         printf("choice : ");
//         scanf("%d", &ch);
//     }
// }



// ----------------------------------------------practice 2---------------------------------------




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee {
    int ssn, phone;
    float sal;
    char name[20], dep[20], degn[20];
    struct employee *next, *prev;
};

struct employee *head = NULL, *tail = NULL;
int count = 0;


struct employee *create(){
    struct employee *t = malloc(sizeof(struct employee));

    printf("SSN Name Dept Desgn Salary Phone\n");
    scanf("%d %s %s %s %f %d", &t->ssn, t->name, t->dep, t->degn, &t->sal, &t->phone);
    t->next = t->prev = NULL;
    count++;
    return t;
}


void insertBeg(){
    struct employee *t = create();
    if(!head) head = tail = t;
    else{
        t->next = head;
        head->prev = t;
        head = t;
    }
}

void insertEnd(){
    struct employee *t = create();
    if(!tail) head = tail = t;
    else{
        tail->next = t;
        t->prev = tail;
        tail = t;
    }
}

void deleteBeg(){
    struct employee *t;
    if(!head){
        printf("list is empty!!");
        return;
    }
    t = head;
    if(head == tail) head = tail = NULL;
    else{
        head = head->next;
        head->prev = NULL;
    }
    printf("Deleted: %d %s", t->ssn, t->name);
    free(t);
    count--;
}

void deleteEnd(){
    struct employee *t;
    if(!tail){
        printf("list is empty!!!");
        return;
    }
    t = tail;
    if(head == tail) head = tail = NULL;
    else{
        tail = tail->prev;
        tail->next = NULL;
    }
    printf("Deleted : %d %s\n", t->ssn, t->name);
    free(t);
    count--;
}


void display(){
    struct employee *t = head;
    if(!t){
        printf("List is empty!!");
        return;
    }

}