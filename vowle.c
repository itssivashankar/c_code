#include<stdio.h>
#include<stdlib.h>
void main()
{
	char input; 
	char first='a';
	char second='e';
	char third='i';
	char fourth='o';
	char fiveth='u';
	
	printf("enter the character\n");

	scanf("%c",&input);
	//condition checking
	if(first==input)
	    {
	 	       printf("char %c is vowle\n",input);
	     }
	else if(second==input)
	    {
	           printf("char %c is vowle\n",input);

	     }
	else if(third==input)
	    {
	           printf("char %c is vowle\n",input);

	     }
	else if(fourth==input)
	    {
	           printf("char %c is vowle\n",input);

	     }
	else if(fiveth==input)
	    {
	           printf("char %c is vowle\n",input);

	     }
	else 
	    {		
	            printf("char %c is not an vowle\n",input);

	     }
}
