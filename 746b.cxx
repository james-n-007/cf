#include<bits/stdc++.h>

using namespace std;


typedef long long int ll;

int n;
string s,d;
int main(){
 cin>>n>>s;
 for(int i=0;i<n;i++){
  if((n-i)%2)
      d=d+s[i];
  else
      d=s[i]+d;
 }
 cout<<d;
}
