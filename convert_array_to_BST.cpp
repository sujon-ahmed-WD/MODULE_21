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
Node* Convert(int a[],int n,int l,int r)
{
    if(l>r)
    return NULL;
    int mid=(n+l)/2;
    Node*root=new Node(a[mid]);
    Node*leftroot=Convert(a,n,l,mid-1);
    Node*leftroot=Convert(a,n,mid+1,r);
    return root;


}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
    cin>>a[i];
    Node*root=Convert(a,n,0,n-1);
    level_order(root);

    return 0;
}