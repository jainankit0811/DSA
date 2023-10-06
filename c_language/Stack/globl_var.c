#include <stdio.h>
#include <process.h>
#include <stdlib.h>

int stack[50];
int top = -1;
void push();
void pop();
void peek();
void display();

int main()
{
    int ch;

    while (1)
    {
        printf("1. Push\n2. pop\n3. peek\n4. display\n5. exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();

            break;
        case 2:
            pop();

            break;
        case 3:
            peek();

            break;
        case 4:
            display();

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
void push()
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
}
void pop()
{
    if (top == -1)
    {
        printf("\nOwerflow\n");
    }
    else
    {
        printf("%d is deleted\n", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("%d is on the top element\n", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}