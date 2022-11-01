#include <stdio.h>
#include "Stack.h"


int main()
{
    StackEntry e;
    Stack s ;
    CreatStack(&s);
    if(!StackFull(&s))
    push(e,&s);
    if(!StackEmpty(&s))
    pop(&e,&s);
    if(!StackEmpty(&s))
    StackTop(&e,&s);
    return 0;
}
