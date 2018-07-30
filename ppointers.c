#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void plaindrome(char *recv)
{   
	int len,i,p=0,size,arr;
	len=strlen(recv);
	size=len/2;
	arr=len-1;
	   for(i=0;i<arr;i++,arr--)
	   {
	  

	     if(recv[i]==recv[arr])
	           {
                p++;
	           }
	   }
      if(p==size)
      {
      	printf("the given string is plaindrome");
      }
      else
      {
      	printf("the given string is not palindrome");
      }

}
void main()
{
	char *input;
	input=malloc(20*sizeof(char));
	printf("enter the string\n");
	scanf("%s",input);
    plaindrome(input);
    free(input);

}