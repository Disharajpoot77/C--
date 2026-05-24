#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	  cin>>arr[i];
	}

	int L=n-2;
	int R=n-1;
	for(int i=n-1; i>0; i--){
		if(arr[L]<arr[R]){
				
			  	sort(arr+L+1,arr+n);
				int index=upper_bound(arr+L+1,arr+n,arr[L])-arr;
				swap(arr[L],arr[index]);
				break;
		}
		else if(arr[L]>arr[R] && L==0){
		  sort(arr,arr+n);
		}
		else{
			L--;
			R--;
		}
	}


	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}