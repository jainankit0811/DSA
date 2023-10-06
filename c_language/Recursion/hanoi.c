#include <stdio.h>
void hanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);
        printf("%c -> %c\n", a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    char a = 'A', b = 'B', c = 'C';
    int n = 100;
    hanoi(n, a, b, c);

    return 0;
}