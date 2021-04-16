#include <stdio.h>
#include <math.h>
 
int main() 
{
    float principal_amt, Rate, time_t, EMI;
 
    printf("Enter principal: ");
    scanf("%f",&principal_amt);
 
    printf("Rate: ");
    scanf("%f",&Rate);
 
    printf("Enter time in year: ");
    scanf("%f",&time_t);
 
    Rate=Rate/(12*100); /*one month interest*/
    Time_t=time_t*12; /*one month period*/
 
    EMI= (principal_amt*Rate*pow(1+Rate,time_t))/(pow(1+Rate,time_t)-1);
 
    printf("Monthly EMI is= %f\n",EMI);
     
    return 0;
}
