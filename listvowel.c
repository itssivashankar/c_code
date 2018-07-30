#include<stdio.h>
void main()
{
	char input[20];
	int num,j;
	int a=0,e=0,i=0,o=0,u=0;
	printf("enter the string\n");
	scanf("%s",input);
	for(j=0;j<20;j++)
	{
       if(input[j]=='\0')
       {
           num=j; 
       }
     
    }
     for(j=0;j<num;j++)
    {
           if(input[j]=='a'|| input[j]=='A')
           {
        	     a++;
           }
           else if(input[j]=='e'|| input[j]=='E')
          {
        	     e++;
          }
           else if(input[j]=='i'|| input[j]=='I')
          {
        	     i++;
          }
          else if(input[j]=='o'|| input[j]=='O')
          {
        	     o++;
          }
          else if(input[j]=='u'|| input[j]=='U')
          {
        	     u++;
          }
    }
    printf("vowel a is %d times\n" ,a);

    printf("vowel e is %d times\n",e);
   
    printf("vowel i is %d times\n",i);
    
    printf("vowel o is %d times\n",o);

    printf("vowel u is %d times\n",u);

}