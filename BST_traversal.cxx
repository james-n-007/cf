#include <bits/stdc++.h>
using namespace std ;
class BST{
       int data ;
       BST *left ,*right ;
       public :
       BST() ;
       BST(int);
       BST *Insert(BST * , int) ;
       void inorder(BST *) ;

};
BST :: BST() : data(0),left(NULL),right(NULL){}

BST :: BST(int value){
       data = value ;
       left = right = NULL ;
}
BST* BST ::Insert(BST *root , int value){
       if (!root)
       {
              return new BST(value) ;
              /* code */
       }
       if (value > root->data)
       {
              root->right = Insert(root->right , value) ;
              /* code */
       }
       if (value < root->data)
       {
              root->left = Insert(root->left ,value) ;
              /* code */
       }
       return root ;
}
void BST :: inorder(BST *root){
       if(!root){
              return ;
       }
       inorder(root->left) ;
       cout << root->data<<endl ;
       inorder(root->right) ;

}
int main()
{
       BST b ,*root = NULL ;
       root = b.Insert(root , 50) ;
       // b.insert(root,40);
       // b.insert(root,30);
       // b.insert(root,10) ;
       // b.insert(root,20) ;
       // b.insert(root,4) ;
       // b.inorder(root) ;
       b.Insert(root, 30); 
    b.Insert(root, 20); 
    b.Insert(root, 40); 
    b.Insert(root, 70); 
    b.Insert(root, 60); 
    b.Insert(root, 80); 
    b.inorder(root) ;

              /* code */
       return 0;
}
