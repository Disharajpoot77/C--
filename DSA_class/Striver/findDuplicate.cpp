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
        int temp=0;
        for(int i=1; i<n; i++){
            if(arr[temp]!=arr[i]){
                temp=i;
            }
            else{
				temp=arr[i];
                break;
            }
        }
		cout<<temp<<endl;
}