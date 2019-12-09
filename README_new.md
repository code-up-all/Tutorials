# Tutorials

new operator is used in C++ to allocate memory on the heap and returns a pointer to the allocated memory
say 
struct TreeNode{
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}       // constructor of structure TreeNode
};

Now to create a tree suppose:-        1
                                    /   \
                                   3     2
                                    \     \
                                     4     7
                                     
We can write 

TreeNode* tree1         =     new    TreeNode(1);
as new returns pointer           not only allocates but also initializes the allocated memory
so TreeNode*

tree1->left = new TreeNode(3);
tree1->right = new TreeNode(2);
tree1->left->right = new TreeNode(4);
tree1->right->right = new TreeNode(7);

