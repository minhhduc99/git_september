/* Find the smallest missing natural number */

#include <stdio.h>
#include <stdlib.h>

int* createArray(int);
void swapValues(int*, int*);
void quickSort(int[], int, int);
int missingNumber(int[], int, int, int);

int main(void)
{
    int array_size = 0;
    int* new_array = NULL;
    static int start_array = 0;
    static int end_array = 0;

    scanf("%d", &array_size);
    new_array = createArray(array_size);

    end_array = array_size - 1;
    printf("%d\n", missingNumber(new_array, array_size, start_array, end_array));

    free(new_array);
    return 0;
}

int* createArray(int array_size)
{
    int* new_array = (int*)calloc(array_size, sizeof(int));
    for (int index = 0; index < array_size; index++)
    {
        scanf("%d", &new_array[index]);
    }

    return new_array;
}

void swapValues(int* first_value, int* second_value)
{
    int temp = *first_value;
    *first_value = *second_value;
    *second_value = temp;
}

void quickSort(int array[], int start_array, int end_array)
{
    int pivot_element = array[(start_array + end_array) / 2];

    int smaller_elements = start_array;
    int greater_elements = end_array;

    while (smaller_elements < greater_elements)
    {
        while (array[smaller_elements] < pivot_element)
        {
            smaller_elements += 1;
        }

        while (array[greater_elements] > pivot_element)
        {
            greater_elements -= 1;
        }

        if (smaller_elements <= greater_elements)
        {
            swapValues(&array[smaller_elements], &array[greater_elements]);
            smaller_elements += 1;
            greater_elements -= 1;
        }
    }

    if (smaller_elements < end_array)
    {
        quickSort(array, smaller_elements, end_array);
    }

    if (greater_elements > start_array)
    {
        quickSort(array, start_array, greater_elements);
    }
}

int missingNumber(int array[], int array_size, int start_array, int end_array)
{
    int missing_number = 0;

    quickSort(array, start_array, end_array);

    if (array[0] > 0 )
    {
        return missing_number;
    }

    for (int index = 1; index < array_size; index++)
    {
        if ((array[index] - array[index - 1]) > 1)
        {
            missing_number = array[index - 1] + 1;
            return missing_number;
        }
    }

    missing_number = array[array_size - 1] + 1;
    return missing_number;
}