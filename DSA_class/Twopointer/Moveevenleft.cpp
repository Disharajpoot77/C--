#include<iostream>
using namespace std;
   int main(){
	int arr[] = {3,-4,2,0,8,3,-1,-2};
	int left=0;
	for(int i=0; i<8; i++){
          if(arr[i]%2==0 && arr[i]>0){
			swap(arr[i],arr[left]);
			left++;
		  }
	}

     for(int i=0; i<8; i++){
		cout<<arr[i]<<" ";
	}
	return 0;

   }
