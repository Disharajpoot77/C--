#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    int result=0;
	int left=arr[0];
	int right=arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]>right){
			 right=arr[i];
			// cout<<"right"<<right<<endl;
		}
		if(arr[i]<left){
			int temp=right-left;
			// cout<<"temp"<<temp<<endl;
			if(temp>result){
				result=temp;
				// cout<<"result"<<result<<endl;
			}
			left=arr[i];
			right=arr[i];
		}
	}
	if(right-left>result){
		result=right-left;
	}
	cout<<result<<endl;

	

	// }
	// int current=0;
	// int left= 2147483647;
	// int right= 2147483647;

	// for(int i=0; i<n; i++){

	// 	if(arr[i]>right){
	// 		right=arr[i];
	// 	}
	// 	else{
	// 		int temp=right-left;
	// 		cout<<temp<<endl;
	// 		if(temp>current){
	// 			current=temp;
	// 		}
	// 		left=arr[i];
	// 		right=arr[i];
	// 	}

	// 	if (i==n-1){
	// 		int temp=right-left;
	// 		if(temp>current){
	// 			current=temp;
	// 		}
	// 	}

	// }
	
	return 0;
}