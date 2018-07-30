#include<stdio.h>
void main()
{
	int num,rev,rem,sum=0;

	printf("enter the number to check palindrome are not\n");
	scanf("%d",&num);

	rev=num;
	while(num!=0)
	{
		rem=num%10;
	 	sum=sum*10+rem;
		num=num/10;
    }

    if(sum==rev)
    {
         printf("%d is palindrome",sum);
    }
    else
    {
    	printf("the given number is not an palindrome");
    }	
}