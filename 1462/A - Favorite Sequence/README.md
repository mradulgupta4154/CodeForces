<h2><a href="https://codeforces.com/contest/1462/problem/A" target="_blank" rel="noopener noreferrer">1462A — Favorite Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1462A](https://codeforces.com/contest/1462/problem/A) |

## Topics
`implementation` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Favorite Sequence</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Polycarp has a favorite sequence $$$a[1 \dots n]$$$ consisting of $$$n$$$ integers. He wrote it out on the whiteboard as follows:</p><ul> <li> he wrote the number $$$a_1$$$ to the left side (at the beginning of the whiteboard); </li><li> he wrote the number $$$a_2$$$ to the right side (at the end of the whiteboard); </li><li> then as far to the left as possible (but to the right from $$$a_1$$$), he wrote the number $$$a_3$$$; </li><li> then as far to the right as possible (but to the left from $$$a_2$$$), he wrote the number $$$a_4$$$; </li><li> Polycarp continued to act as well, until he wrote out the entire sequence on the whiteboard. </li></ul><center> <img class="tex-graphics" src="https://espresso.codeforces.com/09d364313ed093967e3ce6d2ebeda9cf8aa87d19.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">The beginning of the result looks like this (of course, if $$$n \ge 4$$$).</span> </center><p>For example, if $$$n=7$$$ and $$$a=[3, 1, 4, 1, 5, 9, 2]$$$, then Polycarp will write a sequence on the whiteboard $$$[3, 4, 5, 2, 9, 1, 1]$$$.</p><p>You saw the sequence written on the whiteboard and now you want to restore Polycarp's favorite sequence.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single positive integer $$$t$$$ ($$$1 \le t \le 300$$$) — the number of test cases in the test. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 300$$$) — the length of the sequence written on the whiteboard.</p><p>The next line contains $$$n$$$ integers $$$b_1, b_2,\ldots, b_n$$$ ($$$1 \le b_i \le 10^9$$$) — the sequence written on the whiteboard.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$t$$$ answers to the test cases. Each answer — is a sequence $$$a$$$ that Polycarp wrote out on the whiteboard.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009391370406391152" id="id006566852536434931" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009391370406391152">6
7
3 4 5 2 9 1 1
4
9 2 7 1
11
8 4 3 1 2 7 8 7 9 4 2
1
42
2
11 7
8
1 1 1 1 1 1 1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0022538148712907868" id="id008965967033617321" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0022538148712907868">3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the sequence $$$a$$$ matches the sequence from the statement. The whiteboard states after each step look like this:</p><p>$$$[3] \Rightarrow [3, 1] \Rightarrow [3, 4, 1] \Rightarrow [3, 4, 1, 1] \Rightarrow [3, 4, 5, 1, 1] \Rightarrow [3, 4, 5, 9, 1, 1] \Rightarrow [3, 4, 5, 2, 9, 1, 1]$$$.</p></div>