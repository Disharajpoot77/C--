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

	sort(arr,arr+n);
	int count=0;
	int L=0;
	for(int i=0; i<n; i++){
		cout<<"c"<<count<<endl;
		cout<<"l"<<L<<endl;
		if(arr[i]==0 && i==0){
			count++;
		}
		if(arr[i]==arr[L+1]){
			count++;
		 	 L=arr[i];
		}
		else if(arr[i]!=arr[L+1]){
			break;
		}
		else{
			i++;
		}
	}

	cout<<count-1;
	return 0;

}