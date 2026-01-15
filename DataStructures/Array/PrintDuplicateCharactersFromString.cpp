#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

  void printduplicate(string s){
    unordered_map<char,int>map;

    for(int i=0;i<s.size();i++){
        map[s[i]]++;
    }

    for(auto j:map){
        if(j.second>1){
            cout<<"["<<j.first<<" , "<<j.second<<"],";
        }
    }

  }

int main(){
    string s="geeksforgeeks";
    printduplicate(s);
    return 0;



}