#include <stdio.h>

int main() 
{
    int a[50],n,flag=0;

    printf("Enter  numbers: ");
    for(int i=0;i<5;i++) 
    {
        scanf("%d",&a[i]);
    }
    search(int a[],int n);
    
    if(flag) 
    {
        printf("Number found at index %d\n", i);
    } 
    else 
    {
        printf("Number not found\n");
    }
   
}
void search((int a[],int n)
{

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(int i=0;i<5;i++) 
    {
        if (a[i] == n) 
        {
            flag = 1;
            break; 
        }
    }

    if(flag) 
    {
        printf("Number found at index %d\n", i);
    } 
    else 
    {
        printf("Number not found\n");
    }

    return 0;
    
}