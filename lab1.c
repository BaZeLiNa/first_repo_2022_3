//first line comment

#include <stdio.h>
#include <math.h>
int main(){
    float x, y, z;
        x = 4.123;
        y = 2.395;
    
    /*printf("Type x = " );
    scanf("%f", &x);
    printf("Type y = " );  
    
    scanf("%f", &y);*/
    
    z = log(pow(x,3)) + tan(y) + pow((y+x),3) - (x*sin((y+1.6))/(177*pow(x,2)));

    printf("%f", z);
    
    }