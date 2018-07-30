#include<stdio.h>
int input,i,n,sum;
	
void number()
   {
        
       if(input==0)
    	{
    		printf("ZERO");
    	}
    	else if(input==1)
    	{
    		printf("ONE");
    	}
    	else if(input==2)
    	{
    		printf("TWO");
    	}
    	else if(input==3)
    	{
    		printf("THREE");
    	}
    	else if(input==4)
    	{
    		printf("FOUR");
    	}
    	else if(input==5)
    	{
    		printf("FIVE");
    	}
    	else if(input==6)
    	{
    		printf("SIX");
    	}
    	else if(input==7)
    	{
    		printf("SEVEN");
    	}
    	else if(input==8)
    	{
    		printf("EIGTH");
    	}
    	else if(input==9)
    	{
    		printf("NINE");
    	}
    	else if(input==10)
    	{
    		printf("TEN");
    	}
    }
  
void main()
{
	printf("enter the two digit number\n");
	scanf("%d",&input);
	if(input<10)
	{
	number();	
	}
	else
	{
	  sum=input;
	  input=sum/10;
	  number();
      input=sum%10;
	  number();
	}	


}