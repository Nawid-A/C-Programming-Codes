#include <stdio.h>

int main()
{
     char unit, choice; 
     double input_temp, temp;
      printf("Is the temperature in F, C, or K?"); 
      scanf("%c", &unit); 
      
      if(unit=='C'){ 
          printf("The unit you selected was F. What is the temperature in degrees C?"); 
          scanf("%lf", &input_temp); 
          temp=(input_temp*9.0/5.0)+32.0; 
          printf("The temperature in degrees fahrenheit is %.1f", temp); 
      } 
        else if(unit=='F'){ 
          printf("The unit you selected was C. What is the temperature in degrees F?"); 
          scanf("%lf", &input_temp); 
          temp=((input_temp-32.0)*(5.0/9.0)); 
          printf("The temperature in degrees Celsius is %.1f", temp); 
        }   
        else if(unit=='K'){ 
            printf("The unit you selected was K. Would you like to convert this to Celsius or Fahrenheit?\n"); 
            scanf("%c", &choice);  
             
                if(choice=='C'){   
                 printf("What value is the temperature in Kelvin?\n");  
                 scanf("%lf", &temp);
                 temp=temp-273.15; 
                 printf("The temperature in celsius is %lf.", temp);
             }  
             else if(choice=='F'){ 
                  printf("What value is the temperature in Kelvin?\n"); 
                  scanf("%lf", &temp);
                  temp=((temp-273.15)*9/5)+32;  
                 printf("The temperature in fahrenheit is %lf", temp);
             }
       
        }

    return 0;
}

