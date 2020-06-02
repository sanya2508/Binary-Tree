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

## <a href=""> Height Balanced Tree </a>
  *The difference in the height of left and right sub-trees should be less than or equal to 1 at every node of the tree.*
  
  
  
<hr/>
