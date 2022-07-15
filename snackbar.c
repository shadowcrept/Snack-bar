#include <stdio.h>
/*project: C snack bar 
  author: Ted
*/
int menu(){
    int item;
    int quantity;
    float paid;
    printf("Welcome to 𝕷𝖆𝕼𝖚𝖎𝖓☘ mall C snack shop! \n");
    printf("\tToday's Menu\n");
    printf("1.cabbages KES 5$\n");
    printf("2.kale KES 7$\n");
    printf("3.fish KES 9$\n");
    printf("Enter item no.: ");
    scanf("%d",&item);
    printf("enter item quantity: ");
    scanf("%d",&quantity);
 switch (item)
 {
 case 1:
    printf(" ======  Item place in the shopping cart  ========= \n");
    int total = 40 * quantity;
    printf("Sub total: %d \n",total);
    printf("VAT at 5 percent: %lf \n", total * 0.5);
    printf("Total amount: %lf \n", total +  total * 0.5);
    printf("Enter amount tendered f printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total + total * 0.6 );
    printf("THANK YOU FOR SHOPPING COME ONE COME ALL");
    break; 
 case 2:
    printf(" ======  Item added to cart  ========= \n");
    int total1 = 40* quantity;
    printf("Sub total: %d \n", total1);
    printf("VAT at 6 percent: %lf \n", total1 * 0.6);
    printf("Total amount: %lf \n", total1 +  total1 * 0.6);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total1 + total1 * 0.6 );
    printf("THANK YOU FOR SHOPPING WITH US AND WELCOME AG");
    break;
 case 3:
    printf(" ======  Item added to cart  ========= \n");
    int total2 = 90 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 10 percent: %lf \n", total2 * 0.9);
    printf("Total amount: %lf \n", total2 +  total2 * 0.9);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.9);
    printf("THANK YOU FOR SHOPPING WITH US AND WELCOME BACK");
    break;

 default:printf("INVALID CHOICE"); menu();
    break;
 }


    return item;

}
int main(){
 menu();
 };