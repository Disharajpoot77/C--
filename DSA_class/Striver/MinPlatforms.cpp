#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int start[n];
	for(int i=0;i<n;i++){
		cin>>start[i];
	}
	int end[n];
	for(int i=0;i<n;i++){
		cin>>end[i];
	}
        int cnt=0;
        for(int i=0; i<n; i++){
            if(i==0){
				cout<<"one"<<cnt<<endl;
                cnt++;
            }
            else if(start[i]<end[i-1]){
				cout<<cnt<<endl;
                cnt++;
            }
        }
		cout<<cnt;
	 
	return 0;
}