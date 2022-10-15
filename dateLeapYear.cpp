#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the year= ");
    scanf("%d",& a);
    printf("enter the date= ");
    scanf("%d",& b);
    printf("enter the month= ");
    scanf("%d",& c);
    if(b<=31 && b>0)
	{
	if (a%4==0)
    	{
     		   printf("the date is leap year ");
   		 }
    	else{
   		     printf("the date is not a leap year");
   			 }
		}
	else{
		printf("Invalid Date");
	}	
    
}
