#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int x) {
    if (isFull())
        printf("Queue Overflow!\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = x;
        printf("%d inserted\n", x);
    }
}

void dequeue() {
    if (isEmpty())
        printf("Queue Underflow!\n");
    else {
        printf("%d deleted\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void peek() {
    if (isEmpty())
        printf("Queue Empty!\n");
    else
        printf("Front = %d\n", queue[front]);
}

void display() {
    if (isEmpty())
        printf("Queue Empty!\n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, val;
    while (1) {
        printf("\n1.Enqueue  2.Dequeue  3.Peek  4.Display  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
