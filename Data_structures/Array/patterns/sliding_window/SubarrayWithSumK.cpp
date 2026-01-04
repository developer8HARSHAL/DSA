#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sumorder;
        sumorder[0]=1;

        int count=0;
        int prev=0;

        for(int num:nums){
            prev+=num;
            if(sumorder.find(prev-k)!=sumorder.end()){
                count+=sumorder[prev-k];
            }

            sumorder[prev]++;
        }
        return count;
        
    }

    int main(){
        vector<int>nums={1,2,3};
        int k=3;
        int result=subarraySum(nums,k);
        cout<<"result: "<<result<<endl;
    }