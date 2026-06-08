#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
        int target;
        cin>>target;
        vector<vector<int>> matrix(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>matrix[i][j];
            }
        }
        int m=matrix.size();
        int x=matrix[0].size();
        bool find=false;
        for(int i=0; i<m; i++){
            for(int j=0; j<x; j++){
                if(matrix[i][j]==target){
                    find=true;
                }  
            }
        }
        cout<<find;
    }