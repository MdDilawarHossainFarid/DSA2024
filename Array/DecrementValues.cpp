#include<iostream>
using namespace std;

void DecrementValue(int newarray[],int n){
for(int i = 0; i < n - 1; i++){
    newarray[i] =  newarray[i] - 1;
}
  for(int i = 0; i < n - 1; i++){
        cout << "Index of " << i <<" Value is " << newarray[i] << endl;
    }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }
    cout << endl;
   DecrementValue(arr,n);
}