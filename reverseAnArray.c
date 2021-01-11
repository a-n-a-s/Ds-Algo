#include<stdio.h>
#include<stdlib.h>
void reverseAString(int arr[] ,int total){
    int c, t;

  for (c = 0; c < total/2; c++) {// Swapping
    t = arr[c];                   //1 = arr[0]
    arr[c] = arr[total-c-1];    // arr[0] = arr[10-0-1]/arr[9]
    arr[total-c-1] = t;     //arr[9] = 1

    }
};
void transversal(int arr[] , int total){
    printf("The array after reversal:\n");

  for (int c = 0 ;c < total; c++)
    printf("%d  ", arr[c]);
}


int main(){
    int myArr [10] = {1,2,3,4,5,6,7,8,9,10};
    reverseAString(myArr,10);
    transversal(myArr,10);
    return 0;
    


    
}

