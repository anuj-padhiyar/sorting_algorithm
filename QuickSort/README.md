# Quick Sort<br>
This Algorithm Use Devide And Concure Method For Sorting Array.In Quick Sort, there are two function used named quickSort and partition.quickSort function create virtual partition of one array and it call partition function for that. partition function choose pivot from array and return partition index according to that pivot.After partiton, mergeSort function recursively sort left and right side sub-array.
<hr>

`Input`<br>
First Line Contains total elements N<br>
Second Line Contains space seperated N elements<br>

`Output`<br>
Ouptut Contains One Line With Sorted Array
<hr>


`Time Complexity`<br>
Worst Case => Elements are sorted => O(n^2)<br>
Average Case => O(n log n)<br>
Best Case => the partition algorithm divides the array in two subarrays with equal size => O(n log n)<br><br>

`space complexity` => O(n)
