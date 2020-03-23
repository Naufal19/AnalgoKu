#include<iostream>
using namespace std ;


int main(int argc, char const *argv[]) {
     int array[10] ;
     int temp ;
     int nilai ;
     int x ;

     int y ;
     cout << "Input jumlah data : " ; cin >> y ; 
     for (int i = 0; i < y; i++) {
          cout << "input data ke-" << i+1 << " : " ; cin >> array[i] ;
     }
     
     cout << "\nData belum disorting\n";
     for (int i = 0; i < y; i++) {
          cout <<   array[i] << " " ;
     }
     

     for (int i = 0; i < y; i++) {
          x = i ;
          for (int j = i ; j >= 0 ; j--) {
               if (array[x] < array[j]) {
                    temp = array[j] ;
                    array[j] = array[x] ;
                    array[x] = temp ;
                    x = j ;
               
               }
          }     
     }
     
     cout << "\nsetelah di insertion sort\n" ;
     for (int k = 0; k < y; k++) {
          cout << array[k] << " ";
     }
     cout << endl ;
     return 0;
}
