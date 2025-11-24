#include<stdio.h>

int main (){


    int selling_price, cost_Price , profit ,Loss ;

    printf("Enter selling price = ");
    scanf("%d", &selling_price);

    printf("Enter Cost Price = ");
    scanf("%d", & cost_Price);

    if (selling_price > cost_Price )

    {

        profit = selling_price - cost_Price ;

        printf("profit =%d",profit);

    }

    else if (selling_price < cost_Price)
    {

        Loss = cost_Price - selling_price ;
        printf("Loss =%d",Loss);

    }
    else
    {

        printf("No profit or loss");

    }





    return 0;
}
