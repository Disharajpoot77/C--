#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		 cin>>arr[i];
	}
	int k;
	cin>>k;
	int max=0;
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=i; j<n; j++){
			sum+=arr[j];
			if(sum==k){
				max=max>(j-i+1)?max:j-i+1;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}