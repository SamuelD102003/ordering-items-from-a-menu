#include <stdio.h>

int main(void) {
  int choice,amount;
  double price,total;
  printf("Pick one of the following items from our menu:\n");
  printf("[1] Double Cheese Burger - $5.00\n");
  printf("[2] Spicy Chicken Sandwich - $3.99\n");
  printf("[3] Shrimp Tacos - $4.50\n");
  printf("[4] Chocolate Ice Cream Cone - $1.99\n");
  printf("\nEnter the item number\n");
  do {
  scanf("%d",&choice);
  switch(choice)
    {
      case 1:
        price = 5.00;
        break;
      case 2:
        price = 3.99;
        break;
      case 3:
        price = 4.50;
        break;
      case 4:
        price = 1.99;
        break;
      default:
      printf("\nInvalid item number! Re-enter item number:\n");
    }
  }while (choice<1 || choice >4);
  printf("\nHow many?\n");
  scanf("%d",&amount);
  total = price * amount * 1.07;
  printf("Total price including tax = %.2lf",total);
  return 0;
}