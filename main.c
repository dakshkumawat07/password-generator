#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));

   char letters[] = "abcdefghijklmnopqrstuvwxyz";

   printf("Random Password: ");

   for (int i = 0; i < 8; i++)
   {
    int index = rand() % 26;
    char password = letters[index];

    printf("%c", password);
   }

    printf("\n");


    return 0;
}
