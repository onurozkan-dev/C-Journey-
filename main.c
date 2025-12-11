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



return 0;
}