#include <stdio.h>
#include <process.h>
#include <stdlib.h>

int push(int[], int);
int pop(int[], int);
void peek(int[], int);
void diplay(int[], int);

int main()
{
    int top = -1, stack[50];
    int ch, ele;

    while (1)
    {
        printf("1. Push\n2. pop\n3. peek\n4. display\n5. exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(stack, top);

            break;
        case 2:
            top = pop(stack, top);

            break;
        case 3:
            peek(stack, top);
            break;
        case 4:
            diplsay(stack, top);

            break;
        case 5:
            exit(0);

            break;

        default:
            printf("\nwrong choice\n");
        }
    }

    return 0;
}
int push(int stack[], int top)
{
    if (top == 49)
    {
        printf("\nOwerflow\n");
    }
    else
    {
        top++;
        printf("Enter new element: ");
        scanf("%d", &stack[top]);
    }
    return top;
}
int pop(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Deleted element is %d", stack[top]);
        top--;
    }
    return top;
}
void peek(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Top element is %d", stack[top]);
    }
}
void display(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}