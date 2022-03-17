#include <stdio.h>
 
/** Write a program that finds and prints 
* the largest prime factor of the number 612852475143, 
* followed by a new line
*/

int main()
{
  	int i, j, Number, isPrime, Highest; 
   
    	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
			    Highest = i;
			}	          	
		}
   }
  	return (Highest);
}
