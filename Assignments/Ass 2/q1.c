#include <stdio.h>
void main() 
{
     int n1,n2,add,sub,mul,mod;
     float div;
     char ch;
     
     
     printf("Enter two number: ");
     scanf("%d%d ", &n1,&n2);
     
     
     if(ch=='1')
     {
       add=n1+n2;	
       printf("Addition is: %d\n",add);
	 }
	 
    else if(ch=='2')
    {
	 
     sub=n1-n2;
     printf("subtraction is: %d\n",sub);
    }
    
    else if(ch=='3')
     {
     	mul=n1*n2;
     	printf("Multiplication is:%d\n",mul);
	 }
     
     else if(ch=='4')
     {
     	div=n1/n2;
        printf("division is: %f\n",div);
     }
     else if(ch=='5')
     {
	   mod=n1%n2;
       printf("modulus is: %d\n:",mod);
     }
    else{
    	printf("invalid");
	}
         
}

