#include <iostream>
using namespace std;
main(){
    int n, arr[100], temp;
    cout<<"Masukan banyak angka : "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Masukan angka : "; cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Hasil algoritma sendiri : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    //Deklarasi
    int i, j, imaks;
    //Algoritma
    for(i=n; i>=1; i--){
        imaks=1;
        for(j=1; j<i; j++){
            if(arr[j] > arr[imaks]){
                imaks=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[imaks];
        arr[imaks] = temp;
    }
    cout<<endl<<"Hasil algoritma Modul : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}