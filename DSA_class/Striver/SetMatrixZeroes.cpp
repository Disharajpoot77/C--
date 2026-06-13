#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	  for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

	int record[n*m][2];
	int r=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==0){
				record[r][0]=i;
				record[r][1]=j;
				r++;
			}
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<m; j++){
			arr[record[i][0]][j]=0;
		}
	
	for(int j=0; j<n; j++){
			arr[j][record[i][1]]=0;
		}

	}

	 for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


}