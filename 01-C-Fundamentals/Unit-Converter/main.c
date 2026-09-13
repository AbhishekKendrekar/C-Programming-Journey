# include <stdio.h>
int main() {
int choice;
printf("===== UNIT CONVERTER =====\n"
       "1.Celsius to Fahrenheit\n"
       "2.Fahrenheit to Celsius\n"
       "3.Kilometers to Meters\n"
       "4.meters to Kilometers\n"
       "5.Kilograms to Grams\n"
       "6.Grams to Kilograms\n"
       "7.Exit\n"
      );
       float Celsius;
       float Fahrenheit;
       float Kilometers;
       float meters;
       float Kilograms;
       float Grams;
       int Exit;
       printf("Enter your choice\n");
       scanf("%d",&choice);
       if (choice==1)
       {
        printf("Enter Tempreature in Celsius\n");
        scanf("%f",&Celsius);
        Fahrenheit = (Celsius *9/5) + 32;
        printf(" Tempreature =%.3f °F\n",Fahrenheit);
       }
       else if (choice==2)
       {
        printf("Enter Tempreature in Fahrenheit\n");
        scanf("%f",&Fahrenheit);
        Celsius= (Fahrenheit-32) * 5/9;
        printf("Tempreature =%.3f °C\n",Celsius);
       }
       else if (choice==3)
       {
        printf("Enter distance in Kilometers\n");
        scanf("%f",&Kilometers);
        meters = Kilometers * 1000;
        printf("Distance =%.3f m\n",meters);
       }
       else if (choice==4)
       {
        printf("Enter distance in Meters\n");
        scanf("%f",&meters);
        Kilometers = meters / 1000;
        printf("Distance =%.3f Km\n",Kilometers);     
      }
      else if (choice==5)
      {
        printf("Enter weight in Kilograms\n");
        scanf("%f",&Kilograms);
        Grams = Kilograms * 1000;
        printf("Weight =%.3f gm\n",Grams);
      }
      else if (choice==6)
      { 
        printf("Enter weight in Grams\n");
        scanf("%f",&Grams);
        Kilograms = Grams / 1000;
        printf("Weight =%.3f Kg\n",Kilograms);
      }
      else if (choice==7)
      {
        printf("Exiting from the Program\n");
        return 0;
      }
      else
      {
       printf("Enter Valid Choice\n");
      }
         
   return 0; 
}
