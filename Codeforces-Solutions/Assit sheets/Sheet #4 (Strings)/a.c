#include <stdio.h>
#include <string.h>

int main()
{
    char str[15], strn[15];

    printf("Enter two strings:\n");

    fgets(str, sizeof(str), stdin);
    fgets(strn, sizeof(strn), stdin);

    // if (str[strlen(str) - 1] == '\n'){
    //     str[strlen(str) - 1] = '\0';
    // }

    // if (strn[strlen(strn) - 1] == '\n'){
    //     strn[strlen(strn) - 1] = '\0';
    // }

    int d = strcmp(str, strn);

    if (d == 0)
    {
        printf("Equal\n");
    }
    else if (d > 0)
    {
        printf("Not Equal\nstr > strn\n");
    }
    else
    {
        printf("Not Equal\nstr < strn\n");
    }

    return 0;
}
