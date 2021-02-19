#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr, sum = 0;
    int n;

    printf("Enter the number of n:");
    scanf("%d", &n);

    ptr = (float*) calloc(n, sizeof(float));

    if ( ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    else
    {
        printf("Enter values: \n");
        for( int i = 0; i < n; i++)
        {
            scanf("%f", ptr + i);
        }

        for (int i = 0; i < n; i++)
        {
            sum = sum + ptr[i];
        }

        printf("The sum is : %2f", sum);
    }
    
    // free function
    free(ptr);
    
    return 0;

}
