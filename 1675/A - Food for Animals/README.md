<h2><a href="https://codeforces.com/contest/1675/problem/A" target="_blank" rel="noopener noreferrer">1675A — Food for Animals</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1675A](https://codeforces.com/contest/1675/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Food for Animals</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>In the pet store on sale there are:</p><ul> <li> $$$a$$$ packs of dog food; </li><li> $$$b$$$ packs of cat food; </li><li> $$$c$$$ packs of universal food (such food is suitable for both dogs and cats). </li></ul><p>Polycarp has $$$x$$$ dogs and $$$y$$$ cats. Is it possible that he will be able to buy food for all his animals in the store? Each of his dogs and each of his cats should receive one pack of suitable food for it.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of input contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input.</p><p>Then $$$t$$$ lines are given, each containing a description of one test case. Each description consists of five integers $$$a, b, c, x$$$ and $$$y$$$ ($$$0 \le a,b,c,x,y \le 10^8$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case in a separate line, output:</p><ul> <li> <span class="tex-font-style-tt">YES</span>, if suitable food can be bought for each of $$$x$$$ dogs and for each of $$$y$$$ cats; </li><li> <span class="tex-font-style-tt">NO</span> else. </li></ul><p>You can output <span class="tex-font-style-tt">YES</span> and <span class="tex-font-style-tt">NO</span> in any case (for example, strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will be recognized as a positive response).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004560176159388232" id="id005796618605998333" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004560176159388232"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 1 4 2 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0 0 0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5 5 0 4 6</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">50000000 50000000 100000000 100000000 100000000</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">0 0 0 100000000 100000000</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">1 3 2 2 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0022854290345353734" id="id007778148372493844" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0022854290345353734">YES
YES
NO
YES
YES
NO
NO
</pre></div></div></div>