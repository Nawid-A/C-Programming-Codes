#include <stdio.h>

int main()
{  
    double a[100], q_weight, m_mark, f_mark, m_weight, f_weight, final_grade, sum=0;
    int i,n; 
    printf("Enter the midterm mark: "); 
    scanf("%lf", &m_mark); 
    printf("Enter the final exam mark: "); 
    scanf("%lf", &f_mark);
    printf("Enter number of quizzes: ");
    scanf("%d",&n);
    printf("Enter the quiz grades: ");
    for(i=0; i<n; i++){
        scanf("%lf",&a[i]);
    }
    for(i=0; i<n; i++){
        
        sum+=a[i];
    }  
    double min=a[0];
     for(i=0; i<n; i++){     
       if(a[i] < min)    
           min = a[i];    
    }       
    q_weight= ((sum-min)/90)*25; 
      
      if(m_mark>f_mark){ 
          m_weight= (m_mark/100)*35; 
          f_weight= (f_mark/100)*40; 
      } 
      else if(m_mark<f_mark){ 
          m_weight= (m_mark/100)*25; 
          f_weight= (f_mark/100)*50; 
      } 
     final_grade= q_weight+m_weight+f_weight; 
     printf("Your final grade is %.2f ", final_grade);
      
 return 0;
} 