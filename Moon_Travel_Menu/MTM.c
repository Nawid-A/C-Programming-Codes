
#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h>
 
 double max_min_time(double perigee, double apogee, double speed, double *max_time, double *min_time);
 
int main()
{ 
    double max_time, min_time, perigee, apogee, distance, speed;  
    int destination=0, transportation=0;
       
       while(true) 
       { 
           printf("\n1. Earth to Mars\n"); 
           printf("2. Earth to Venus\n"); 
           printf("3. Earth to the Moon\n"); 
           printf("4. Exit Program\n");   
           printf("Enter choice: ");
           scanf("%d", &destination);
            
               printf("\n1. Travel by car\n"); 
               printf("2. Travel by airplane\n"); 
               printf("3. Travel by rocket\n");  
               printf("4. Exit Program\n"); 
               printf("Enter choice: ");
               scanf("%d", &transportation);
            
            if(destination==1){ 
            
            if (transportation==1){
            max_min_time(54600000, 401000000, 100, &max_time, &min_time);  
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            
            else if (transportation==2){ 
            max_min_time(54600000, 401000000, 500, &max_time, &min_time); 
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }   
            
            else if (transportation==3){ 
            max_min_time(54600000, 401000000, 41000, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            }
             
            else if(destination==2){ 
            
            if (transportation==1){ 
            max_min_time(38000000, 261000000, 100, &max_time, &min_time);  
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            
            else if (transportation==2){ 
            max_min_time(38000000, 261000000, 500, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }   
            
            else if (transportation==3){ 
            max_min_time(38000000, 261000000, 41000, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            }
             
            else if(destination==3){ 
            
            if (transportation==1){ 
            max_min_time(363104, 405696, 100, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            
            else if (transportation==2){ 
            max_min_time(363104, 405696, 500, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }   
            
            else if (transportation==3){ 
            max_min_time(363104, 405696, 41000, &max_time, &min_time);
            printf("max time is: %.2f hours and min time %.2f hours\n", max_time, min_time);
            }  
            }
            else if(transportation==4 || destination==4){ 
            exit(0); 
           } 
       }
    return 0;
}
 
  double max_min_time(double perigee, double apogee, double speed, double *max_time, double *min_time){ 
     *max_time=apogee/speed; 
     *min_time=perigee/speed;
 }
