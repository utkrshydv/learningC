#include <stdio.h>
int main(){
    int buy, market;
    float loss, profit, lp, pp,sell,discount;
    printf("Cost Price: \n");
    scanf("%d",&buy);
    printf("market price: \n");
    scanf("%d",&market);
    printf("Discount %%: \n");
    scanf("%f",&discount);
    sell = market - (float)(market*(discount/100));
    if (sell > buy) {
         profit = (sell-buy);
         pp = (profit/buy)*100;
        printf("Made a profit of %.2f rupees. profit percentage: %.2f %% \n", profit, pp);
    }
    else if (sell < buy) {
        loss = (buy-sell);
        lp = (loss/buy)*100;
        printf("Loss of %.2f rupees.Loss percentage: %.2f %% \n",loss, lp);
    }
    else {
        printf("Break even\n");
    }
    return 0;
}