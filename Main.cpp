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

    //Pointers
    //Pointers are just variables that store memory addresses

    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    Log(var);

    char* buffer = new char[8];//allocate 8 bytes
    memset(buffer, 0, 8);//set all bytes to 0
    char** ptr2 = &buffer;//pointer to pointer
    delete[] buffer;//free memory


