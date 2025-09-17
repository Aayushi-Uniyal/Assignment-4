#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int q1[SIZE], q2[SIZE];
int f1 = 0, r1 = 0, f2 = 0, r2 = 0;

void enqueue(int q[], int *r, int val) {
    q[(*r)++] = val;
}
int dequeue(int q[], int *f) {
    return q[(*f)++];
}
int isEmpty(int f, int r) {
    return f == r;
}


void push(int x) {
    enqueue(q2, &r2, x);
    while (!isEmpty(f1, r1)) {
        enqueue(q2, &r2, dequeue(q1, &f1));
    }
   
    int *tq, tf, tr;
    tq = q1; q1[0] = q2[0];  
    int temp;
    int *tmpq = q1; q1 = q2; q2 = tmpq;
    temp = f1; f1 = f2; f2 = temp;
    temp = r1; r1 = r2; r2 = temp;
}


int pop() {
    if (isEmpty(f1, r1)) return -1;
    return dequeue(q1, &f1);
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("%d\n", pop()); 
    printf("%d\n", pop()); 
    return 0;
}
