#include <iostream>
#include <vector>

using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructor with next pointer
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }

//     // Constructor without next pointer
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// int main() {
//     vector<int> arr = {1, 5, 3, 4};

//     // Creating a single node
//     Node* head = new Node(arr[0]);
//     Node* second=new Node (arr[1]);

//     // Printing node details
//     cout << "Node memory address: " << head << '\n';
//     cout << "Node data: " << head->data << '\n';
//     cout<<"second"<<second<<"\n";
//     cout<<"node data: "<<second->data<<'\n';
// }

   






class Node{

    public:
    int value;
    Node* next;

//constructor
    Node(int value1, Node* next1=nullptr){
        value=value1;
        next=next1;

    }

};

    void printll(Node* head){
        while(head!=nullptr){ 
            cout<<"->"<<head->value;
            head=head->next;
        }

    }



//insertion in a linked list

    // //start
    // Node* instervalue(Node* head, int value){
    //     Node* temp=new Node(value, head);
    //     return temp;
    // }
    // //middel
    // Node* insertmiddal(Node* head,int value){
    //     Node* temp2=new Node(value, head->next);
    //     head->next=temp2;
    //     return head;
    // }

    // //last
    // Node* insertlast(Node* tail, int value){
    //     Node* temp1=new Node(value);
    //     tail->next=temp1;
    //     return temp1;
    // }



// lenght of the linked

    // int Lenght(Node* head){
    //     int cnt=0;
    //     Node* temp=head;
    //     while(head){
    //         cnt++;
            
    //     }
    //     return cnt;
    // }




//serching an element in a linked list

// int search(Node* head, int value){
//     Node* temp=head;
//     while(temp){
//         if(temp->data==value){
//             return 1;
//         };
//     }
// }


//delete head

// Node* deletehead(Node* head){
//     if(head==nullptr) return head;
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;


// }

//delete tail

// Node* deletetail(Node* head){
//     if(head==nullptr || head->next==nullptr) return nullptr;
//         Node* temp=head;
//         while(head->next->next !=nullptr){
//             temp=temp->next;
//         }
//         delete temp->next;
//         temp->next=nullptr;
//         return head;

// }

Node* removek(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* thirds=new Node(3);
    Node* tail=new Node(4);

    head->next=second;
    second->next=thirds;
    thirds->next=tail;

    // head=instervalue(head,0);
    // second=insertmiddal(head,21);

    // tail=insertlast(tail, 5);
    // cout<<Lenght(head);

    // cout<<search(head, 2);
    head=removek(head,2);
    printll(head);



}

