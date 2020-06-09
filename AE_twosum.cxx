#include <bits/stdc++.h>
using namespace  std;
void twosum(int arr[] , int tar , int sum ) 
{
       sort(arr , arr + sum);
       int l = 0 ;
       int h = sum - 1 ;
       while( l < h ){
              if (arr[l] + arr[h] == tar)
              {
                  // exit ;
                  cout << "yess" <<l<<h;
                  return  ;
                     /* code */
              }
              else if (arr[l] + arr[h] < tar)
              {
                     l++ ;

              }
              else{
                     h++ ;
              }
          

       }



}
int main()
{
       int arr[] = { 1,2,3,-1,-4,5,6} ;
    
       int tar = 11;
    
       int sum = sizeof(arr)/sizeof(arr[0]) ;
    
       twosum(arr , tar , sum ) ;
       return 0 ;
}
