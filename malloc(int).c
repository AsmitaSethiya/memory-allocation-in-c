#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr , n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if ( ptr == NULL)
    {
        printf("Memory Allocation failed");
    } 
    else{
        for(int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        for(int i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }  
    }

    return 0;
}
