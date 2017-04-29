#include <cs50.h>
#include <stdio.h>
int main(void){
   int quarter = 25 ;
    int dime = 10 ;
    int nickel = 5;
    int penny = 1 ;
    int coin_used = 0;
    printf("O hai! How much change is owed?");
    float given = get_float();
    int change_owed = given * 100;
    
    for(int i =0 ; i<= change_owed ; i++){
        if(change_owed > quarter ||	 change_owed == quarter){
            change_owed = change_owed - quarter ;
            coin_used = coin_used+1;
        }
         if (change_owed >dime ||change_owed == dime	 ){
            change_owed = change_owed - dime ;
            coin_used = coin_used+1;
        }
          if(change_owed >nickel ||	change_owed == nickel ){
            change_owed = change_owed - nickel ;
            coin_used = coin_used+1;
        }
         if(change_owed >penny ||change_owed == penny	){
            change_owed = change_owed - penny ;
            coin_used = coin_used+1;
        }
        
    }
    printf("%i\n",coin_used);


}


