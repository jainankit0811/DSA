#include <stdio.h>
#include <process.h>
#include <stdlib.h>
int queue[50], rear = -1, front = -1;
void enqueue()
{
    if (rear == 49)
    {
        printf("\nOverflow\n");
    }
    else
    {
        if (rear == -1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        scanf("%d", &queue[rear]);
    }
}
void dequeue()
{
    if (rear == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\n%d is deleted", queue[rear]);
        front++;
    }
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}
void display()
{
    if (front == -1)
    {
        if (front == -1)
        {
            printf("\nUnderflow\n");
        }
        else
        {
            for (int i = 0; i <= rear; i++)
            {
                printf("%d", queue[i]);
            }
        }
    }
}
int main()
{
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong choice\n");
        }
    }

    return 0;
}