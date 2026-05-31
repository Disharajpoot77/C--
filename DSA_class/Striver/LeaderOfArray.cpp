#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int ele[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int count=0;
	int element=0;
	for(int i=0;i<n;i++){
		if(i!=n-1 && arr[i]>element){
			element=arr[i];
		}
		else if(arr[i]<=element){
			if(i!=n-1){
				ele[count]=element;
				count++;
				element=arr[i];
			}
			else{
				if (element<arr[i-2])
				{
					ele[count]=arr[i];
					count++;
				}
				else if (element>=arr[i-2])
				{
					ele[count]=element;
					ele[count+1]=arr[i];
					break;
				}
				
			}
		}

	}

	for(int i=0; i<count; i++){
		cout<<ele[i]<<" ";
	}

}