
#include <iostream>
using namespace std;
void swap(float arr[], int i, int j)
{
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int part(float arr[], int l, int r)
{
    float p = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] > p)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return (i + 1);
}
void quicksort(float arr[], int l, int r)
{
    if (l < r)
    {
        int p = part(arr, l, r);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float arr[n];
    cout << "Enter the Elements: ";
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    quicksort(arr, 0, n - 1);
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}