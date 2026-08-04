#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));

   char characters[] =

   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

   int passwordLength;

   printf("Enter password length: ");
   scanf("%d", &passwordLength);

   if (passwordLength < 1 || passwordLength > 100)
   {
    printf("Invalid password length!\n");
    return 1;
   }



   printf("Random Password: ");

   for (int i = 0; i < passwordLength; i++)

   {
    int index = rand() % (sizeof(characters) - 1);

    char password = characters[index];

    printf("%c", password);
   }

    printf("\n");


    return 0;
}
