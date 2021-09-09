#include <stdio.h>
#include <stdlib.h>

int* createArray(int);
void shellSort(int[], int);
void numberOfOccurrences(int[], int);

int main(void)
{
    int array_size = 0;
    int* new_array = NULL;

    scanf("%d", &array_size);
    new_array = createArray(array_size);

    shellSort(new_array, array_size);
    numberOfOccurrences(new_array, array_size);

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

void shellSort(int array[], int array_size)
{
    for (int interval = array_size / 2; interval > 0; interval /= 2)
    {
        for (int first_index = interval; first_index < array_size; first_index++)
        {
            int temp_value = array[first_index];
            int second_index = first_index;

            while (second_index >= interval &&\
                array[second_index - interval] > temp_value)
            {
                array[second_index] = array[second_index - interval];
                second_index -= interval;
            }
            array[second_index] = temp_value;
        }
    }
}

void numberOfOccurrences(int array[], int array_size)
{
    int number = 0;

    for (int index = 0; index < array_size; )
    {
        number = array[index];
        static int count = 1;

        if (number == array[index + count] && count < array_size)
        {
            count++;
        }
        else
        {
            printf("%d %d; ", number, count);
            index += count;
            count = 1;
        }
    }
    printf("\n");
}