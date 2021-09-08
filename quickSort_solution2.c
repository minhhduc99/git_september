#include <stdio.h>
#include <stdlib.h>

int* enterArray(int);
void swap(int*, int*);
void quickSort(int[], int, int);
void displayArray(int[], int);

int main(void)
{
    int array_size = 0;
    int* array = NULL;

    scanf("%d", &array_size);
    array = enterArray(array_size);

    int low = 0;
    int high = array_size - 1;

    quickSort(array, low, high);
    displayArray(array, array_size);

    free(array);
    return 0;
}

int* enterArray(int array_size)
{
    int* new_array = (int*)calloc(array_size, sizeof(int));
    for (int index = 0; index < array_size; index++)
    {
        scanf("%d", &new_array[index]);
    }

    return new_array;
}

void swap(int* first_value, int* second_value)
{
    int temp = *first_value;
    *first_value = *second_value;
    *second_value = temp;
}

void quickSort(int array[], int low, int high)
{
    // select middle element as pivot
    int pivot = array[(low + high) / 2];

    // find smaller elements than pivot
    // and find greater elements than pivot
    int smaller_elements = low;
    int greater_elements = high;

    while (smaller_elements < greater_elements)
    {
        while (array[smaller_elements] < pivot)
        {
            smaller_elements += 1;
        }

        while (pivot < array[greater_elements])
        {
            greater_elements -= 1;
        }

        // swap smaller and greater element if they are not in the 
        // correct position
        if (smaller_elements <= greater_elements)
        {
            swap(&array[smaller_elements], &array[greater_elements]);
            smaller_elements += 1;
            greater_elements -= 1;
        }
    }

    // Next, we have found 2 subarrays 
    // First subarray of smaller elements is to the left of pivot
    // Second subarray of greater elements is to the right of pivot
    if (low < greater_elements)
    {
        quickSort(array, low, greater_elements);
    }

    if (smaller_elements < high)
    {t
        quickSort(array, smaller_elements, high);
    }
}

void displayArray(int array[], int array_size)
{
    for (int index = 0; index < array_size; index++)
    {
        printf("%d ", array[index]);
    }

    printf("\n");
}
