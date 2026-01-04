#include<iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
int ch1='a';
int ch2='4';
int ch3='#';

if(isalnum(ch1)){
    cout<<"alphanumeric ch1"<<endl;

}
else{
    cout<<"not a number ch1"<<endl;
}
if(isalnum(ch2)){
    cout<<"alphanumeric ch2"<<endl;
}
else{
    cout<<"not a number ch2"<<endl;
}
if (isalnum(ch3)){
    cout<<"not a number ch3"<<endl;
}
else{
    cout<<"not a number ch3"<<endl;
}

}



// int main(){
//     int sum=0;
//     int n;

//     cin>>n;
//     for(int i=0;i<=n;i++){

//         sum=i+1;
//     }
//    cout<<"sum is : "<<sum;

// }
