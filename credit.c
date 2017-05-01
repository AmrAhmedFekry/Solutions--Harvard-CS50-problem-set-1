#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void){
    
    printf("credit: ");
    long long cc = get_long_long();
    long long digits = cc;
    int f_sum = 0 ;
    int the_result = 0 ;
    int count = 0 ;
    int multi ; 
    int array [2];
    if(cc <0){
        printf("Enter Valid credit card number");
    }
    else{
    while (digits > 0 ){
        digits = digits/10;
        count = count +1;
    }
    int number[count];
    for (int i = 0; i <count; i++)
    {
        number[i] = cc % 10;
        cc = cc / 10;
    }
    for (int i = 1 ; i < count ; i=i+2){
        multi =  number[i] * 2;
        if(multi > 9){
         for (int j = 0 ; j< 2 ; j++){
         array[j] = multi % 10;
         multi =multi / 10;
         f_sum = f_sum + array[j];
        } 
        }
        f_sum = f_sum + multi;
    }

 for (int k = 0 ; k < count ; k=k+2){
       the_result = the_result + number[k] ;
       
    }

int check = the_result + f_sum ;
int first_digit = number[count-1];
int seond_digit = number[count-2];
if( check % 10 == 0){
    if(count == 15  && first_digit==3  && (seond_digit==4 ||seond_digit==7)){
        printf("Amex\n");
    }else if(count == 16 && first_digit==5 && (seond_digit==1 ||seond_digit==2 || seond_digit==3 ||seond_digit==4 ||seond_digit==5) ){
              printf("MasterCard\n");
    }else if ((count == 13 || count == 15) && first_digit == 4  ){
      printf("Visa\n");    
    }
    
}else{
    printf("This card is not  valid\n");
}

}
}
