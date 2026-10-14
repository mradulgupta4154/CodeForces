<h2><a href="https://codeforces.com/contest/1303/problem/A" target="_blank" rel="noopener noreferrer">1303A — Erasing Zeroes</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1303A](https://codeforces.com/contest/1303/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Erasing Zeroes</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a string $$$s$$$. Each character is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p><p>You want all <span class="tex-font-style-tt">1</span>'s in the string to form a contiguous subsegment. For example, if the string is <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, <span class="tex-font-style-tt">00111</span> or <span class="tex-font-style-tt">01111100</span>, then all <span class="tex-font-style-tt">1</span>'s form a contiguous subsegment, and if the string is <span class="tex-font-style-tt">0101</span>, <span class="tex-font-style-tt">100001</span> or <span class="tex-font-style-tt">11111111111101</span>, then this condition is not met.</p><p>You may erase some (possibly none) <span class="tex-font-style-tt">0</span>'s from the string. What is the minimum number of <span class="tex-font-style-tt">0</span>'s that you have to erase?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>Then $$$t$$$ lines follow, each representing a test case. Each line contains one string $$$s$$$ ($$$1 \le |s| \le 100$$$); each character of $$$s$$$ is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print $$$t$$$ integers, where the $$$i$$$-th integer is the answer to the $$$i$$$-th testcase (the minimum number of <span class="tex-font-style-tt">0</span>'s that you have to erase from $$$s$$$).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006126751935486909" id="id0027292131722048496" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006126751935486909">3
010011
0
1111000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006918346618421809" id="id003009285223434296" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006918346618421809">2
0
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case you have to delete the third and forth symbols from string <span class="tex-font-style-tt">010011</span> (it turns into <span class="tex-font-style-tt">0111</span>).</p></div>