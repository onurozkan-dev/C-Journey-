#include <stdio.h>

int main(void){

char item[50] = "";
int quantity = 0;
float price = 0.0f;
float total = 0.0f;
char currency = '$';

printf("Enter the item name: ");
fgets(item , sizeof(item), stdin);

printf("what is the price of each: ");
scanf("%f", &price);

printf("How many would you like: ");
scanf("%d", &quantity);


total = price * quantity;

printf("Total cost for %d %s is: %c%.2f\n", quantity, item, currency, total);







return 0;
}