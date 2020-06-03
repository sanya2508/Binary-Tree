#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=right=NULL;
    
    }
};
int integer(string s){
    int sum=0;
    for(int i=0;s[i];i++){
        sum=sum*10+s[i]-'0';
    }
    return sum;
}
node* BuildBst(node* &h){
    string s;
    cin>>s;
    if(s=="false")
    return NULL;
    if(s=="true")
    return BuildBst(h);
    node* n=new node(integer(s));
    n->left=BuildBst(n->left);
    n->right=BuildBst(n->right);
    h=n;
    return n;
}
void printpreorder(node* h){
    if(!h)
    return;
    cout<<h->data<<" ";
    printpreorder(h->left);
    printpreorder(h->right);
    
}
bool ispresent(node* h,int a){
    if(!h)
    return false;
    if(h->data==a)
    return true;
    return ispresent(h->left,a)||ispresent(h->right,a);
}
node* lca(node* h,int a,int b){
    if(!h)
    return NULL;
    if(ispresent(h->right,a)&&ispresent(h->right,b)){
        return lca(h->right,a,b);
    }
    if(ispresent(h->left,a)&&ispresent(h->left,b)){
        return lca(h->left,a,b);
    }
    return h;
}
int main() {
    node* h=NULL;
    h=BuildBst(h);
    
    int a,b;
    cin>>a>>b;node *ans=lca(h,a,b);
    if(ans)
    cout<<ans->data<<endl;
    
	return 0;
}
