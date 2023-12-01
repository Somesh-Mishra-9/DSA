<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;


int isEmpty() {
    return (top == -1);
}


int isFull() {
    return (top == MAX_SIZE - 1);
}


void push(int value) {
    if (isFull()) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed to the stack\n", value);
}


int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1; 
    }
    return stack[top--];
}


int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack[top];
}


int main() {
    push(10);
    push(20);
    push(30);
    push(90);
    push(36);

   

    printf("%d popped from the stack\n", pop());
    printf("%d popped from the stack\n", pop());
    printf("Top element: %d\n", peek());   

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;


int isEmpty() {
    return (top == -1);
}


int isFull() {
    return (top == MAX_SIZE - 1);
}


void push(int value) {
    if (isFull()) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed to the stack\n", value);
}


int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1; 
    }
    return stack[top--];
}


int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack[top];
}


int main() {
    push(10);
    push(20);
    push(30);
    push(90);
    push(36);

   

    printf("%d popped from the stack\n", pop());
    printf("%d popped from the stack\n", pop());
    printf("Top element: %d\n", peek());   

    return 0;
}
>>>>>>> ffbbc3ee5c23fb4110a3e8677421833c14e58799
