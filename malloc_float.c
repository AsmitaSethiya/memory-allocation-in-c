// write a program  to input 'n' numbers and then find out their sum.



#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr, n, sum = 0;


    printf("Enter the value of n:");
    scanf("%f", &n);

    ptr = (float*) malloc(n * sizeof(float));  

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    else
    {
        printf("Enter data: ");
        for(int i = 0 ; i < n; i++ )
        {
           scanf("%f", ptr + i);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + ptr[i];
        }
        printf("The sum of n number is: %f", sum);
    }
    
    return 0;
}
