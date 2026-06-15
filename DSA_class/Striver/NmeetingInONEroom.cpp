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
        int compare=end[0];
        for(int i=0; i<n; i++){
            if(i==0){
                cnt++;
            }
            else if(start[i]>compare){
                cnt++;
                compare=end[i];
            }
        }
		cout<<cnt;
	 
	return 0;
}