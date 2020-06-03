#include<bits/stdc++.h>

using namespace std;

int main(){

	int n , max,a=0 ;	cin >> n >> max;

	int arr[n];

	for(int i =0 ; i<n ; i++){

		cin>>arr[i];

	}

	sort(arr,arr+n);

		for (int i = 0; i < max; ++i)

		{

			if (arr[i]>=0)

			{

				break ;

				/* code */

			}

			else{

				a=a+arr[i];

			}

			/* code */

		}

		cout<<-a;

	}
