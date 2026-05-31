#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	string arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	string ans="";
	string cur=arr[0];
	for(int i=0; i<n; i++ ){
		int j=0;
		for(j=0; j<cur.size() && j<arr[i].size(); j++){
			if(arr[i][j]!=cur[j]){
				break;
			}
		}
		cur=cur.substr(0,j);
	}
   if(cur.size()==0){
   	cout<<"";
   }
   else{
   	cout<<cur<<endl;
   }
}