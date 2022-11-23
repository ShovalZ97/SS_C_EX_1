#include"NumClass.h"
#include <math.h>

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
      fact*=i;
    }
    return fact;
}
int isStrong(int num)
{
    int num2,sum=0,temp=num;
    while(num>0)
    {
        num2=num%10;
        sum+=factorial(num2);
        num=num/10;
    
    }
    if(sum==temp)
    return 1;
    else
    return 0;
}
int isPrime(int num)
{
    if(num==0)
    return 0;
    if(num==1)
    return 1;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;

}
