#include<iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
     int array[8] ;
     int temp ;
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

     for (int i = 0 ; i < n ; i++) {
          for (int j = 0; j < n-1 ; j++) {
               if (array[j] > array[j+1]){
                    temp = array[j] ;
                    array[j] = array[j+1];
                    array[j+1] = temp;  
               }
          }    
     }

     cout << "\nData telah disorting dengan bubble sort\n"; 
     for (int i = 0; i < n; i++) {
          cout << array[i] << " " ;
     }
     return 0;
}
