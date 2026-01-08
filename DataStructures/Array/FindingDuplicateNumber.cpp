#include<iostream>
#include<vector>
using namespace std;


    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
         } while(slow!=fast);


        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;


        
    }

int main(){
    vector<int>nums={1,3,4,2,4};
    cout<<"duplicate number: "<<findDuplicate(nums);

}

//Brute_Force solution using unordered_set

// unordered_set<int>map;

// for(int i=0;i<nums.size();i++){
//     if(map.find(nums[i])!=map.end()){
//         return nums[i];
//     }
//     map.insert(nums[i]);
// }
// return -1;