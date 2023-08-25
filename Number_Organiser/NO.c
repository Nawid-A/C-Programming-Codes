#include <stdio.h>  
  
   int sort(int *x, int *y, int *z);
    
    int main() 
    { 
        int a, b, c, greatest, lowest, middle; 
         
         printf("What is the first number? "); 
         scanf("%d", &a); 
         printf("What is the second number? "); 
         scanf("%d", &b); 
         printf("what is the third number? "); 
         scanf("%d", &c); 
            
            sort(&a, &b, &c); 
           
           printf(" Lowest number:%d\n Middle Number:%d\n Highest number:%d\n", a, b, c); 
           printf(" Ascending Order: %d %d %d", a, b, c);
         return 0; 
    } 
    
    int sort(int *x, int *y, int *z){  
        int temp;
       if (*x > *y){
         temp=*x; 
         *x=*y; 
         *y=temp;
}
        if (*y > *z){
         int temp=*y; 
         *y=*z; 
         *z=temp;
    }   
        if (*x > *y){
         temp=*x; 
         *x=*y; 
         *y=temp;
         }
    }
        
