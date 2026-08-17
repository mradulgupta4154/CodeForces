<h2><a href="https://codeforces.com/contest/1342/problem/A" target="_blank" rel="noopener noreferrer">1342A — Road To Zero</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1342A](https://codeforces.com/contest/1342/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Road To Zero</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$x$$$ and $$$y$$$. You can perform two types of operations: </p><ol> <li> Pay $$$a$$$ dollars and increase or decrease any of these integers by $$$1$$$. For example, if $$$x = 0$$$ and $$$y = 7$$$ there are four possible outcomes after this operation: <ul> <li> $$$x = 0$$$, $$$y = 6$$$; </li><li> $$$x = 0$$$, $$$y = 8$$$; </li><li> $$$x = -1$$$, $$$y = 7$$$; </li><li> $$$x = 1$$$, $$$y = 7$$$. </li></ul><p> </p></li><li> Pay $$$b$$$ dollars and increase or decrease both integers by $$$1$$$. For example, if $$$x = 0$$$ and $$$y = 7$$$ there are two possible outcomes after this operation: <ul> <li> $$$x = -1$$$, $$$y = 6$$$; </li><li> $$$x = 1$$$, $$$y = 8$$$. </li></ul> </li></ol><p>Your goal is to make both given integers equal zero simultaneously, i.e. $$$x = y = 0$$$. There are no other requirements. In particular, it is possible to move from $$$x=1$$$, $$$y=0$$$ to $$$x=y=0$$$.</p><p>Calculate the minimum amount of dollars you have to spend on it.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of testcases.</p><p>The first line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$0 \le x, y \le 10^9$$$).</p><p>The second line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print one integer — the minimum amount of dollars you have to spend.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00650800626204794" id="id009659665896460419" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00650800626204794">2
1 3
391 555
0 0
9 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0010865463113696205" id="id0011862348012513979" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0010865463113696205">1337
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case you can perform the following sequence of operations: first, second, first. This way you spend $$$391 + 555 + 391 = 1337$$$ dollars.</p><p>In the second test case both integers are equal to zero initially, so you dont' have to spend money.</p></div>