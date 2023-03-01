#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int i;
    char password[9];
    srand(time(NULL));
 
    for (i=0; i<8; i++)
    {
        password[i] = (rand() % (90 - 65 + 1)) + 65;
    }
    password[8] = '\0';
    printf("Random valid password for the program 101-crackme: %s\n", password);
    return 0;
}
