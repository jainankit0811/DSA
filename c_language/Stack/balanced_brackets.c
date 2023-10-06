#include <stdio.h>
#include <string.h>

char stack[20];
int top = -1;
void push(char);
char pop();

int main()
{
    char str[20], t;
    int f = 1, i;
    printf("Enter the expression: ");
    gets(str);
    for (i = 0; str[i] != "\0"; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }
    }

    return 0;
}
void push(char a)
{

    stack[++top] = a;
}
char pop()
{
    return stack[top--];
}
