#include<iostream>
using namespace std;

void reverseArray(int arr[], int i, int n,int x) {
  
    if (i > n) {
        for (int j = 1; j <= x; j++) {
            cout << arr[j] << " ";
        }
        return;
    }
    swap(arr[i], arr[n]);
    i++;
    n--;
    reverseArray(arr, i, n,x);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int x=n;
    reverseArray(arr, 1, n,x);
}
