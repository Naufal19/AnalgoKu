#include <iostream>
using namespace std;
main(){
    int arr [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int n = 10 ; int i ; bool found;
    int y = 10 ;
    //Algoritma
    i = 0;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl << "Angka yang ingin dicari adalah " << y << endl ;    

    found = false;
    while(i <= n && not found){
        if(arr[i] == y){
            found = true;
        }
        else{
            i = i+1;
        }
    }
    if(found){
        y = i+1;
        cout << "Ketemu dengan y = " << y <<endl;
    }
    else{
        y = 0;
    }
}