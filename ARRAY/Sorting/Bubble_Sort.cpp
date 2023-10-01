#include <iostream>
using namespace std;
// Time Complexity -> O(n^2)
// It is a Stable Algorithm
// It can be made into a Adaptive Algorithm



    int main(){
        int temp;
        
        int arr[]={7,1,4,12,67,33,45};
       int size = sizeof(arr)/sizeof(int);
        for (int  i = 0; i <= size-1; i++)
        {
            for (int j = 0; j <= size-1-i; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
                
            }
            
        }
        for (int i = 0; i < size ; i++)
        {
            cout<< endl << arr[i];
        }
        

    return 0;
}
