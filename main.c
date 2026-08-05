#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main()
{
   srand(time(NULL));

   char characters[] =

   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";

   char pool[100] = "";

   char useLower;
   char useUpper;
   char useNumbers;
   char useSymbols;

   int passwordLength;

   printf("Enter password length: ");
   scanf("%d", &passwordLength);

   printf("Include uppercase letters? (y/n): ");
   scanf(" %c", &useUpper);

   printf("Include numbers? (y/n): ");
   scanf(" %c", &useNumbers);

   printf("Include special characters? (y/n): ");
   scanf(" %c", &useSymbols);



   if (useLower == 'y')
   {
    strcat(pool, "abcdefghijklmnopqrstuvwxyz");
   }

   if (useUpper == 'y')
   {
    strcat(pool, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
   }

   if (useNumbers == 'y')
   {
    strcat(pool, "0123456789");
   }

   if (useSymbols == 'y')
   {
    strcat(pool, "!@#$%^&*");
   }



   if (strlen(pool) == 0)
   {
    printf("Error: You must select at least one character type.\n");
    return 1;
   }



   if (passwordLength < 1 || passwordLength > 100)
   {
    printf("Invalid password length!\n");
    return 1;
   }



   printf("Random Password: ");

   for (int i = 0; i < passwordLength; i++)

   {
   int index = rand() % strlen(pool);

    char password = pool[index];

    printf("%c", password);
   }

    printf("\n");


    return 0;
}
