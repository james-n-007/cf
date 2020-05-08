#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,k,n;
    cin>>k>>n>>w;
	int b[10],a=0,sum=0,dif;
	
	for(int i =0; i<w;i++){
			a++;
			b[i]=a*k;
			sum=sum+b[i];
		}
		if(sum<n){
			cout<<0;
		}
		else{
		    dif=sum-n;
			cout<<dif;
		}
	}
