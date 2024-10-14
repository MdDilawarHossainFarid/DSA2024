#include<iostream>
using namespace std;

void   findElement(int arr[], int n,int element){
  for(int i = 0; i <= n - 1; i++){
      if(arr[i] == element){
          cout <<" Element is found : " << arr[i];
          break;
      }else{
          cout << "not found";
        break;
      }

  }

}

int main(){
    int n, element;
     cin >> n >> element;
    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    findElement(arr,n,element);
}