///////////////////////////////////////////////////////
//
//                          *
//                          **
//                          ***
//
//
////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std ;

int main()
{

       int i = 0 ;



       for ( i= 0 ; i < 10 ; i++)
       {
              for(  int j=5; j>1 ; j--)
              {
                     cout<< " ";
              }

              for(int  j=0 ; j< i ; j++)
              {

                     if( i %2 ==1)
                     {
                     cout << " * ";
                     }

              }
              cout<< endl ;
       }

       return 0 ;
}