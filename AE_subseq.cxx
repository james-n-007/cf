#include <bits/stdc++.h>
using namespace std ;
bool subseq(char str1[],char str2[],int m,int n){

       int j = 0 ;
       for (int i = 0; i < n && i< m; ++i)
       {
              if (str1[j] == str2[i])
              {
                     j++;
                     /* code */
              }

       }
       return (j==m) ;
}

int main()
{
       char str1[] = "gsfsg" ;
       char str2[] = "gsfsgjg" ;
       int m = strlen(str1) ;
       int n = strlen(str2) ;
       subseq(str1,str2,m,n)? cout<<"yess":
                              cout<<"no";
        return 0;                      

}
