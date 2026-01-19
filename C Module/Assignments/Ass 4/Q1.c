#include <stdio.h>
void main()
{
    int num,rem, sum, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Armstrong numbers between 1 and %d are:\n", num);

    for(int i=1;i<=num;i++)
      {
        temp=i;
        sum=0;
        while(temp>0)
         {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
         }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
