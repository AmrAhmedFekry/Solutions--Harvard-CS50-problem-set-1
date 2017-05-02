/**
  *
  * mario.c
  *
  * Amr Ahmed Fekry
  *
  *
  *
  */

#include <cs50.h>
#include <stdio.h>

int main(void){
printf("Height: ");
int height = get_int(); 
for(int row = 0 ; row< height ; row++ ){
for (int space = 0; space<height-row-1 ; space++ ) {
    printf("%s" , " ");
} 
    for (int j = 0 ; j< row+2 ; j++){
    printf("#");    
    }
    printf("\n");
    
}
   


}



