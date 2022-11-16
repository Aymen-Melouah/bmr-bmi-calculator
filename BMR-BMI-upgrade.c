#include<stdio.h>          
#include<math.h>
int main() 
/*vol 0.1 for the positve numbers only*/
{
    float weight,height,age,BMR,BMI,Sedentary,Lightlyactive,Moderatelyactive,Veryactive,Extraactive,height1,weight1,error;
    char calculator;
    int ActivityLevel,gender;
    printf("\n*BMI AND BMR CMALCULATOR*\n");
    printf("-Chose The Calculator:\n");
    printf("1.BMI\n2.BMR\n");
    scanf("%c",&calculator);
    switch(calculator)
        {
            case '1':
                printf("\n-BMI CALCULATOR-\n");
                printf("For Age 20 Or Older\n");
                printf("\nEnter Your Weight In Kg:");
                scanf("%f",&weight1);
                printf("\nEnter Your Height In Cm:");
                scanf("%f",&height1);
                   
                    BMI=weight1/pow(height1*pow(10,-2),2);
                printf("\n-BMI = %.2f Kg/m^2",BMI);
                
                    
      if(BMI<16)
      {
        printf("\n(Severe Thinness)");
      }
      else if(BMI>=16 && BMI<17)
        {
          printf("\n(Moderate Thinness)");
        }
      else if(BMI>=17 && BMI<18.5)
        {
          printf("\n(Mild Thinness)");
        }
      else if(BMI>=18.5 && BMI<25)
        {
          printf("\n(Normal)");
        }  
      else if(BMI>=25 && BMI<30)
        {
          printf("\n(Overweight)");
        }  
      else if(BMI>=30 && BMI<35)
        {
          printf("\n(Obese Class I)");
        }
      else if(BMI>=35 && BMI<40)
        {
          printf("\n(Obese Class II)");
        }
      else if(BMI>=40)
        {
          printf("\n(Obese Class III)");
        }
        break;
                default: 
           printf("\nInvalide Value");
      

            case '2':
    printf("\n-BMR CALCULATOR-\n");
    printf("\nSelect Your Gender\n1.Male\n2.Female\n");
    scanf("%i",&gender);
    printf("\nEnter Your Weight in Kg: ");
    scanf("%f",&weight);
    printf("\nEnter Your Height in Cm: ");
    scanf("%f",&height);
    printf("\nEnter Your Age: ");
    scanf("%f",&age);
    printf("\n what's your activity level?");
    printf(" \n1) little or no exercise, desk job \n");    
    printf("2) light exercise/ sports 1-3 days/week \n");
    printf("3) moderate exercise/ sports 6-7 days/week\n");
    printf("4) hard exercise every day, or exercising 2 xs/day\n");
    printf("5) hard exercise 2 or more times per day, or training for marathon, or triathlon, etc. \n");
    scanf("%i",&ActivityLevel);

    switch(gender)
        {
            case 1: BMR=88.362+(13.397*weight)+(4.799*height)-(5.677*age);
         printf("\n-BMR = %.0f Calories/day\n",BMR);
         
         break;
            case 2: BMR=447.593+(9.247*weight)+(3.098*height)-(4.330*age);
         printf("\n-BMR = %.0f Calories/day\n",BMR);
            break;
           default: 
           printf("\nInvalide Value\n");
        } 
         printf("\n-Daily calorie needs based on activity level:\n");


switch (ActivityLevel)
{
        case 1:
          Sedentary=BMR*1.2;
          printf(" ->Sedentary = %.0f (little or no exercise, desk job).\n ",Sedentary);
        break;
        case 2: 
          Lightlyactive=BMR*1.375;
         printf("->Lightly active = %.0f (light exercise/ sports 1-3 days/week).\n ",Lightlyactive);
        break;
       case 3:
           Moderatelyactive=BMR*1.55;
         printf("->Moderately active = %.0f (moderate exercise/ sports 6-7 days/week).\n ",Moderatelyactive);
       break;
       case 4:  
          Veryactive=BMR*1.725;
           printf("->Very active = %.0f (hard exercise every day, or exercising 2 xs/day).\n ",Veryactive);
       break;
       case 5:
              Extraactive=BMR*1.9;
      printf("->Extra active = %.0f (hard exercise 2 or more times per day, or training for marathon, or triathlon, etc. ",Extraactive);

        break;  
         default: 
           printf("\nInvalide Value\n");
        }
        
     }
 return 0; 
}