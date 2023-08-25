#include <stdio.h>

int main()
{ 
    int n=9, line, i; 
    int a[n][n];
    
    for(line=0;line<n;line++){  
        for(i=0;i<=line;i++){ 
            if(line==i || i==0){ 
                a[line][i]=1; 
            } 
            else{ 
                a[line][i]= a[line-1][i-1]+a[line-1][i]; 
            }  
            printf("%d ", a[line][i]);  
        }  
        printf("\n");
    } 

    return 0;
}
