#include<iostream>
using namespace std;
int Merge(int array[] , int p , int q , int r){
     int left_size , right_size , i , j , k; 

     left_size = q - p + 1; // array kiri
     right_size = r - q ; // array kanan

     int L[left_size] , R[right_size];
     for(i = 0 ; i < left_size ; i++) {
          L[i] = array[p+i] ;  // bagian kiri
     }
     for(j = 0 ; j < right_size ; j++) {
          R[j] = array[q+j+1]; // bagian kanan
     }


     i = 0,j = 0 ;
     // perbandingan untuk gabung
     for(k = p ; i < left_size && j < right_size ; k++) {
          if(L[i] < R[j]) {
              array[k] = L[i++];
          }
          else {
              array[k] = R[j++];
          }
     }

     while(i < left_size) {
         array[k++] = L[i++];
     }
     while(j < right_size) {
         array[k++] = R[j++];
     }

}


// merge sort
int MergeSort(int array[],int p,int r){
     int q;                                
     if(p < r){
          q = (p + r) /2;
          MergeSort(array , p , q);
          MergeSort(array , q+1 , r);
          Merge(array , p , q , r);
     }
}
int main()
{
     int n ;
     cout << "Jumlah Array : ";
     cin >> n;
     int array[n] , i;

     for(i = 0 ; i < n ; i++){
          cout << "Input array ke - " << i+1 << " : ";
          cin >> array[i];
     }
        
    MergeSort(array , 0 , n-1);
    cout << "Merge Sort Sukses !!" << endl ;
    
    for(i = 0 ; i < n ; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}