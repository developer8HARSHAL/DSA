#include<iostream>
#include<vector>
using namespace std;


    vector<int> subarraySum(vector<int> &nums, int target) {
        int low=0;
        int high=0;
        int sum=0;

        while(high<nums.size()){
            sum=sum+nums[high];
            high++;
            
            if(sum==target){
                return {low+1,high};
            }

            while(sum>target){
                sum=sum-nums[low];
                low++;
                if(sum==target){
                return {low+1,high};
            }
            }
            
        }
        return {-1};
        
    }

int main(){

    vector<int>nums={1,2,3,4,5};
    int target=5;
    vector<int> result=subarraySum(nums,target);
    if (result.size() == 1 && result[0] == -1) {
    cout << "No subarray found" << endl;
} else {
    cout << "low: " << result[0] << endl;
    cout << "high: " << result[1] << endl;
}





}