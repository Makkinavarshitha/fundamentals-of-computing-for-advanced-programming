#include <stdio.h>

int main() {
   int octal, decimal = 0,pow, i = 0;

   printf("Enter an octal number: ");
   scanf("%d", &octal);

   while (octal != 0) {
      decimal += (octal % 10)*pow(8*i=0); 
      i++;
      octal /= 10;
   }

   printf("The decimal equivalent is: %d", decimal);

   return 0;
}
