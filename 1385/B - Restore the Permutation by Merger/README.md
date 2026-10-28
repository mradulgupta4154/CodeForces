<h2><a href="https://codeforces.com/contest/1385/problem/B" target="_blank" rel="noopener noreferrer">1385B — Restore the Permutation by Merger</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1385B](https://codeforces.com/contest/1385/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Restore the Permutation by Merger</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A permutation of length $$$n$$$ is a sequence of integers from $$$1$$$ to $$$n$$$ of length $$$n$$$ containing each number exactly once. For example, $$$[1]$$$, $$$[4, 3, 5, 1, 2]$$$, $$$[3, 2, 1]$$$ are permutations, and $$$[1, 1]$$$, $$$[0, 1]$$$, $$$[2, 2, 1, 4]$$$ are not.</p><p>There was a permutation $$$p[1 \dots n]$$$. It was merged with itself. In other words, let's take two instances of $$$p$$$ and insert elements of the second $$$p$$$ into the first maintaining relative order of elements. The result is a sequence of the length $$$2n$$$.</p><p>For example, if $$$p=[3, 1, 2]$$$ some possible results are: $$$[3, 1, 2, 3, 1, 2]$$$, $$$[3, 3, 1, 1, 2, 2]$$$, $$$[3, 1, 3, 1, 2, 2]$$$. The following sequences are not possible results of a merging: $$$[1, 3, 2, 1, 2, 3$$$], [$$$3, 1, 2, 3, 2, 1]$$$, $$$[3, 3, 1, 2, 2, 1]$$$.</p><p>For example, if $$$p=[2, 1]$$$ the possible results are: $$$[2, 2, 1, 1]$$$, $$$[2, 1, 2, 1]$$$. The following sequences are not possible results of a merging: $$$[1, 1, 2, 2$$$], [$$$2, 1, 1, 2]$$$, $$$[1, 2, 2, 1]$$$.</p><p>Your task is to restore the permutation $$$p$$$ by the given resulting sequence $$$a$$$. It is guaranteed that the answer <span class="tex-font-style-bf">exists and is unique</span>.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 400$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 50$$$) — the length of permutation. The second line of the test case contains $$$2n$$$ integers $$$a_1, a_2, \dots, a_{2n}$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$. It is guaranteed that the array $$$a$$$ represents the result of merging of some permutation $$$p$$$ with the same permutation $$$p$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer: $$$n$$$ integers $$$p_1, p_2, \dots, p_n$$$ ($$$1 \le p_i \le n$$$), representing the initial permutation. It is guaranteed that the answer <span class="tex-font-style-bf">exists and is unique</span>.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0006870649333966339" id="id009750498638196144" class="input-output-copier">Copy</div></div><pre id="id0006870649333966339">5
2
1 1 2 2
4
1 3 1 4 3 4 2 2
5
1 2 1 2 3 4 3 5 4 5
3
1 2 3 1 2 3
4
2 3 2 4 1 3 4 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id001368834508234903" id="id0006635393328347527" class="input-output-copier">Copy</div></div><pre id="id001368834508234903">1 2 
1 3 4 2 
1 2 3 4 5 
1 2 3 
2 3 4 1 
</pre></div></div></div>