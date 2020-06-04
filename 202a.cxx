#include<bits/stdc++.h>
using namespace std;
int main(){
       string s;
       cin>>s;
       sort(s.begin(),s.end()) ;
       int n = s.length();
       int count = 0 ;
       char check = s[n-1] ;
       for (int i = 0; i < n; ++i)
       {
              if (s[i] == check)
              {
                     /* code */
                     count ++ ;
              }
              /* code */
       }
    while(count>0){
        cout<< check ;
        count -- ;
    }
}
