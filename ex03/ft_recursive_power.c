#include <stdio.h>
 ft_recursive_power(int nb, int power){

   int res;
   res = nb;

   if(power < 0)
   return(0);
   if(power == 0)
   return(1);
   return(nb * ft_recursive_power(nb ,power- 1));

 }
 int main(void){

    printf("%d", ft_recursive_power(2, 10));
    
    return(0);




 }
