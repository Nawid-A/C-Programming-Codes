#include <stdio.h>  
#include <math.h>
    
    double 
    high_THR(double RHR, double MHR, double THR){ 
        THR= (MHR-RHR)*0.8+RHR; 
        return(THR);  
        printf("Your training heart rate is %lf", THR);
    } 
    
    double 
    medium_THR(double RHR, double MHR, double THR){ 
        THR= (MHR-RHR)*0.65+RHR; 
        return(THR);   
        printf("Your training heart rate is %lf", THR);
    }  
    
    double 
    low_THR(double RHR, double MHR, double THR){ 
        THR= (MHR-RHR)*0.55+RHR; 
        return(THR);   
        printf("Your training heart rate is %lf", THR);
    }
   
int main()
{  
    double RHR, THR, MHR, FHR, age; 
    char gender, fitness_level; 
    
    printf("Enter your gender and age ");
    scanf("%c", &gender);   
    scanf("%lf", &age);
    
    if(gender=='M'){  
        MHR= 203/(1+exp(0.033*(age-104.3)));     
         
         printf("Enter your fitness level and resting heart rate"); 
         scanf("%c", &fitness_level);  
         scanf("%lf", &RHR); 
         
         switch(fitness_level){ 
             case 'H': 
             high_THR(RHR, MHR, THR); 
             printf("Training heart rate is %lf ", high_THR(RHR, MHR, THR)); 
              
              break; 
              
              case 'M': 
              medium_THR(RHR, MHR, THR); 
              printf("Training heart rate is %lf ", medium_THR(RHR, MHR, THR)); 
              
              break; 
              
              case 'L':  
              low_THR(RHR, MHR, THR); 
              printf("Training heart rate is %lf ", low_THR(RHR, MHR, THR)); 
         } 
    } 
     
     else if(gender=='F'){ 
         MHR= 190.2/(1+exp(0.0453*(age-107.5)));  
         
         switch(fitness_level){ 
             case 'H': 
             high_THR(RHR, MHR, THR); 
             printf("Training heart rate is %lf ", high_THR(RHR, MHR, THR)); 
              
              break; 
              
              case 'M': 
              medium_THR(RHR, MHR, THR); 
              printf("Training heart rate is %lf ", medium_THR(RHR, MHR, THR)); 
              
              break; 
              
              case 'L':  
              low_THR(RHR, MHR, THR); 
              printf("Training heart rate is %lf ", low_THR(RHR, MHR, THR)); 
         } 
     }  
     
    return 0;
}
