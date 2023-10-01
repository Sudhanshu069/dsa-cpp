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
void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}
 

    int main(){
        int arr[100];
        int size,  index ;
        cout<<"Enter the size of the array:";
        cin>> size;
        cout<<"Enter the Elements"<<endl;
        getElem(arr, size);
        display(arr,size);
        cout<<endl<<"Enter the index to be deleted"<<endl;
        cin >> index;
        indDeletion(arr,size,index);
        size--;
        display(arr,size);
    return 0;
}