#include<iostream>
#include<vector>

using namespace std;

int binary (vector<int>&nums, int target, bool findfirst);
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binary(nums,target,true),binary(nums,target,false)};

    }

        int binary(vector<int>&nums, int target, bool findfirst){
            int s=0;
            int e=nums.size()-1;
            int ans=-1;

            while(s<=e){
                int mid=s+(e-s)/2;
                if(target>nums[mid]){
                    s=mid+1;
                }
                else if(target<nums[mid]){
                    e=mid-1;
                }
                else{
                    ans=mid;
                    if(findfirst)
                    e=mid-1;
                    else
                    s=mid+1;
                }
            }
            return ans;
    }



int main(){
    vector<int>nums={1,1,3,3,5,5,7,7};
    int target=5;
    vector<int> result=searchRange(nums,target);
    cout<< "first index: "<<result[0]<<endl;
    cout<< "second index: "<<result[1]<<endl;



}