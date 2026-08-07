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
   int passwordCount;


   printf("Enter password length: ");
   scanf("%d", &passwordLength);

   printf("How many passwords do you want to generate? ");
   scanf("%d", &passwordCount);

   if (passwordCount < 1 || passwordCount > 20)
   {
    printf("Please enter a number between 1 and 20.\n");
    return 1;
   }



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


   for (int p = 1; p <= passwordCount; p++)
   {
    printf("Password %d: ", p);

    char previousChar = '\0';


   for (int i = 0; i < passwordLength; i++)
   {
   int index = rand() % strlen(pool);

    char password = pool[index];

   if (password == previousChar)
   {
    i--;
    continue;
   }


    printf("%c", password);
    previousChar = password;
   }

    printf("\n");

    }

    return 0;
}
