
#include <stdio.h>

int main()
{ 
    double height, weight, BMI; 
    printf("Enter your weight in kg: "); 
    scanf("%lf", &weight);  
    printf("Enter your height in meters: "); 
    scanf("%lf", &height);
    BMI= weight/(height*height); 
    printf("Your BMI is %.1f\n", BMI); 
     
     if(BMI<18.5){ 
         printf("This classifies you as underweight"); 
     } 
     else if(BMI>=18.5 && BMI<24.9){ 
         printf("This classifies you as normal");  
     } 
     else if(BMI>25 && BMI<29.9){ 
         printf("This classifies you as overweight"); 
     } 
     else if(BMI>=30){ 
         printf("This classifies you as obese"); 
     } 
    return 0;
}

