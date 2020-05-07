#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main()

{

    int n,l;
   
    cin>>n;
   
    string s;
   
    while(n--)
       
    {
       
     cin>>s;
   
    l=s.length();
   
    if(l<=10)
       
    {
        cout<<s<<endl;
    }
   
    else
       
        {
           
        cout<<s[0]<<l-2<<s[l-1]<<endl;
    }
   
}

return 0;

}

	
