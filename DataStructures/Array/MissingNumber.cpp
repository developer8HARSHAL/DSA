#include<iostream>
#include<vector>

using namespace std;


    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int osum=0;
        for(int i=0;i<nums.size();i++){
            osum+=nums[i];
        }
        return sum-osum;
    }

int main(){
    vector<int>nums={3,0,1};
    cout<<"number: "<<missingNumber(nums);
}



//optimized using 'XOR' Bit Manipulation
//  int missingNumber(vector<int>& nums) {
//         int n= nums.size();
//         int ans=n;
//         for(int i=0; i<n; i++){
//             ans ^= i;
//             ans ^= nums[i];
//         }
//         return ans;
//     }