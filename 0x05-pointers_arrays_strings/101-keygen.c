#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int len) {
   char possibleChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
   char password[len+1];
   
   srand(time(0)); // seed for random number generation
   for(int i = 0; i < len; i++) {
      int randomIndex = rand() % (sizeof(possibleChars) - 1);
      password[i] = possibleChars[randomIndex];
   }
   
   password[len] = '\0'; // null terminate the string
   printf("%s", password);
}

int main() {
   int len = 10; // desired length of password
   generatePassword(len);
   return 0;
}
