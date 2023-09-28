//Program for find power of any  integer number using a function
#include<stdio.h>
//Declaring function
void power(int a,int b)
{
    int i=0,ans=1;
    while(i!=b)
    {
      ans=ans*a;
      i++;
    }
    printf("%d^%d=%d",a,b,ans);
}
//Declaring the main function
int main()
{
    int m,n;
    printf("Enter the number : ");
    scanf("%d",&m);
    printf("Enter the power : ");
    scanf("%d",&n);
    //function calling
    power(m,n);
    return 0;
}
//To find the power of float numbers change [int => float]
