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

* `Upheapify (percolate up)`: At any point, if the corresponding priority of the child is greater than that of parent, then we are going to swap the parent and child till the point the child or the new element goes at such a point that the priority of this child is going to be lower than that of it's parent.
* Insertion: Add the element at the last of the heap and apply upheapify.
* Time complexity of insertion of one element: O(logn) in worst case.

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/deletionOfPeakElementsInHeap.cpp">Delete peak(root) element from heap</a>
 * Swap the element present at zero index with the element present at arr.size()-1 (right most element of last level).
 * Remove the last element.
 * Apply downheapify (percolate down).
 * `Downheapify`: If any parent is having a priority lesser than it's child, it will have a fight between parent, first children and second children. And among these three whosoever is having highest priority becomes the new parent and rest of them will become the child. 
 * Time complexity: O(logn)
 
<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/buildHeapUnoptimizedFromArray.cpp">Build heaps from given array (Unoptimised)</a>
 * Time complexity: O(nlogn)
 * Upheapify used.
 * Most of the elements are present at the last level, and we are doing a lot of work for the elements present at the lower levels (for last level we are moving up with h iterations, for second last level (h-2). . . whereas for the nodes present at the very root or first level, we are doing very less amount of work.
 
 
## <a href="https://github.com/sanya2508/Heaps/blob/master/buildHeapOptimizedFromArray.cpp">Build heaps fromm given array (Optimized)</a>

 * Elements present at last level = (n+1)/2
 * We can optimize for the last level, second last level. . .
 * We can do some expensive operations for root nodes or nodes at first level, second level. . .
 * Downheapify used.
 * Time complexity: O(n)
 
<hr/>

## Delete any rode apart from root
 * Time complexity O(logn)
 * Update the value of node to be deleted with the max possible priority value (INT_MAX in case of max heap) and with min possible priority value (INT_MIN in case of min heap).
 * Perculate it up in order until it becmoes the root node.
 * Swap root with the last node.
 * Pop out the last node.
 * Apply downheapify to make the heap.
 * Update the array.

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/heapSort.cpp">Heapsort</a>
 * Optimized as compared to selection sort.
 * Time complexity O(nlogn).
 * Inplace sorting, but not stable sorting.
 * Space complexity O(logn).
 
<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/priority%20queue%20STL.cpp">Priority queue STL</a>


## <a href="https://github.com/sanya2508/Heaps/blob/master/Functor.cpp"> Functional Object or Functor</a>


## <a href="https://github.com/sanya2508/Heaps/blob/master/priority%20queue%20comparator%20class.cpp"> Priority queue STL comparator class </a>

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/joinTheRopes.cpp">Join the ropes </a>

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/mergeKSorted%20Challenge.cpp"> Merge K sorted Array using Heaps </a>

<hr/>

## Running median of a stream of integers
*Given an integer stream, find the median of all the elements as soon as we get a new integer.*
 * Use a max heap and a min heap.

<hr/>

## <a href="https://github.com/sanya2508/Heaps/blob/master/Finding%20k%20largest%20elements%20in%20a%20running%20stream.cpp"> Finding K largest elements in a running stream </a>
 * Make a min heap of size k.
 * Compare the next coming element with the smallest element in heap.
 * If it's greater, replace that element.
 * Worst case complexity: O(nlogk)

<hr/>

## Kth smallest element in a row and column wise sorted array

<hr/>
