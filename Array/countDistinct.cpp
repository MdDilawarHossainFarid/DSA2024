#include<iostream>
using namespace std;

int countDistinctElement(int arr[], int n){
   for(int i = 0; i <= n; i++){
   int count = 1;
   for(int j = 1; i < n; i++){
        if(arr[i] != arr[i - 1]){
           count++;
        }
    }
    }
 
//  cout << "NUMBER OF DISTINCT ELEMENT IS : "<< count;
}

int main(){
    int n;
     cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     countDistinctElement(arr,n);
}