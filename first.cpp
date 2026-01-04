// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the n: ";
//     cin>>n;
//     cout<<"no entered is: "<<n<<endl;
//     int a[n]={1,2,3,4,5};

//     return 0;

// }



#include <iostream>
#include <vector>
using namespace std;

// int main(){

//     string a= "HELLO";
//     int right=a.size()-1;
//     int left=0;
//     bool pallindrome=false;


//     while(left<right){
//     int i=0;

//         if(a[left]!=a[right]){
//             break;
//             pallindrome=true;
//         }
//         left++;
//         right--;
//         if(pallindrome){
//             cout<<"pallindrome";
//         }
//         else{
//             cout<<"not a pallindrome";
//         }
//     }


// }


// int main(){
//     vector<int>a={1,2,3,4};
//     int sum=0;
//     // int n=sizeof(a)/sizeof(a[0]);
//     int n=a.size();
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"sum: "<<sum;
//     return sum;
// }

// int main(){

//     string a= "HELLO";

//     int right=a.size()-1;
//     int left=0;
//     int count=0;

//     while(left<right){
//         if(a[left]!=a[right]){
//             break;
//             cout<<"not a pallindrome"<<endl;
//         }
//         else{
//             left++;
//             right--;
//         }
//         cout<<"pallindrome "<<endl;

//     }

    // for (int i=n;i>=0;i--){
    //     cout<<a[i]<<endl;
    // }

    // for(int i=0;i<=n;i++){
    //     count++;

    // }
    // cout<<"count: "<<count<<endl;

    // for(int i=0;i<=n;i++){
    //     if(a[i]==v[i]){
    //         cout<<"vovels: "<<a[i]<<endl;
    //     }
    //     else{
    //         cout<<"no vovels"<<endl;

    //     }
    // }

// }


int main(){
    int a[]={2,6,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    int max=a[0];
    int min=a[0];

    for(int i=0;i<n;i++){

        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];

    }
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;


}

