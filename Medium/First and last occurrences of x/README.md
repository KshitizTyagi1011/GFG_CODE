<h2><a href="https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=1&difficulty[]=-1&difficulty[]=0&difficulty[]=1&category[]=Binary%20Search&sortBy=submissions">First and last occurrences of x</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array <strong>arr</strong> containing <strong>n</strong> elements with possibly duplicate&nbsp; is to find indexes of first&nbsp;</span><span style="font-size: 18px;">elements, the task</span><span style="font-size: 18px;">and last occurrences of an element </span><strong style="font-size: 18px;">x</strong><span style="font-size: 18px;"> in the given array.</span></p>
<p><strong style="font-size: 18px;">Note:</strong><span style="font-size: 18px;">&nbsp;If the number&nbsp;</span><strong style="font-size: 18px;">x</strong><span style="font-size: 18px;">&nbsp;is not found in the array then return both the indices as -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
<strong>Output:</strong>  <br>2 5
<strong>Explanation</strong>: <br>First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
<strong>Output:</strong>  <br>6 6<br><strong>Explanation:</strong> <br>First and last occurrence of 7 is at index 6.<br>
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>find</strong>() that takes <strong>array arr, integer n and integer x</strong> as parameters and returns the required answer.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(logN)<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>7</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;