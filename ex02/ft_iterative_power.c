#include <stdio.h>
int ft_iterative_power(int nb, int power){





       int res;
       res = 1;
       if(power < 0)
       result(0);
       if(power == 0)
       return(1);
       res = nb;
       while(--power)
       res *= nb;
       return(res);


}
int main(void){

    printf("%d", ft_iterative_power(2, 8));
}