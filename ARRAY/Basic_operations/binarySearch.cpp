#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;    // Here we can use recursion i.e binarySearch(arr,mid+1,elem) instead of while loop
        }
        else{
            high = mid -1;  // Here we can use recursion i.e binarySearch(arr,mid-1,elem) instead of while loop
        }
    } 
    return -1;
    
}
 
int main(){

    int arr[] = {1,2,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int element = 5;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
