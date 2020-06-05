# Heaps

Heap is a complete binary tree-based data structure in which all nodes in the tree are in the specific order. 

Heaps are used when the highest or lowest order/priority element needs to be removed. They allow quick access to this item in O(1) time. One use of a heap is to implement a priority queue.

Binary heaps are usually implemented using arrays or vectors, which save overhead cost of storing pointers to child nodes.

<hr/>

## Possible implementation of Priority Queue

* Unsorted Array
    * Insertion: O(1)
    * Deletion: O(n)
    * Get: O(n)

* Sorted Array
    * Insertion: O(n)
    * Deletion: O(n)
    * Get: O(n) or O(1)

* Unsorted List
    * Insertion: O(1)
    * Deletion: O(n)
    * Get: O(n)

* Sorted List
    * Insertion: O(n)
    * Deletion: O(n)
    * Get: O(n) or O(1)

* BST
    * Insertion: O(height)
    * Deletion: O(height)
    * Get: O(height)

* Binary Heap 
    * Insertion: O(logn)
    * Deletion: O(logn)
    * Get: O(1)

<hr/>

## Binary Heaps
 * Complete Binary Tree.
 * Priority of child is less than that of parent.
 
<hr/>

## Why complete Binary Tree?
 * If generic tree: Height will be greater than logn.
 * If perfect binary tree: We can't ensure that at every level the number of elements will be maintained as a power of 2.
 * If full tree: Height will be greater than logn.
 * If ternary tree or sosmething else: In these kind of situation number of comparisons will increase because number of children will increase.
 
 `Complete Binary Tree`: Every level except the last one is full and the last level is filled up from left to right.

<hr/>
 
## Types of Heaps:
 * Max-Heap: The value of each node is less than or equal to the value of the parent. The greatest value is at the root. The same property must be true for all subtrees.
 * Min-Heap: The value of each node is greater than or equal to the value of its parent. The smallest value is at the root. The same property must be true for all subtrees.

<hr/>
 
## How to represent Heaps?

* Representation from 0th index: 
  * If parent node is present at ith index:
    * Left child: 2i + 1
    * Right child: 2i + 2
    
  * If child node is present at jth index:
    * Parent: floor value of ((j-1)/2)

* Representation from 1 based indexing: 
  * If parent node is present at ith index:
    * Left child: 2i
    * Right child: 2i + 1
    
  * If child node is present at jth index:
    * Parent: floor value of (j/2)

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/insertionInHeaps.cpp"> Insertion in Heap</a>

* Upheapify (percolate up): At any point, if the corresponding priority of the child is greater than that of parent, then we are going to swap the parent and child till the point the child or the new element goes at such a point that the priority of this child is going to be lower than that of it's parent.
* Insertion: Add the element at the last of the heap and apply upheapify.
* Time complexity of insertion of one element: O(logn) in worst case.
