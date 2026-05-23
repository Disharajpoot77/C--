#include<iostream>
using namespace std;

int main(){
	int arr[]={2,0,1};
	int start=0;
	int middle=0;
	int end=2;
	for(int i=0; i<3; i++){
		if(arr[middle]==2){
			swap(arr[middle],arr[end]);
			end--;
			middle++;
		}
		else if(arr[middle]==0){
			swap(arr[middle],arr[start]);
			start++;
			middle++;
		}
	}

	for(int i=0; i<3; i++){
		cout<<arr[i]<<" ";
	}
	return 0;

}
