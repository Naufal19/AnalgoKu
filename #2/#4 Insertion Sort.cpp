#include <iostream>
using namespace std;
main(){
    int n = 10 ;
    int arr[10] = {10 , 9 , 8 , 7 , 6 , 5 , 4, 3 , 2, 1 };

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    //Deklarasi
    int i, j, insert;
    //Algoritma
    for(i = 0; i < n; i++){
        insert = arr[i];
        j = i - 1;
        while((arr[j] > insert) && (j >= 0)){
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = insert;
    }

    cout << endl << "Setelah diurutkan , hasilnya : \n" ;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}