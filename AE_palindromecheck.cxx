#include<bits/stdc++.h>
using namespace std ;
using namespace std;

bool ispalindrome(string s) {
  // Write your code here.
	int i = 0;
	int j = s.size() - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
		
	}
	return true;
}
       
int main(){
       string s = "abcdcbba" ;
       ispalindrome(s) ? cout<<"yes" : 
                         cout<<"no" ;
       return 0 ;
}
