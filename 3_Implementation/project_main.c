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

float loanamt,interest,monthlypayment;
   float i,first_month,second_month;
   printf("loan amount:");
   scanf("%f",&loanamt);
   printf("interest rate:");
   scanf("%f",&interest);
   printf("monthly payment:");
   scanf("%f",&monthlypayment);


   //interest calculation//
   i=loanamt * ((interest/100)/12);
   //amount including interest
   i=i+loanamt;
   first_month=i-monthlypayment; //first month payment including interest
   i=first_month * ((interest/100)/12);
   i=i+first_month;
   second_month=i-monthlypayment; //second month payment with interest
   printf("remaining amount to be paid:%.2f\n",first_month);
   printf("remaining amount to be paid:%.2f\n",second_month);
   return 0;
}

