#include <iostream>
using namespace std ;
int array[10][10] ;
int count [10] ;

void add_graph(int a , int b, int array[10][10], int count[10]) {
     array[a][b] = 1 ;
     array[b][a] = 1 ;
     count[a] = 1 ;
     count[b] = 1 ;
}

void show_graph(int array[10][10]){
     for (int i = 1; i < 10; i++) {
          int temp = 0 ;
          if (count[i] == 1){
               cout << i << " : ";
          }
          for (int j = 1; j < 10; j++) {
               if(array[i][j] ==  1 ) {
                    if (temp > 0) {
                         cout << " -> " ;
                    }
                    cout << j  ;
                    temp++ ;
               }
          }
          cout << endl ;
     } 
}

int main(int argc, char const *argv[]) {
     add_graph(1,2,array,count) ;
     add_graph(4,1,array,count) ;
     add_graph(3,2,array,count) ;
     add_graph(6,5,array,count) ;
     add_graph(7,5,array,count) ;
     show_graph(array) ;
     return 0;
}
