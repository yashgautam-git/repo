#include<stdio.h>
int main()
{
    int num,temp,sum,remainder;
    printf("The armstrong number between 1 to 100 \n");
    for(num=1;num<=1000;num++)
    {
        sum=0;
        temp=num;
        while(temp)
        {
            remainder=temp%10;
            sum=sum+(remainder*remainder*remainder);
            temp=temp/10;
        }
        if(sum==num)
        printf("%d \n",num);
    }
    return 0;
}