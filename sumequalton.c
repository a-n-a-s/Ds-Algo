#include<stdio.h>
#include<stdlib.h>
void sumIsN(int arr[] , int sum){
    for (int i = 0; i < 8; i++) {
            int first = arr[i];
            for (int j = i + 1; j < 8; j++) {
                int second = arr[j];

                if ((first + second) == sum) {
                    printf("(%d, %d) %n", first, second);
                }
            }

        }
    
    
}
int main()
{
    int myArr [7] = { 1 , 2 , 3 , 4 , 5 , 6 , 7};
    sumIsN(myArr , 5);
    return 0;
}
