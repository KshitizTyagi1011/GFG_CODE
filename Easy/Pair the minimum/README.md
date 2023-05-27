<h2><a href="https://practice.geeksforgeeks.org/problems/pair-the-minimum5535/1">Pair the minimum</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Akshay loves to play with numbers and arrays. He took an array of size " 2n " where n is any positive integer chose by him. He tries to divide the array into n pairs, such that the pair sum minimizes the maximum sum of a pair.<br>
For example, say we have an array with the&nbsp;given numbers <strong>[9, 6, 1,&nbsp;and 5]</strong>. The possible pairs are<br>
( 1, 6 ) , ( 5 , 9 ) or ( 1 , 5 )&nbsp; , ( 6 , 9 ) or&nbsp; ( 1 , 9 ) , ( 5 , 6 ). The pair sums for these partitions are ( 7, 14 ) and ( 6, 15 ) and ( 10, 11 )&nbsp;&nbsp;respectively.&nbsp; The ideal or the selected pairs are (1, 9), (5, 6 )&nbsp; because out of all the three cases or possibilities we only have (1, 9), (5, 6 )&nbsp; where the sum of both pairs is a minimum of all the maximum sum of all three possibilities.&nbsp;</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>â€‹Input :</strong> arr[ ] = {5, 8, 3, 9} and N = 2
<strong>Output :</strong> 13
<strong>Explanation:
</strong>Possible pairs:&nbsp;
(8,9)(3,5)&nbsp;--&gt;Case 1
Sum : (17)(8)&nbsp;--&gt; maximum sum 17
(5,9)(3,8)&nbsp;--&gt;Case 2
Sum : (14)(11)&nbsp;----&gt; maximum sum 14
(3,9)(5,8)&nbsp;--&gt;Case 3
Sum : (12)(13)--&gt; maximum sum 13
In case 3 , the maximum sum is minimum of 
all the other cases. Hence, the answer is 13.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {1, 6, 5, 9} and N = 2<strong>
Output :</strong> 11</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>Pair_minimum()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the minimum of all the maximum sum of all possibilities. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*Log(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px">&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[2*N] ≤ 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;