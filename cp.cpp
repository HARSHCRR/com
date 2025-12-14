#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data1, Node*next1){
        data=data1;
        next= next1;

    }

};

int main() {
    vector<int> ar={5,7,3,4,53};
    Node*y= new Node(ar[1],nullptr);
    cout<<y->data<<endl;
    return 0;
}