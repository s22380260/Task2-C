#include <stdlib.h>
#include <stdio.h>

int* arr_from_input(int* len)
{
    printf(" * Array length: ");
    scanf_s("%d", len);
    int* arr = (int*)malloc(sizeof(int) * (*len));

    printf(" * Array elements: ");
    for (int i = 0; i < (*len); i++)
    {
        scanf_s("%d", &arr[i]);
    }

    return arr;
}

void print_array(int* arr, int len)
{
    printf("[");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int len;
    int* arr = arr_from_input(&len);
    print_array(arr, len);
}