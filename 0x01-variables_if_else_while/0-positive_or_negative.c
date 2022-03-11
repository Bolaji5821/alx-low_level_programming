#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main- this function checks for positive, negative or zero
* @n: the number to be checked 
*
* return: 0 after succesful execution
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n==0){
printf("%d is zero\n", n);
}
if (n < 0)
	printf("%d is negative\n", n);
    return (0);
}
