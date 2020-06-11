#include <bits/stdc++.h>
using namespace std ;
int binary( int arr[], int tar){
       int l = 0 ;
       int r = 6 ;
       int m = l + r / 2 ;
       while(l <= r){
              if (arr[m] == tar)
              {
                     return m ;
                     /* code */
              }
              else if (tar < m)
              {
                     r = m-1 ;
                     /* code */
              }
              else{
                     l = m+1 ;
              }
       }
       return -1 ;
}
int main(){
       int arr[] = {1,2,3,4,6,5,7} ;
       sort(arr,arr+7) ;
       int tar = 5 ;
       int res = binary(arr , tar) ;
       res == -1 ? cout<<"no" :
                cout<<"yes at"<< res ;
}
