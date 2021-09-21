#include <stdio.h>
int main()

{
    int n, i, arr[100];
    int find;
    int count = 1;
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

    printf("enter the number you want to find");
    scanf("%d", &find);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            printf("you have found and your number is %d and it has index %d no.", find, i);
            count++;
        }
    }
    if (count == 1)
        printf("find unsuccessful");
    return 0;
}
