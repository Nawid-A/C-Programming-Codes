
#include <stdio.h>

int main()
{ 
    double p1, p2, t1, t2, ti, pi, sum=273; 
    
    printf("Enter the initial temperature in kelvins\n"); 
    scanf("%lf", &t1); 
    printf("Enter the initial pressure in atm\n"); 
    scanf("%lf", &p1); 
    printf("Enter the final/maximum pressure in atm\n"); 
    scanf("%lf", &p2); 
     
     t2= (t1/p1)*p2; 
     printf("The final/maximum temperature in kelvins is: %.2f\n\n", t2); 
      
      printf("TEMPERATURE (K): \t\t PRESSURE (ATM):\n");
     for(ti=273.15; ti<t2; ti+=100){  
         pi= (p1*ti)/t1; 
         printf(" %.2f \t\t\t %.2f\n",ti,pi);  
     }  
     printf("KABOOM!!!");
      
    return 0;
}

