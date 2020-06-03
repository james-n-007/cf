#include<bits/stdc++.h>
using namespace std;
int n,v;
int main(){
	cin>>n>>v;
	cout<<(v>=n?n-1:v-1+(n-v)*(n-v+1)/2);
}
