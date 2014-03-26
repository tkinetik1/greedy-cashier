#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    float money;
    
    do
    {
    printf("How much change is owed?\n");
    money = GetFloat();
    
    }
    while(money <= 0);
        int dollar_cents;
        dollar_cents = money * 100;
        int leftover_cents = (dollar_cents % 100);

        // start the mathematics of cents into quarter/ leftover into / dime / leftover into nickle / leftover into pennies.
        
        int quarter = 25;
        int quarters;

        quarters = leftover_cents/quarter;
        leftover_cents = leftover_cents - (quarters*quarter);
        
        int dime = 10;
        int dimes = leftover_cents/dime;
        leftover_cents = leftover_cents - (dime*dimes);
        
        int nickle = 5;
        int nickles = leftover_cents/nickle;
        
        int penny = 1;
        int pennies = leftover_cents/penny;
        
        int coins = pennies + nickles + dimes + quarters;
                
        printf(" you get %i coins\n", coins);
}    





/*        int quartercash = quarter*quarters;*/
/*        int dimecash = dime*dimes;*/
/*        int nicklecash = nickle*nickles;*/
/*        int pennycash = penny*pennies;*/
/*        */
/*        double rounded_cash = round(money);*/
/*        printf("You entered %.02f\n", rounded_cash);*/
/*                */
/*        printf(" you have %i cents of quarters coming back\n",quartercash);*/
/*        printf(" you have %i cents of dimes coming back\n",dimecash);*/
/*        printf(" you have %i cents of nickles coming back\n",nicklecash);*/
/*        printf(" you have %i cents of pennies coming back\n",pennycash);*/
