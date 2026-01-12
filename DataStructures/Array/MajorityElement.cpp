#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// USING HASHMAP_MAP

    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
            if(map[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
        
    }

int main(){
    vector<int>nums={3,2,2,1,2};
    cout<<"n/2 element is: "<<majorityElement(nums);
}
// SORTING THEN RETURNING n/2th element
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             sort(nums.begin(),nums.end());
//             return nums[n/2];
//         }
//         return -1;
        
//     }
// };
