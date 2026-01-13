#include<iostream>
#include<vector>
using namespace std;



    int findPeakElement(vector<int>& nums) {
        int e = nums.size() - 1;
        int s = 0;

     

        while (s <= e) {
            int mid =s+(e-s)/2;
            if(mid==0){
                if(nums[s]<nums[e]){
                    return e;
                }
                else{
                    return s;
                }
            }
           
            if (nums[mid] > nums[mid - 1]) {
                s=mid+1;
            } 
            else{
              e=mid-1;
            }
        }
        return e;
    }

    int main(){

        vector<int>nums={1,3,2,4,6,7,5};
        cout<<"peak no: "<<findPeakElement(nums);
    }