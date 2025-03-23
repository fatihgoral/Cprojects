#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char *data;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack* stack = malloc(sizeof(Stack));
    if (!stack || !(stack->data = malloc(capacity * sizeof(char)))) return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

bool push(Stack* stack, char item) {
    return stack->top < stack->capacity - 1 ? (stack->data[++stack->top] = item, true) : false;
}

char pop(Stack* stack) {
    return stack->top >= 0 ? stack->data[stack->top--] : '\0';
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void freeStack(Stack* stack) {
    if (stack) free(stack->data), free(stack);
}

bool balanced(const char p[], size_t n) {
    Stack* s = createStack(n);
    if (!s) return false;

    for (size_t i = 0; i < n; ++i) {
        if (p[i] == '(' || p[i] == '{') push(s, p[i]);
        else if ((p[i] == ')' && pop(s) != '(') || (p[i] == '}' && pop(s) != '{')) {
            freeStack(s);
            return false;
        }
    }

    bool result = isEmpty(s);
    freeStack(s);
    return result;
}

int main() {
    const char *tests[] = {"({})", "({)}", "{{(()}}", "{{}}", "", NULL};

    for (int i = 0; tests[i]; ++i)
        printf("Test %d: %s\n", i + 1, balanced(tests[i], strlen(tests[i])) ? "Dengeli" : "Dengeli Degil");

    return 0;
}
