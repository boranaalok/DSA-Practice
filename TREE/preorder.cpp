#include<iostream>
#include <vector>
using namespace std;
class Node{
    public: 
     int data ;
     Node* left;
     Node* right;
    
     Node(int val){
        data = val;
        left=right=NULL;
     }
};
static int index =-1;
Node* preorder(vector<int>list){
    index++;
    if(list[index] == -1){
        return NULL;
    }

    Node* root = new Node(list[index]);

    root -> left = preorder(list);
    root -> right = preorder(list);

    return root;
}

void Preorder(Node* root){
    if(root== NULL){
        return ;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);

}

int main(){
    vector<int>list={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = preorder(list);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    cout<<"Preorder list : ";
    Preorder(root);
    cout<<endl;
    return 0;

    return 0;
}