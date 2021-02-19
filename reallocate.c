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
        int c, newSize;


        printf("Enter the number of more values you want to enter: ");
        scanf("%d", &c );

        newSize = c+n;

        ptr = (int*) realloc(ptr, newSize * sizeof(int));

        for (int i = 0; i < newSize; i++)
        {

            ptr[i] = i + 1;
        } 
        printf("\n The final values which is stored in memory after reallocation are:\n");

        for(int i = 0; i < newSize; i++)
        {
            printf("%d\n", ptr[i]);
        }
    }
    free(ptr);
    return 0;
}
