#include <stdio.h>
#include <string.h>

int main()
{
    char letter [26], copyletter [26], num;

    printf("Enter words: ");
    scanf("%[^\n]s", letter);

    strcpy(copyletter, letter);
    printf("%s", strrev (copyletter));

}
