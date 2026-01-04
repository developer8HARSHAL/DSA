#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

// class Solution {
// public:
//     vector<int> arr;
//     stack<int> s;
//     vector<int> results;

//     Solution() {}

//     void nextGreater() {
//         for (int i = arr.size() - 1; i >= 0; i--) {
//             while (!s.empty() && arr[i] >= s.top()) {
//                 s.pop();
//             }

//             if (s.empty()) {
//                 results.push_back(-1);
//             } else {
//                 results.push_back(s.top());
//             }

//             s.push(arr[i]);
//         }

//         reverse(results.begin(), results.end()); // Reverse for correct order
//     }

//     void printResult() {
//         for (int num : results) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     vector<int> arr = {1, 2, 1, 5};
//     Solution obj;
//     obj.arr = arr;

//     obj.nextGreater();
//     obj.printResult();

//     return 0;
// }

// class Solution{
// public:
//     vector<int>arr;
//     stack<int>s;
//     vector<int>result;

//     Solution(){}

//     void greater(){
//         int n=arr.size();
//         result.resize(n,-1);
//         for(int i=0;i<n;i++){
//             while(!s.empty() && s.top()<=arr[i]){
//                 s.pop();
//             }
//                 if(!s.empty()){
//                     result[i]=s.top();
//                 }
//                 s.push(arr[i]);
//             }
//     }

//     void printresult(){
//         for(int nums:result){
//                cout<<nums<<" ";
//             }
//            cout<<endl;
//         }
// };

// int main() {
//     vector<int> arr = {1, 3, 2, 4};

//     Solution obj;

//     obj.arr = arr;
//     obj.greater();
//     obj.printresult();

//     return 0;
// }

// class Solution{
//     public:
//         vector<int>arr;
//         stack<int>s;
//         vector<int>result;

//         Solution(){}

//         void smallestleft(){
//             int n=arr.size();
//             result.resize(n,-1);
//             for(int i=0;i<n;i++){
//                 while(!s.empty() && s.top()>=arr[i]){
//                     s.pop();
//                 }
//                     if(!s.empty()){
//                         result[i]=s.top();
//                     }
//                     s.push(arr[i]);
//                 }
//         }

//         void printresult(){
//             for(int nums:result){
//                    cout<<nums<<" ";
//                 }
//                cout<<endl;
//             }
//     };

//     int main() {
//         vector<int> arr = {4,5,2,10,8};

//         Solution obj;

//         obj.arr = arr;
//         obj.smallestleft();
//         obj.printresult();

//         return 0;
//     }

class Solution
{
public:
    vector<int> arr;
    vector<int> result;
    stack<int> s;

    Solution() {}

    void smallestright(){
        for(int i=arr.size()-1;i>=0;i--){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                result.push_back(-1);
            }
            else{
            result.push_back(s.top());
            }

            s.push(arr[i]);


        }
        reverse(result.begin(),result.end());
    }

    void printresult(){
        for(int nums:result){
            cout<<nums<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    vector<int>arr={4,5,2,10,8};

    Solution obj;

    obj.arr=arr;
    obj.smallestright();
    obj.printresult();

    return 0;
}