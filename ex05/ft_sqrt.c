#include <stdio.h>
int ft_sqrt(int nb){


    long index;
    long b;

    b = nb;
    if(b <= 0)
    return(0);

    if(b == 1)
    {

        return(1);


    }
    index = 2;
    if(b >= 2){
    while(index * index <= b){


        if(index * index == b){
        return(index);


        }

        index++;



    }





}

     return(0);
   }
   int main(void){

    printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
    return(0);
    

   }