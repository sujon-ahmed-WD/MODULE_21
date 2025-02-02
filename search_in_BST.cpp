#include<bits/stdc++.h>
using namespace std;
class Node{
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


bool search(Node*root,int val)
{
    if(root==NULL)
    return false;

    if(root->val==val)
    return true;

    if(root->val>val)
    return search(root->left,val);
    else if(root->val<val)
    return search(root->right,val);
}

int main()
{
    Node* root=input_tree();
    int val;cin>>val;
    if (search(root,val))
    {
        cout<<"Invalid";
    }
    else
    cout<<"NO";
    
    return 0;
}