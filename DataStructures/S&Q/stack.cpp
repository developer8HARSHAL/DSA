#include <cstdlib>
#include <iostream>

using namespace std;

// class Stack{
//     int size;
//     int *arr;
//     int top;
// public:
//     Stack(){
//         size=1000;
//         arr=new int [size];
//         top=-1;

//     }
//     void push(int x){
//         top++;
//         arr[top]=x;

//     }
//     int pop(){
//         int x=arr[top];
//         top--;
//         return x;
//     }

//     int Top(){
//         return arr[top];
//     }
//     int Size(){
//         return top+1;
//     }

// };
// int main(){
//     Stack s;
//     s.push(3);
//     s.push(2);
//     s.push(4);
//     s.push(5);
//     cout<<"top value: "<<s.Top()<<endl;
//     cout<<"pop value: "<<s.pop()<<endl;
//     cout<<"size: "<<s.Size()<<endl;
// }

class Queue
{
    int *arr;
    int start, end, curr, max;

public:
    Queue()
    {
        arr = new int[16];
        start = -1;
        end = -1;
        curr = 0;
        max=16;
    }

    void push(int newelement)
    {
        if (curr == max)
            cout << "can no insert"<<endl;
        if (curr == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % max;
            
        }
        arr[end] = newelement;
            curr++;
    }
    
    int top()
    {
        if (start == -1)
            cout << "no element"<<endl;
        else
        {
            return arr[start];
        }
    }
    int size()
    {
        cout << curr << endl;
    }

};

int main()
{
    Queue q;
    q.push(4);
    q.push(5);

    cout<<"size: "<<q.size()<<endl;
    cout<<"top: "<<q.top();
    return 0;
}