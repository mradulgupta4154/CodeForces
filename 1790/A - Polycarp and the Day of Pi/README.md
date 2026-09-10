<h2><a href="https://codeforces.com/contest/1790/problem/A" target="_blank" rel="noopener noreferrer">1790A — Polycarp and the Day of Pi</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1790A](https://codeforces.com/contest/1790/problem/A) |

## Topics
`implementation` `math` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Polycarp and the Day of Pi</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>On March 14, the day of the number $$$\pi$$$ is celebrated all over the world. This is a very important mathematical constant equal to the ratio of the circumference of a circle to its diameter.</p><p>Polycarp was told at school that the number $$$\pi$$$ is irrational, therefore it has an infinite number of digits in decimal notation. He wanted to prepare for the Day of the number $$$\pi$$$ by memorizing this number as accurately as possible.</p><p>Polycarp wrote out all the digits that he managed to remember. For example, if Polycarp remembered $$$\pi$$$ as $$$3.1415$$$, he wrote out <span class="tex-font-style-tt">31415</span>.</p><p>Polycarp was in a hurry and could have made a mistake, so you decided to check how many first digits of the number $$$\pi$$$ Polycarp actually remembers correctly.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input data contains the single integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases in the test. </p><p>Each test case is described by a single string of digits $$$n$$$, which was written out by Polycarp.</p><p>The string $$$n$$$ contains up to $$$30$$$ digits.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$t$$$ integers, each of which is the answer to the corresponding test case, that is how many first digits of the number $$$\pi$$$ Polycarp remembers correctly.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008620445982579358" id="id007038069096634173" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008620445982579358"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">9</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">000</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4141592653</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">141592653589793238462643383279</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">31420</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">31415</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">314159265358</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">27182</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">314159265358979323846264338327</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006294633067524398" id="id009035289294463007" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006294633067524398">0
1
0
0
3
5
12
0
30
</pre></div></div></div>