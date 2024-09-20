#include<iostream>
using namespace std;

void print1(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

void print2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << j;
        }
      cout <<endl;
    }
}

void print3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i;
        }
      cout <<endl;
    }
}

void print4(int n){
    for(int i = 1; i <= n; i++){    
        for(int j = 1; j <= i; j++){
            cout << i;
        }
      cout <<endl;
    }
}

void print5(int n){
   int value = n ; 
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= value; j++){
            cout << value;
        }
        value--;
      cout <<endl;
    }
}

void print6(int n){
   int value = n ; 
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= value; j++){
            cout << j;
        }
        value--;
      cout <<endl;
    }
}




// void print(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(i % 2 == 0){
//                 cout <<  i;
//             }else{
//                 cout << "*";
//             }
           
//         } 
//         cout << endl;
//     }
// }


int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        print6(n);
    }
}