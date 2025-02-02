#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* input_tree()
{
    int val;cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        Node*prant=q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node*mylift,*myright;
        if(l==-1) mylift=NULL;
        else mylift=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        prant->left=mylift;
        prant->right=myright;

        if(prant->left)
        q.push(prant->left);
        if(prant->right)
        q.push(prant->right);
    }
    return root;

}

void level_order(Node*root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*node=q.front();
        q.pop();

        cout<<node->val<<" ";
        
        if(node->left)
        q.push(node->left);

        if(node->right)
        q.push(node->right);
    }
}
void insert(Node*&root,int val)
{
    if(root==NULL)
    {
    root=new Node(val);
    return;

    }

    if(val<root->val)
    {
        if(root->left==NULL)
        root->left=new Node(val);
        else
        insert(root->left,val);

    }
    else{
        if(root->right==NULL)
        root->right=new Node(val);
        else
        insert(root->right,val);
    }
}

int main()
{
    Node*root=input_tree();
    int val;cin>>val;
    insert(root,val);
    level_order(root);
    
    return 0;
}