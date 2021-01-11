// Check Whether the number is duplicate or not
#include<stdio.h>
#include<stdlib.h>
void findingDuplicate(int arr[]){
    for (int i = arr[i]; i < 8; i++)
    {
        if (arr[i] == arr[i-1])
        {
            printf("The Duplicate In This array is %d", arr[i]);
        }
        
            
        
        
        
    }
    
    
}
int main(){
    int myArr [8] = { 1,2,3,4,5,6,7,8};
    findingDuplicate(myArr);
    return 0;
}