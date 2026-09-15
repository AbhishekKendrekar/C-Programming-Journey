# include <stdio.h>
int main()
{
  int choice;
  int method;
    float V;
    float I;
    float R;
    float P;
    float iP;
    float oP;
    float T;
    float E;
    float Efficiency;
    float ElectricityRate;
    float ElectricityCost;
printf("=============================================\n");
printf("            POWER & ENERGY CALCULATOR        \n"); 
printf("=============================================\n");
printf("1.Calculate Power\n");
printf("2.Calculate Energy\n");
printf("3.Calculate Energy Consumption (kWh)\n");
printf("4.Calculate Efficiency\n");
printf("5.Calculate Electricity Cost\n");
printf("6.Calculate Power from Energy & Time\n");
printf("7.Exit\n");

printf("--------------------------------------------------\n");
printf("                 Enter your choice:               \n");
printf("==================================================\n");
       scanf("%d",&choice);
if (choice==1)
{
 printf("==================================================\n");
 printf("                CALCULATE POWER                   \n");
 printf("==================================================\n");

 printf("    1. Voltage & Current    (P = V * I)\n");
 printf("    2. Current & Resistance (P = I² * R)\n");
 printf("    3. Voltage & Resistance (P = V² / R)\n");

 printf("Enter calculation method\n"); 
        scanf("%d",&method);
         if (method==1)
        {
          printf("Enter Voltage (V)\n");
          scanf("%f",&V);
          printf("Enter Current (A)\n");
          scanf("%f",&I);
          if (V<=0||I<=0)
          {
            printf("Voltage and Current must be greater than zero\n");
          }
          else
          {
             P = V*I;
          printf("Power=%.2f W\n",P);
          }
        }
        else if (method==2)
        {
          printf("Enter Current (A)\n");
          scanf("%f",&I);
          printf("Enter Resistance (ohm)\n");
          scanf("%f",&R);
          if (I<=0||R<=0)
          {
            printf("Current and Resistance must be greater than zero\n");
          }
          else
          {
             P = I*I*R;
          printf("Power=%.2f W\n",P);
          }
        }
        else if (method==3)
        {
          printf("Enter Voltage (V)\n");
          scanf("%f",&V);
          printf("Enter Resistance (R)\n");
          scanf("%f",&R);
          if (V<=0||R<=0)
          {
            printf("Voltage and Resistance must be greater than zero\n");
          }
          else
          { P = (V*V)/R;
            printf("Power=%.2f W\n",P);
          }
        }
        else
        {
          printf("Invalid choice! Please select a method from 1 to 3.\n");
        } 
}
else if (choice==2)
{
  printf("==================================================\n");
  printf("               CALCULATE ENERGY                   \n");
  printf("==================================================\n");
  printf("E=P*T\n");
         printf("Enter Power (W)\n");
         scanf("%f",&P);
         printf("Enter Time (sec)\n");
         scanf("%f",&T);
         if (P<=0||T<=0)
          {
            printf("Power and Time must be greater than zero\n");
          }
          else
          {
            E=P*T;
         printf("Energy=%.2f J\n",E);     
          }                                                    
}
else if (choice==3)
{
  printf("==================================================\n");
  printf("           ENERGY CONSUMPTION CALCULATOR          \n");
  printf("==================================================\n");
  printf("E=(P*T)/1000\n");
         printf("Enter Appliance Power (W)\n");
          scanf("%f",&P);
          printf("Enter Operating Time (hours)\n");
          scanf("%f",&T);
          if (P<=0||T<=0)
          {
            printf("power and Time must be greater than zero\n");
          }
          else
          {
                      E=(P*T)/1000;
          printf("Energy Consumed=%.2f kWh\n",E);
          }
}
else if (choice==4)
 {
  printf("==================================================\n");
  printf("              EFFICIENCY CALCULATOR               \n");
  printf("==================================================\n");
  printf("Efficiency=oP/iP *100\n");
         printf("Enter input Power (W)\n");
         scanf("%f",&iP);
         printf("Enter Output power (W)\n");
         scanf("%f",&oP);
         if (iP<=0||oP<=0)
          {
            printf("input Power and output Power must be greater than zero\n");
          }
         else
         {
          Efficiency=oP/iP *100;
         printf("Efficiency=%.2f %%\n",Efficiency);
         }
 }
else if (choice==5)
{
  printf("==================================================\n");
  printf("            ELECTRICITY COST CALCULATOR           \n");
  printf("==================================================\n");
  printf("E=(P*T)/1000\n");
         printf("Enter Appliance Power (W)\n");
         scanf("%f",&P);
         printf("Enter Operating Time (hours):\n");
         scanf("%f",&T);
         printf("Enter Electricity Rate (Rs/kWh)\n");
         scanf("%f",&ElectricityRate);
         if (P<=0||T<=0||ElectricityRate<=0)
          {
            printf("Appliance Power,Time and Electricity Rate must be greater than zero\n");
          }
          else
          {
                      E=(P*T)/1000;
          ElectricityCost=E*ElectricityRate;
         printf("Energy consumed=%.2f kWh \n",E);
         printf("Electricity cost=%.2f Rs\n",ElectricityCost);
          }
}
else if (choice==6)
{ printf("=================================================\n");
  printf("           POWER FROM ENERGY & TIME              \n");
  printf("=================================================\n");
  printf("P=E/T\n");
         printf("Enter Energy (J)\n");
         scanf("%f",&E);
         printf("Enter Time (seconds)\n");
           scanf("%f",&T);
         if (E<=0||T<=0)
          {
            printf("Energy and Time must be greater than zero\n");
          }
      else
      {
        P=E/T;
         printf("Power=%.2f W\n",P);
      }
 }     

else if (choice==7)
{
  printf("Exit\n");
  return 0;
}
else
{
  printf("Invalid choice! Please select an option from 1 to 7.\n");
}
    return 0;
}
