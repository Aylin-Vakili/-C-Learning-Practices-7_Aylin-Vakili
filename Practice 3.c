#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, index, arr[10];

    printf("Enter the size of the array: ");

    scanf("%d", &n);

    printf("Enter the elements of the array: \n");

    for (i = 0; i < n; i++)

    {

        printf("arr[%d] = ", i);

        scanf("%d", &arr[i]);

    }

    printf("Enter the index of the element to be deleted: ");

    scanf("%d", &index);

    if (index >= n+1)

    {

        printf (" \n Deletion is not possible in the array.");

    }

    else

    {

        for (i = index; i < n - 1; i++)

            arr[i] = arr[i + 1];

            printf("The array after deleting the element is: ");

        for (i = 0; i < n - 1; i++)

            printf("%d ", arr[i]);

        return 0;

    }

 return 0;
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 3
