#include<iostream>
using namespace std;

int main(){
	int n;
    cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    	cin>>arr[i];
	}

	int max=arr[0];
	int current=0;
	for(int i=0; i<n; i++){
     current+=arr[i];
	 if(max<current){
		max=current;
	 }
	 if(current<0){
		current=0;
	 }
	}
	cout<<max;

}