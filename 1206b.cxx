#include <bits/stdc++.h>
using namespace std;
int main(){
       
       int n;
       int  minus=0,plus=0,count=0;
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; ++i)
       {
       	cin>>arr[i];
       	if(i<0){
       		minus++ ;
       	}
       	else if(i>0){
       		plus++ ;
       	}
       }
       sort(arr,arr+n);
       for (int i = 0; i < n; ++i)
       {
       	if(arr[i]<0){
       		while(arr[i]<-1)
       		{
       			arr[i]+=1 ;
       			count++ ;

       			/* code */
       		}
       		}
       		else if(arr[i]>0)
       		{
       			while(arr[i]>1){
       				arr[i]--;
       				count++;
       			}

       		}
       		else if(arr[i]==0 && minus % plus != 0){
       			arr[i]-- ;
                count++ ;
       		}
       		else if(arr[i]==0 && minus % plus == 0){
                
       			arr[i]++;
                count++ ;
       		}

       	}
              cout<<count;
       	/* code */
       }


	

