<h2><a href="https://codeforces.com/contest/1296/problem/A" target="_blank" rel="noopener noreferrer">1296A — Array with Odd Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1296A](https://codeforces.com/contest/1296/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Array with Odd Sum</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers.</p><p>In one move, you can choose two indices $$$1 \le i, j \le n$$$ such that $$$i \ne j$$$ and set $$$a_i := a_j$$$. You can perform such moves any number of times (possibly, zero). You can choose different indices in different operations. The operation := is the operation of assignment (i.e. you choose $$$i$$$ and $$$j$$$ and replace $$$a_i$$$ with $$$a_j$$$).</p><p>Your task is to say if it is possible to obtain an array with an odd (not divisible by $$$2$$$) sum of elements.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2000$$$) — the number of test cases.</p><p>The next $$$2t$$$ lines describe test cases. The first line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 2000$$$) — the number of elements in $$$a$$$. The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 2000$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2000$$$ ($$$\sum n \le 2000$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer on it — "<span class="tex-font-style-tt">YES</span>" (without quotes) if it is possible to obtain the array with an odd sum of elements, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006150674897208009" id="id0038850669629396783" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006150674897208009">5
2
2 3
4
2 2 8 8
3
3 3 3
4
5 5 5 5
4
1 1 1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007044716603162158" id="id00446861912019893" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007044716603162158">YES
NO
YES
NO
NO
</pre></div></div></div>