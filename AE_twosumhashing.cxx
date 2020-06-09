266#include < bits/stdc++.h >
using namespace std ;
void twosum(int arr[] , int size ,int tar){
       unordered_map < int ,int > map ;
       for (int i = 0; i < size; ++i)
       {
            if (map.find(tar - arr[i]) != map.end())
                    {
                           /* code */
                     cout<< map[tar-arr[i]]<< " " << i;
                     return ;
                    }        
                    map[arr[i]] = i;      
       }
    cout<<"not found";
}
int main(){
       int arr[] = {1,2,3,4,5,-1} ;
       int tar = 95;
       int size = sizeof(arr) / sizeof(arr[0]) ;
       twosum(arr,size,tar);
       return 0 ;
}
