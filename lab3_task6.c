
// A SOC analyst needs a simple C program that generates a security incident report.

#include<stdio.h>

int main(){
char id[20],name[20];
int rec,num_sys,total;
float down_time;
printf("Enter the id =" );
scanf("%s",&id);
printf("\n enter the name of the analyst = ");
scanf("%s",&name);
printf("\n Enter the total number of systems affected = ");
scanf("%d",&num_sys);
printf("\nEnter the cost of one system = ");
scanf("%d",&rec);
printf("\n Enter the downtime in hours = ");
scanf("%f",&down_time);
total=(rec*num_sys);
printf("\n================================================");
printf("\n \tINCIDENT REPORT");
printf("\n=================================================");
printf("\nAnalyst = %s",name);
printf("\n Incident id = %s",id);
printf("\nThe total recovery cost is = %d ",total);
printf("\nDown time in hours = %2f",down_time);



    return 0 ;
}