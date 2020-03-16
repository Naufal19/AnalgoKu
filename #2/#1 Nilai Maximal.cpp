#include <iostream>
using namespace std;
main(){
    int n = 9 ;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int maks;
    int jumlah = 0;
    int assign = 3;
    maks = arr[0];
    int i = 0;
    while(i <= n){
        if(arr[i] > maks){
            maks = arr[i];
            assign += 1;
        }
        i = i + 1;
        assign += 1;
        jumlah += 1;
    }

    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ; 
    }
    cout << endl ;
    cout << " Nilai Maksimal" << maks << endl;
    cout << "Assign : " << assign << endl;
    cout << "Jumlah : " << jumlah << endl;
}