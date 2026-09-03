<h2><a href="https://codeforces.com/contest/1527/problem/A" target="_blank" rel="noopener noreferrer">1527A — And Then There Were K</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1527A](https://codeforces.com/contest/1527/problem/A) |

## Topics
`bitmasks`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. And Then There Were K</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given an integer $$$n$$$, find the maximum value of integer $$$k$$$ such that the following condition holds: </p><center> $$$n$$$ & ($$$n-1$$$) & ($$$n-2$$$) & ($$$n-3$$$) & ... ($$$k$$$) = $$$0$$$ </center> where & denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation.</a></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 3 \cdot 10^4$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the required integer $$$k$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0048663891263449344" id="id007667971736015687" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0048663891263449344">3
2
5
17
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id003645802521795545" id="id004411116193275827" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003645802521795545">1
3
15
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first testcase, the maximum value for which the continuous & operation gives 0 value, is 1.</p><p>In the second testcase, the maximum value for which the continuous & operation gives 0 value, is 3. No value greater then 3, say for example 4, will give the & sum 0. </p><ul> <li> $$$5 \, \& \, 4 \neq 0$$$, </li><li> $$$5 \, \& \, 4 \, \& \, 3 = 0$$$. </li></ul><p>Hence, 3 is the answer.</p></div>