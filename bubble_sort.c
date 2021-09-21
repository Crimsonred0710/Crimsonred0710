
#include <stdio.h>
int main()

{
    int n, i, j, arr[100];
    int temp;
    printf("enter total numbers ");
    scanf("%d", &n);
    printf("enter your numbers \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("you have entered \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}