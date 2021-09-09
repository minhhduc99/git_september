#include <stdio.h>
#include <stdlib.h>

int* enterArray(int);
void swap(int*, int*);
void shellSort(int[], int);
void displayArray(int[], int);

int main(void)
{
    int array_size = 0;
    int* array = NULL;

    scanf("%d", &array_size);
    array = enterArray(array_size);

    shellSort(array, array_size);
    displayArray(array, array_size);

    return 0;
}

int* enterArray(int array_size)
{
    int* new_array = (int*)calloc(array_size, sizeof(int));

    for (int index = 0; index < array_size; index++)
    {
        scanf("%d", (new_array + index));
    }

    return new_array;
}

void swap(int* first_value, int* second_value)
{
    int temp = *first_value;
    *first_value = *second_value;
    *second_value = temp;
}

void shellSort(int array[], int array_size)
{
    // Rearrange elements at each N/2, N/4...1 intervals
    for (int interval = array_size/2; interval > 0; interval /= 2)
    {
        for (int index = interval; index < array_size; index++)
        {
            int temp = array[index];
            int second_index = index;

            while (second_index >= interval && \
                array[second_index - interval] > temp)
            {
                array[second_index] = array[second_index - interval];
                second_index -= interval;
            }

            array[second_index] = temp;
        }
    }
}

void displayArray(int array[], int array_size)
{
    for (int index = 0; index < array_size; index++)
    {
        printf("%d ", *(array + index));
    }
    printf("\n");
}