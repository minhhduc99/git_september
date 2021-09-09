#include <stdio.h>
#include <stdlib.h>

int* enterArray(int);
void swap(int*, int*);
int partition(int[], int, int);
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

int partition(int array[], int low, int high)
{
    // Select the last element as pivot
    int pivot = array[high];

    // pointer for greater element
    int point = (low - 1);

    /* each element of array compare with pivot, except the last element
    because it is pivot */
    for (int index = low; index < high; index++)
    {
        if (array[index] < pivot)
        {
            // if element smaller than pivot is found
            // swap it with the first greater element than pivot pointed by point
            point++;

            swap(&array[index], &array[point]);
        }
    }

    // swap the pivot element with the greater element pointed by point
    swap(&array[high], &array[point + 1]);

    // return the partition point
    return point + 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, pivot - 1);

        // recursive call on the right of pivot
        quickSort(array, pivot + 1, high);
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