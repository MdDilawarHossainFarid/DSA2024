#include<iostream>
using namespace std;

void   printReverseArray(int reverserArray[],int n){
  for(int i = 0; i <= n - 1; i++){
    cout<<reverserArray[i]<<endl;
  }
}


void traversalRevers(int arr[], int n){
  int reverserArray[n];
  for(int i = n - 1 ; i >= 0; i--){
reverserArray[n - i - 1] = arr[i];
  }
  printReverseArray(reverserArray,n);
}

int main(){
    int n;
     cin >> n;
    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    cout << endl;

    traversalRevers(arr,n);
    
}