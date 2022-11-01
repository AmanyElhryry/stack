#define StackEntry int
#define MaxSize 100
typedef struct stack {
int top;
StackEntry entry[MaxSize];
}Stack;

void CreatStack(Stack *ps);
void push (StackEntry e , Stack *ps);
int StackFull(Stack *ps);
void pop (StackEntry *pe , Stack *ps);
int StackEmpty(Stack *ps);
void ClearStack(Stack *ps);
void StackTop(StackEntry *pe , Stack *ps);
void TraverseStack(Stack *ps , void (*pf)(StackEntry));
int StackSize(Stack *ps);

