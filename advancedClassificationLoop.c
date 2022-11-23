#include"NumClass.h"
#include <math.h>
#include <stdio.h>

int numberDigit(int num)
{
    int count = 0;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    return count;
}
int isArmstrong(int num)
{
    int sum=0,num2,temp=num;
    int numDigi=numberDigit(num);
    while (num>0)
    {
        num2=pow(num%10,numDigi);
        sum+=num2;
        num=num/10;
    } 
    if(sum==temp)
    return 1;
    else
    return 0;
}
int isPalindrome(int num)
{
    int temp=num,digit;
    int sum=0;
    while(num>0)
    {
        digit=num%10;
        sum=(sum*10)+digit;
        num=num/10;
    }
    if(temp==sum)
    {
       return 1;
    }
    else
    {
     return 0;
    } 
}
