#include <stdio.h>
int ft_iterative_factorial(int nb){

    int ret;
    if(nb < 0)

        return(0);

        if(nb == 0)
        return(1);
        ret = 1;
        while(nb)

            ret *= (nb--);

            return(ret);
    
}
int main(void){

    printf("%d", ft_iterative_factorial(3));

}