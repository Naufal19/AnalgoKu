#include <iostream>
using namespace std;
main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int n = 10 ;
    //Deklarasi
    int i, j, mid ;
    int y = 10 ;
    bool found;

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl << "Angka yang ingin dicari , y = " << y << endl ;

    //Algoritma
    i = 1;
    j = n;
    found = false;
    while ( not found && i <= j){
        mid = (i + j) / 2;
        if (arr[mid] == y) {
            found = true;
        }
        else if (arr[mid] < y) {
            i = mid + 1;
        }
        else {
            j = mid - 1;
        }
    }
    if(found){
        y = mid + 1;
        cout << "Ketemu dengan y = " << y << endl;
    } 
    else{
        y = 0;
    }
}