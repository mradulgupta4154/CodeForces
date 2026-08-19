<h2><a href="https://codeforces.com/contest/1327/problem/A" target="_blank" rel="noopener noreferrer">1327A — Sum of Odd Integers</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1327A](https://codeforces.com/contest/1327/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Sum of Odd Integers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$n$$$ and $$$k$$$. Your task is to find if $$$n$$$ can be represented as a sum of $$$k$$$ <span class="tex-font-style-bf">distinct positive odd</span> (not divisible by $$$2$$$) integers or not.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases.</p><p>The next $$$t$$$ lines describe test cases. The only line of the test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 10^7$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer — "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$n$$$ can be represented as a sum of $$$k$$$ <span class="tex-font-style-bf">distinct positive odd</span> (not divisible by $$$2$$$) integers and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006069502516877182" id="id00817159302122658" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006069502516877182">6
3 1
4 2
10 3
10 2
16 4
16 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009811732850138549" id="id0022207877196252068" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009811732850138549">YES
YES
NO
YES
YES
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, you can represent $$$3$$$ as $$$3$$$.</p><p>In the second test case, the only way to represent $$$4$$$ is $$$1+3$$$.</p><p>In the third test case, you cannot represent $$$10$$$ as the sum of three distinct positive odd integers.</p><p>In the fourth test case, you can represent $$$10$$$ as $$$3+7$$$, for example.</p><p>In the fifth test case, you can represent $$$16$$$ as $$$1+3+5+7$$$.</p><p>In the sixth test case, you cannot represent $$$16$$$ as the sum of five distinct positive odd integers.</p></div>