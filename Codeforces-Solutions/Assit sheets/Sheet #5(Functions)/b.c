#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ar[20];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &ar[i]);
    }
    ar[n] = '\0';

    printf("%s", ar);

    return 0;
}