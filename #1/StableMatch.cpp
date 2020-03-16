#include <iostream>
using namespace std ;



int main() {
     string man[5] = {"Victor" , "Wyatt" , "Xavier" , "Yancey" , "Zeus"} ;
     string man_choice[5][5] = {
          {"Bertha" , "Amy" , "Diane" , "Erika" , "Clare" },
          {"Diane" , "Bertha" , "Amy" , "Clare" , "Erika" },
          {"Bertha" , "Erika" , "Clare" , "Diane" , "Amy" },
          {"Amy" , "Diane" , "Clare" , "Bertha",  "Erika" },
          {"Bertha" , "Diane" , "Amy" , "Erika" , "Clare" },
          } ;
          
     string woman[5] = {"Amy" , "Bertha" , "Clare" , "Diane" , "Erika"} ;
     string woman_choice [5][5] = {
          {"Zeus" , "Victor" , "Wyatt" , "Yancey" , "Xavier" } , 
          {"Xavier" , "Wyatt" , "Yancey" , "Victor" , "Zeus" } , 
          {"Wyatt" , "Xavier" , "Yancey" , "Zeus" , "Victor" } , 
          {"Victor" , "Zeus" , "Yancey" , "Xavier" , "Wyatt" } ,
          {"Yancey" , "Wyatt" , "Zeus" , "Xavier" , "Victor" } , 
     } ;

     string temp ;
     string hasil [5][2] = {
          {"Victor" , "" },
          {"Wyatt" , "" },
          {"Xavier" , "" },
          {"Yancey" , "" },
          {"Zeus" , "" },
          };
          
     int p1 ;
     int p2 ;
     // algorithm
     for (int i = 0 ; i < 5 ; i++) {
          for (int j = 0; j < 5; j++) {
               int temp1 = 0;
               int check ;
               int check1 ;
               temp = man_choice[j][i] ;
               // loop search
               for (int k = 0 ; k < 5 ; k++) {
                    if (temp == hasil[k][1]) {
                         temp1 = 1 ;
                    }
               }
               // if hasil == null
               if (temp1 == 0 && hasil[j][1] == "" )  {
                    hasil[j][1] = temp ;
               }
               // if hasil != null
               else if (temp1 != 0 && hasil[j][1] == "" )  {     
                    // loop search woman search location
                    for (int k = 0 ; k < 5 ; k++) {
                         if (temp == woman[k]){
                              check = k+1 ;
                         }
                         if (temp == hasil[k][1]) {
                              check1 = k+1 ;
                         }
                    }
                    // loop search man on woman's preference
                    for (int k = 0 ; k < 5 ; k++) {
                         if (woman_choice[check-1][k] == man[j]) {
                              p1 = k+1 ;
                         }
                         if (woman_choice[check-1][k] == hasil[check1-1][0]) {
                              p2 = k+1 ;
                         }
                    }

                    // Swap based woman's Preference    
                    if (p1 < p2) {
                         hasil[j][1] = temp ;
                         hasil[check1-1][1] = "" ;
                    } 
               }
          }
     }

     cout << "\n\n===Stable Matching Solution===\n\n" ;
     for (int i = 0; i < 5; i++) {
          cout << "         " ;
          for (int j = 0 ;j < 2 ; j++) {
               cout << hasil[i][j] << " " ;
          }
          cout << endl ;
     }
     cout << "\n\n" ;

     return 0;
}