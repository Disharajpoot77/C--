#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++){
		cin>>nums[i];
	}
        sort(nums.begin(), nums.end());

		 for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
              cout<<nums[i]<<" ";
            }
        }
  
         int temp=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]==temp+1){
                temp=nums[i];
            }
            else{
              break;
            }
        }
		cout<<temp+1;
       
}