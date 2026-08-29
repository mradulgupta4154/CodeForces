<h2><a href="https://codeforces.com/contest/1385/problem/A" target="_blank" rel="noopener noreferrer">1385A — Three Pairwise Maximums</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1385A](https://codeforces.com/contest/1385/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Three Pairwise Maximums</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given three positive (i.e. strictly greater than zero) integers $$$x$$$, $$$y$$$ and $$$z$$$.</p><p>Your task is to find positive integers $$$a$$$, $$$b$$$ and $$$c$$$ such that $$$x = \max(a, b)$$$, $$$y = \max(a, c)$$$ and $$$z = \max(b, c)$$$, or determine that it is impossible to find such $$$a$$$, $$$b$$$ and $$$c$$$.</p><p>You have to answer $$$t$$$ independent test cases. Print required $$$a$$$, $$$b$$$ and $$$c$$$ in any (arbitrary) order.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains three integers $$$x$$$, $$$y$$$, and $$$z$$$ ($$$1 \le x, y, z \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer:</p><ul> <li> "<span class="tex-font-style-tt">NO</span>" in the only line of the output if a solution doesn't exist; </li><li> or "<span class="tex-font-style-tt">YES</span>" in the first line and <span class="tex-font-style-bf">any</span> valid triple of positive integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$1 \le a, b, c \le 10^9$$$) in the second line. You can print $$$a$$$, $$$b$$$ and $$$c$$$ <span class="tex-font-style-bf">in any order</span>. </li></ul></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00436052131434962" id="id004377846983773708" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00436052131434962">5
3 2 3
100 100 100
50 49 49
10 30 20
1 1000000000 1000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00603050559028427" id="id007009665109304843" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00603050559028427">YES
3 2 1
YES
100 100 100
NO
NO
YES
1 1 1000000000
</pre></div></div></div>