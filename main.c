#include <stdio.h>


/*My second little project for C language*/
/* -Onur Özkan 17 y.o */

int main(){
//You can use int for constants like age
 int age = 17;

 printf("I am %d years old.\n", age);

//GPA, PI had decimal values, we should use float or double buddy!

//Btw if you wanna change the numbers after the dot, use ".nf" where n is the number of digits you want!

 float gpa = 3.5;

 printf("MY GPA is %.1f.\n", gpa);

double pi = 3.141592653589793;

 printf("The value of PI is %.5f.\n", pi);

//char is used for single characters, like grade

char grade = 'A';

printf("My math grade is %c.\n", grade);


//char[] is used for strings, like name

char name[] = "Onur";

printf("My name is %s.\n", name);

//Bool and if-else statments

bool isLegend = true;

if(isLegend){
    printf("Onur is a Legend!\n");

}
else{
    printf("Onur is not yet a Legend!\n");

}
return 0;

//Notes from Bro Code Youtube Channel:

// variable = A reusable container for a value.
// Behaves as if it were the value it contains.
// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires ‹stdbool.h>)


return 0;
}
