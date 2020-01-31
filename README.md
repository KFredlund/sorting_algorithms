# Overview #
The program codes contained in this repository is to help with learning and understanding sorting algorithms and Big-O in C programming.  

# General #
0. What are four different sorting algorithms?  
a. Bubble sort also known as sinking sort iterates through an array or linked list to compare two elements at a time and swaps them if the proceeding element is greater than the next.  

b. Insertion sort assumes an array or linked list is in order, therefore, when it iterates and finds an element unordered, it swaps the greater element forward until it is in the correct order.  

c. Selection sort compares and swap each element one at a time where an element would be compared to all the elements in an array or linked list.  When it finds an element smaller than itself, the smaller element would proceed with the comparsing and swapping.  

d. Quick sort also known as partition-exchange sort implements a "divide-and-conquer" approach.  It takes an element, usually the last element and marks it as a "pivot" for partitioning the array or linked list.  The elements before the pivot should be smaller and the ones after it should be greater.  Then, it would recursively partition the array or linked list until it is in the correct order.  

1. What is the Big O notation, and how to evaluate the time complexity of an algorithm?  
The Big O notation represents the time complexity of an algorithm while dismissing all constants.  When determining the time complexity of an algorithm, the two main factors to consider are the size of the input data and the number of operations needed to efficiently organize it.  The chart below shows the time complexity of the most frequently used sorting algorithms.  

![BigO](https://i.imgur.com/9tql5Cs.png)  

2. How to select the best sorting algorithm for a given input?  
The top three criteria in selecting a sorting algorithm are runtime, memory requirements and stability.  

3. What is a stable sorting algorithm?  
A sorting algorithm is considered stable if two elements are in the same order after being sorted.  By nature, insertion sort, merge sort and bubble sort are stable.  

# Resources #
0. Sorting algorithm  
https://en.wikipedia.org/wiki/Sorting\_algorithm  

1. What is a plain English explanation of “Big O” notation?  
https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation  

2. Random Integer Set Generator  
https://www.random.org/integer-sets/  

3. Bubble sort  
https://en.wikipedia.org/wiki/Bubble\_sort  
https://www.youtube.com/watch?v=lyZQPjUT5B4&feature=emb\_title  

4. Insertion sort  
https://en.wikipedia.org/wiki/Insertion\_sort  
https://www.youtube.com/watch?v=ROalU379l3U&feature=emb\_title  

5. Selection sort  
https://en.wikipedia.org/wiki/Selection\_sort  
https://www.youtube.com/watch?v=Ns4TPTC8whw&feature=emb\_title  

6. Quick sort  
https://en.wikipedia.org/wiki/Quicksort  

7. Know Thy Complexities!  
https://www.bigocheatsheet.com  

8. Sorting  
http://web.mit.edu/1.124/LectureNotes/sorting.html  

# Contributors #
Kathleen Fredlund  
Jennifer Tang  
