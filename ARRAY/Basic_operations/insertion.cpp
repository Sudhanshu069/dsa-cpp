#include <iostream>
using namespace std;
void getElem(int arr[],int size){
    for ( int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void display(int arr[], int size){
    for ( int i = 0; i < size; i++)
    {
        cout<< "  " << arr[i];
    }
}
int indexInsertion(int arr[],int size,int ielem , int index ){
    if (size>=100)
    {
        return -1;
    }
    else{
        // For pushing the elements 
        for (int i = size-1; i >= index; i--)
        {
            arr[i+1]= arr[i];
        }
        // Taking element at the index position  
        arr[index]=ielem;
        
        return 1;
    }
    

}
    

    int main(){
        int arr[100];
        int size, ielem , index ;
        cout<<"Enter the size of the array:";
        cin>> size;
        getElem(arr, size);
        display(arr,size);
        cout<<endl<<"Enter the element to be inserted:"<<endl;
        cin>>ielem;
        cout<<"Enter the index to be inserted on"<<endl;
        cin >> index;
        indexInsertion(arr,size,ielem,index);
        size++;
        display(arr,size);
    return 0;
}