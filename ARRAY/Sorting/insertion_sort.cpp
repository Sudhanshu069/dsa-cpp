#include<iostream>
using namespace std;
void display(int A[], int n){
    for ( int i = 0; i < n; i++)
    {
        cout<< "  " << A[i];
    }   
}

void insertionSort(int *A, int n){
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){

    
    int n ;
    cin>>n;
    int A[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> A[i];
    }   
    display(A, n);
    insertionSort(A, n);
    cout << endl;
    display(A, n);
    return 0;
}
