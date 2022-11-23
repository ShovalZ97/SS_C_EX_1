#include"NumClass.h"
#include <math.h>
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
int isPalindrome1(int num)
{
    int numberDigi = numberDigit(num);
  if(num==0)
  return 0;
  return ((num%10*pow(10,numberDigi-1))+isPalindrome1(num/10));
}
int isPalindrome(int num)
{
  if (num==isPalindrome1(num))
  {
    return 1;
  }
  return 0;
  
}
int isArmstrong1(int num,int numDigi1)
{
   // int numberDigi = numberDigit(num);
  if(num==0)
  return 0;
  return (pow(num%10,numDigi1)+isArmstrong1(num/10,numDigi1));
}
int isArmstrong(int num)
{
  if (num==isArmstrong1(num,numberDigit(num)))
  {
    return 1;
  }
  return 0;
  
}
