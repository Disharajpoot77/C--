#include<bits/stdc++.h>
using namespace std;
class Solution {
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int temp=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]==temp+1){
                temp=nums[i];
            }
            else{
              break;
            }
        }
        return temp+1;

    }
};