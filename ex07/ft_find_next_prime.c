#include <stdio.h>
int ft_is_prime(int nb){

    int i;
    i = 2;
    if(nb < 2)
    return(0);
    while(i < nb /i){

    if(nb % i)
    return(0);
    i++;





    }

    return(1);

}

int	ft_find_next_prime(int nb){

    if(nb < 2)
    return(2);
    while(nb >= 2 ){

        if(ft_is_prime(nb) == 1)
        nb++;
    }

    return(0);


}
int main(void){
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
    return(0);
}