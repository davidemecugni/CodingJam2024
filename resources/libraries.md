**deque** :  Dequeue supports insertions and deletions at both ends in O(1) time.  
Since it is implemented using array, it allows random access also. 
We can use dequeue to implement Queue and Stack both.  
Example problems on Deque are, visit all petrol pumps  and maximums of all subarrays of size k.

Please note that there are no modules for **Queue** and **Stack** in Python.  
We can implement these using list or deque. 
A deque implementation is preferred, particularly for queue,  because insertion/deletion at front of list is slow.

A **Queue** is useful in situations where we wish to have FIFO order of items. 
Example problems are, generate numbers with given digit, first non-repeating character in a stream,  
level order traversal of a tree and its variations, BFS of a graph and its variations.  
Please refer Queue practice problems for more practice.

A **Stack** is used in situations where we wish to have LIFO order. 
Example problems are balanced parenthesis, stock span problem, next greater element and 
largest area in a histogram.  Please refer Stack practice problems for more practice.

**set** and **dict** : Both of these implement hashing. We use set when we have collection of keys. 
And we use dictionary when we have key value pairs. Useful when we wish to have fast search, insert and delete (all three operations are O(1)).  
This is one of the most used data structures in the industry and most underrated in academics. 
There are many popular problems, count distinct elements, frequencies of array items,  
subarray with 0 sum and  union and intersection of two unsorted arrays.  Please refer Hashing Practice Problems for more practice.

**heapq** : Implement Min Heap by default. We can create a Min Heap also.  
It is used whenever we wish to efficiently find minimum or maximum element.  
It is used to implement popular algorithms like Prim’s Algorithm, Dijkstra’s shortest Path, Huffman Coding, 
K Largest Elements, Maximum Toys to Purchase and Merge K Sorted Arrays,  Median of a Stream.  
Please refer Heap Practice Problems for more practice.

**sorted** : Does sorting of a sequence like list. Example problems based on sorting are,  
Merge Overlapping Intervals, Minimum Platforms Required.  K-th Smallest Element, find triplet with given sum. 
Please refer Sorting Practice Problems for more.

**bisect** :  Used for binary search. Example problems based on Binary Search are,  
find index of first occurrence, count occurrences, peak element, Median of twos sorted arrays.   
Please refer Binary Search Practice Problems for more.

**sympy** Useful stuff: https://docs.sympy.org/latest/tutorials/intro-tutorial/index.html

More: https://www.geeksforgeeks.org/which-python-modules-are-useful-for-competitive-programming/