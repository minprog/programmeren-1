# Exercise: Algorithms

Get more comfortable with sorting algorithms. Each algorithm below intends to sort an array of integers into ascending order. Generally speaking, smaller elements in the array are moved to the "left" and larger elements are moved to the right, until they are in order.

> Note that you should print out this page to do the exercises on paper.

## Swapping

In most of the sorting algorithms below, *swapping* is important. By swapping, we mean exchanging the values at two positions in an array.

## Selection sort

Let's do another sorting alogirthm: selection sort. If you don't remember selection sort, have a look here:

![embed](https://www.youtube.com/embed/NEbb4XqKDNU)

The pseudo code here below describes the selection sort algorithm.

	sort array of length n:
		i : = 0
		while i < n:
			index_smallest := find index of smallest element in array between i and n
			swap values at index_smallest and i
			i := i + 1

Perform the procedure on the array below. Show every swap on an individual line and show which elements you're swapping by underlining them. Also show which part of the array is sorted on every line by drawing a rectangle around the sorted part of the array.  

![](sort.PNG)

What are worst case and best case running time complexities of this procedure?

## Bubble sort

![embed](https://www.youtube.com/embed/LZaU8GHNsQI)

Consider the following pseudo code for bubble sort:

	sort array of lenth n:
		end := n - 1
		while array is not sorted:
			for i from 0 to end:
				if array[i] > array[i+1]:
					swap values at i and i + 1
			end := end - 1 

Perform the procedure on the array below. Show every swap on an individual line and show which elements you're swapping by underlining them. 

![](sort.PNG)

> What are worst case and best case running time complexities of this procedure?



Merge sort:
![embed](https://www.youtube.com/embed/yF3hMKmCk1A)

Insertion sort:
![embed](https://www.youtube.com/embed/ntB1D3Bbz5I)

Always first try to execute a (small) example by hand as you did above, before you implement it. Always try to print intermediary results and compare them to what you wrote down.