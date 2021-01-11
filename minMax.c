#include <stdio.h>
#include <stdlib.h>
void maxMin(int arr[])
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The max number is %d and min number is  %d\n",max,min);
}
int main()
{
    int myArr[8] = {69 , 78 , 54 , 4, 55 ,20 , 85 , 44};
    maxMin(myArr);
    return 0;
}