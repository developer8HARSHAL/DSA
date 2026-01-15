#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string longestPrefix(vector<string>& strs){

    string ans="";
    sort(strs.begin(),strs.end());

    string first=strs[0];
    string last=strs[strs.size()-1];


    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            return ans;
        }
        else{
            ans+=first[i];
        }

    }
    return ans;
}



int main(){
    vector<string> strs={"flower","flow","flight"};
    cout<<"prefix: "<<longestPrefix(strs);

}