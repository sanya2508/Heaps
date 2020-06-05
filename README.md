# Heaps

Heap is a complete binary tree-based data structure in which all nodes in the tree are in the specific order. 

There are 2 types of heap, typically:
* Max-Heap: The value of each node is less than or equal to the value of the parent. The greatest value is at the root. The same property must be true for all subtrees.
* Min-Heap: The value of each node is greater than or equal to the value of its parent. The smallest value is at the root. The same property must be true for all subtrees.

Heaps are used when the highest or lowest order/priority element needs to be removed. They allow quick access to this item in O(1) time. One use of a heap is to implement a priority queue.

Binary heaps are usually implemented using arrays, which save overhead cost of storing pointers to child nodes.

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

* 

