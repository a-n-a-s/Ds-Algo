#include<stdio.h>
void disply(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int deletion(int arr[] , int size   , int index){
    
    
     for (int i = index/* i = 0*/; i < size-1 /* i < 4*/; i++){

       arr[i] = arr[i + 1];// arr[1]  will become arr[0]. And So on...
       // And New Array wil be Formded
      
        } 
    

    
    return 1;
}
int main (){
    int arr[100] = { 7 , 8 , 12 , 27 , 88};
    int size = 5,  index = 0, capacity = 100;
    disply( arr, size );
    
    deletion(arr,size,index);
    size -= 1;
    disply(arr , size);
    

    return 0;
}
