#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binarySaerch(int arr[], int size, int element)
{
    int mid, low, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        
    }
    return -1;
}
int main()
{
    //int arr[] = {1,3,5,56,4,3,23,4,5,54634,56,34};

    //int size = sizeof(arr)/sizeof(int);
    //int element = 55;
    // int searchesIndex = linearSearch(arr, size , element) ;
    //printf("THe element was found on %dth index and The Lenght of the array is %d and the element was %d \n",searchesIndex , size , element);
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size = sizeof(arr2) / sizeof(int);
    int element2 = 8;
    int searchedIndex = binarySaerch(arr2, size, element2);
    printf("The element %d Was Found On %dth index of the array ", element2, searchedIndex);
    return 0;
}