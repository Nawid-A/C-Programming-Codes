
#include <stdio.h> 
#include <math.h>
 
  double 
  spsound(double tempc, double tempf, double spsoundfts, double spsoundkmh){ 
      tempf= (tempc*9/5)+32; 
      spsoundfts= 1086*sqrt((5*tempf+297)/247); 
      spsoundkmh= spsoundfts*1.09728; 
      return (spsoundkmh); 
  }
  
int main()
{ 
    double tempc, tempf, spsoundfts, spsoundkmh; 
    printf("Type the temperature in degrees celsius \n"); 
    scanf("%lf", &tempc);  
    
    spsound(tempc, tempf, spsoundfts, spsoundkmh); 
    
    printf("The speed of sound is %lf km/h \n ", spsound(tempc, tempf, spsoundfts, spsoundkmh));
    
    return 0;
} 

