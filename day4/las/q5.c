/*The mark price and discount and
buying price are entered through
keyboard. Sometimes seller gets
profit or some time loss depends
on discount. WAP to determine
whether the seller has made profit
or incurred loss. Also determine
how much profit he made or loss
incurred.*/

#include <stdio.h>

float main()
{
    float buy_price, mark_price, discount, profit;

    printf("Enter the buying price: ");
    scanf("%f", &buy_price);

    printf("Enter the marker price: ");
    scanf("%f", &mark_price);

    printf("Enter the discount: ");
    scanf("%f", &discount);

    profit = 100 * ((mark_price - mark_price * discount * 0.01) - buy_price) / buy_price;

    if (profit > 0)
        printf("Seller made a profit of %.2f%%.\n", profit);
    else
    {
        profit = profit * (-1);
        printf("Seller made a loss of %.2f%%.\n", profit);
    }
}