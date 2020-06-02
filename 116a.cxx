#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    int j,k,i=0,m=0;
    cin>>n;
    while(n--){
    	cin>>j>>k;
        i=i-j+k;
        m=max(m,i);
    }
    cout<<m;

}
