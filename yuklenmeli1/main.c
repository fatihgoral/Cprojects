#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct Node {
    char data[10];
    struct Node *next;
} Node;


typedef struct Queue {
    Node *front, *rear;
} Queue;


Queue* createQueue() {
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(Queue *q, char *data) {
    Node *temp = (Node*)malloc(sizeof(Node));
    strcpy(temp->data, data);
    temp->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

char* dequeue(Queue *q) {
    if (q->front == NULL)
        return NULL;
    Node *temp = q->front;
    char *data = temp->data;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    return data;
}

int isOperator(char *token) {
    return (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 || strcmp(token, "*") == 0 || strcmp(token, "/") == 0);
}

int evaluate(int op1, int op2, char operator) {
    switch (operator) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        default: return 0;
    }
}

int evaluatePrefix(char *expression) {
    char *tokens[100];
    int count = 0;


    char *token = strtok(expression, " ");
    while (token != NULL) {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }


    Queue *queue = createQueue();
    for (int i = count - 1; i >= 0; i--) {
        enqueue(queue, tokens[i]);
    }


    int stack[100];
    int top = -1;

    char *current;
    while ((current = dequeue(queue)) != NULL) {
        if (isOperator(current)) {
            int op1 = stack[top--];
            int op2 = stack[top--];
            int result = evaluate(op1, op2, current[0]);
            stack[++top] = result;
        } else {
            stack[++top] = atoi(current);
        }
    }

    return stack[top];
}

int main() {
    char expression[100];
    printf("Prefix ifadeyi girin ");
    fgets(expression, 100, stdin);
    expression[strcspn(expression, "\n")] = 0;

    int result = evaluatePrefix(expression);
    printf("SONUC : %d\n", result);

    return 0;
}
