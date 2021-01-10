#include<stdio.h>
void disply(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[] , int size , int element , int capacity , int index){
    if (size>=capacity)
    {
        printf("THis Insertion Cannot Be Process Due TO Insufficient space in the array.");
    }
    disply( arr, size );
     for (int i = size-1/* i = 4*/; i >= index /* i >= 3*/; i--){

       arr[i+1] = arr[i];// arr[4 + 1] = arr[5] . so 27 will move to 4th index as well as 88 will move on 5th index
        } 
    arr[index] = element; //arr[3] will become 45 which is element .
    size += 1;
    disply(arr , size);
    return 1;
}
int main (){
    int arr[100] = { 7 , 8 , 12 , 27 , 88};
    int size = 5, element = 56 , index = 0, capacity = 100;
    
    insertion(arr,size,element,capacity,index);
    

    return 0;
}