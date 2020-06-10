#include<bits/stdc++.h>
using namespace std ;
int main()
{
       string  s = "abczxh" ;
       int key = 3 ;
       string enc = "" ;
       for (int i = 0; i < s.length(); ++i)
       {
              enc += char(int(s[i]+key - 97)%26 +97) ;
              /* code */
       }
       cout << enc ;
       return 0;
}
