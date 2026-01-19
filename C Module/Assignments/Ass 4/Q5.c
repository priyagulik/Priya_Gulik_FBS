#include <stdio.h>
void main()
{
    int num, choice, i, flag = 0, temp, rev, sum, rem;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("\n1. Even/Odd\n");
    printf("2. Prime\n");
    printf("3. Palindrome\n");
    printf("4. Positive/Negative/Zero\n");
    printf("5. Reverse\n");
    printf("6. Sum of Digits\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (num % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            if (num <= 1)
                printf("Neither Prime nor Composite");
            else
            {
                for (i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                    printf("Prime");
                else
                    printf("Not Prime");
            }
            break;

        case 3: 
            temp = num;
            rev = 0;

            while (temp > 0)  
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if (rev == num)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4: 
            if (num > 0)
                printf("Positive");
            else if (num < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5: // Reverse
            temp = num;
            rev = 0;

            while (temp > 0)  
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6: 
            temp = num;
            sum = 0;

            while (temp > 0)  // simple version
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
