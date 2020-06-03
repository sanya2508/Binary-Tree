# Binary-Tree

## Hierarchical data strucutre.

* Applications: Computer directory, Company organisation hierarchy, etc.

* A tree can be a generic tree, but here we are talking about binart tree.

* In binary tree every node will have at most two children.
<hr/>

`Siblings`: Children of same parent.

`Ancestors`: All the parents of given node.

`Leaf node`: Nodes with zero children.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/BTpreorderBuildAndPrint.cpp">Preorder build</a>:

Top down approach.
 * Root
 * Left
 * Right

> Build root, and then recursively build left and right subtree.


<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/BTinorderBuildAndPrint.cpp">Inorder build</a>:

 * Left
 * Root
 * Right

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/BTpostorderBuildandPrint.cpp">Postorder build</a>:

Bottom up approach.
 * Left
 * Right
 * Root

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/BTlevelOrderPrint.cpp">Levelorder build</a>:

First calculate height of the tree.

 * Number of levels= Height of tree.

Make a function to print Kth level.

Call the function for all levels.

>Worst case complexity: O(n^2) in case of skewed trees.

We can improve this complexity to O(n) by BFS (with the help of queue) explained below.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/breadthFirstSearchTraversal1.cpp"> Breadth First Search Traversal(BFS)</a>

Iterative, level orer traversal.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/breadthFirstSearchTraversal2"> BFS Traversal level order print with new line. </a>

<hr/>

Key point: 

* Breadth First Traversal 
  1. Level Order Traversal

* Depth First Traversals
  1. Inorder Traversal (Left-Root-Right)
  2. Preorder Traversal (Root-Left-Right)
  3. Postorder Traversal (Left-Right-Root)

> Depth First Traversals are typically recursive and recursive code requires function call overheads.

>The most important points is, BFS starts visiting nodes from root while DFS starts visiting nodes from leaves. So if the problem is to search something that is more likely to closer to root, we would prefer BFS. And if the target node is close to a leaf, we would prefer DFS.

<hr/>

##  Binary Tree- Count and Sum nodes 

 * <a href="https://github.com/sanya2508/Binary-Tree/blob/master/countNodes.cpp">Count number of nodes.</a>
 * <a href="https://github.com/sanya2508/Binary-Tree/blob/master/sumOfNodes.cpp"> Sum of all nodes.</a>

<hr/>

## Diameter of a tree
 * Diameter of a tree is the longest distance between two nodes.

### Method 1: <a href="https://github.com/sanya2508/Binary-Tree/blob/master/diameterOfTree.cpp"> Calculate diameter (worst case complexity: O(n^2)) </a>
 * Find the height of left and right subtree.
 * Call the diameter function on left and right sub tree recursively.
 * Take the maximum of diameter(left), diameter(right) and (height of left + height of right subtree).

### Method 2: <a href="https://github.com/sanya2508/Binary-Tree/blob/master/diameterOfTreeOptimised.cpp"> Calculate diameter (Optimized solution with complexity: O(n)) </a>

 * Bottom up approach.
 * Return diameter and height simultaneously while traversing from bottom.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/sumReplacementWithSumOfAllChildNodes.cpp"> Binary Tree: Sum Replacement </a>
 
 *Question: Replace each node with sum of it's child nodes.*
 * Update root->data with sum of child nodes, but before updating take a temp variable and store the root->data.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/checkHeightBalancedtree.cpp"> Height Balanced Tree </a>
  *The difference in the height of left and right sub-trees should be less than or equal to 1 at every node of the tree.*
  * Bottom up approach: Every node returning height and a bool value of if the tree is balanced or not.
  * Complexity will be of O(n).
  
<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/buildBalancedTreeFromArray.cpp">Build Balanced Tree from Array</a>
 *Given an array, build a height balanced binary tree from it.*
 * Find mid-point of array, make a root node out if it, call for left sub tree, call for right sub tree.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/buildTreeFromPreorderAndInorder.cpp">Build Tree from Inorder and Preorder Traversal</a>
 * From a preorder and inorder traversal there can only be one unique binary tree.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/Right%20view%20of%20Binary%20tree.cpp">Right view of a Binary Tree</a>
 `Level order approach`: After each level the queue that we use for level order will store all elements of next level from left to right. We will consider the last element for every level.
Space and Time: O(n)

`Depth first approach`: We can traverse the tree by any of depth first order and we can keep a track of the maximum level we have achieved till now. And further we can traverse in a manner that right sub-tree is visited before left sub-tree. Hence any node to the right most will be visited first.

<hr/>

## <a href="https://github.com/sanya2508/Binary-Tree/blob/master/Nodes%20at%20a%20distance%20k.cpp">Nodes at a distance k in a Binary Tree </a>
*Find all the nodes that are at a distance k from a given(target) node.*
* Two possible cases where node might be present:
  1. Sub-tree rooted at the target.
  2. Sub-tree of any ancestor of target.
  
<hr/>

## Lowest common ancestor in Binary Tree
*Given a binary tree with value of two nodes p and q, find the LCA for these two nodes.*
* LCA: Lowest or the nearmost node, which has both p and q as its descendants. Any node can be considered a descendant of itself.
* We can extract a list of ancestors for p and q. From both list we can create a prefix array that will contain the list of common ancestors. Since this list has been created by traversing top to bottom of the tree, the last element in the array will be the result.
 Time complexity: O(n)
 Space complexity: O(n)
 But we are traversing more than once!!
* There can be a optimized solution!
* References: https://leetcode.com/articles/lowest-common-ancestor-of-a-binary-tree/
              https://www.youtube.com/watch?v=6Q7OrMi0Vvc
              https://codeforces.com/blog/entry/43917
