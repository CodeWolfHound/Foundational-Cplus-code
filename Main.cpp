#include "define.h"
#include <iostream>
//Function creation and calling examples
int main() {
    log("Hello, World!");
    int result = Multiplay(4, 5);
    log(result);
}

//Conditional learning
int x = 5;
if (x == 6)
{
	log("True");
}
else if (x == 5)
{
	log("Theoretical");
}
else
{
	log("False");
}

//Loops
   for (int i = 0; i < 5; i++)
   {
       Log("Hello, World!");
   }

   Log("-----");

    int i = 0;
   while (i < 5)
   {
       Log("while loop!");
       i++;
   }

    i = 0;
   
   do
   {
       Log("Do While Loop");
       i++;
   } while (i < 5);

