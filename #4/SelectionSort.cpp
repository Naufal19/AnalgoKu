#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
     int array[100]  ;
     int temp , swap ;
     int nilai ;

     int n ; 
     cout << "Input Jumlah Data : " ; cin >> n ;
     for (int i = 0 ; i < n; i++) {
          cout << "Data ke-" << i+1 << " : " ; 
          cin >> array[i]; 
     }
     
     cout << "\nData belum disorting\n";
     for (int i = 0; i < n; i++) {
          cout << array[i] << " " ;
     }
     


     for (int i = 0; i < n; i++) {
          temp = array[i] ;
          for (int j = i + 1 ; j < n ; j++) {
               if (temp > array[j]){
                    temp = array[j] ;
                    nilai = j ;                
               }
          }
          
          if(temp != array[i]){
               swap = array[i] ; 
               array[i] = array[nilai] ;
               array[nilai] = swap ;
          }
     }

     cout << "\nData telah disorting dengan selection sort\n"; 
     for (int i = 0; i < n; i++) {
          cout << array[i] << " " ;
     }
     
     return 0;
}
