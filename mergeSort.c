// update file
// third update
// new update
#include <stdio.h>
#include <stdlib.h>

#define START_INDEX 0

int* enterArray(int);
void mergeSort(int array[], int start_index, int end_index);
void mergeSubArrays(int array[], int start_index, int middle_index, int end_index);
void displayArray(int[], int);

int main(void)
{
    int array_size = 0;
    int* array = NULL;
    int end_index = 0;

    scanf("%d", &array_size);
    end_index = array_size - 1;
    array = enterArray(array_size);
    
    mergeSort(array, START_INDEX, end_index);
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

void mergeSort(int array[], int start_index, int end_index)
{
    if (start_index < end_index)
    {
        int middle_index = 0;
        middle_index = (start_index + end_index) / 2;
        mergeSort(array, start_index, middle_index);
        mergeSort(array, middle_index + 1, end_index);
        mergeSubArrays(array, start_index, middle_index, end_index);
    }
}

void mergeSubArrays(int array[], int start_index, int middle_index, int end_index)
{
    // Step 1
    int size1 = middle_index - start_index + 1;
    int size2 = end_index - middle_index;

    int sub_array1[size1], sub_array2[size2];

    for (int i = 0; i < size1; i++)
    {
        sub_array1[i] = array[start_index+i];
    }
    for (int j = 0; j < size2; j++)
    {
        sub_array2[j] = array[middle_index + 1 + j];
    }

    // Step 2
    int index1 = 0;
    int index2 = 0;
    int index3 = start_index;

    // Step 3
    while (index1 < size1 && index2 < size2)
    {
        if (sub_array1[index1] <= sub_array2[index2])
        {
            array[index3] = sub_array1[index1];
            index1++;
        }
        else
        {
            array[index3] = sub_array2[index2];
            index2++;
        }
        index3++;
    }

    // Step 4
    while (index1 < size1)
    {
        array[index3] = sub_array1[index1];
        index1++;
        index3++;
    }

    while (index2 < size2)
    {
        array[index3] = sub_array2[index2];
        index2++;
        index3++;
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
