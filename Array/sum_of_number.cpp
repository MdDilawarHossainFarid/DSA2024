#include<iostream>
using namespace std;

void sumOfNumber(int arr[], int n){
    int sum = 0; 
  float average = 0;
   for(int i = 0; i < n; i++){
       sum += arr[i];
    }
    average = sum / n;
   cout << "sum of elements of array is : " << sum << " and average is : " <<average;
}

int main(){
    int n;
     cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sumOfNumber(arr,n);
}