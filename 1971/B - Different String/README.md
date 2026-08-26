<h2><a href="https://codeforces.com/contest/1971/problem/B" target="_blank" rel="noopener noreferrer">1971B — Different String</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1971B](https://codeforces.com/contest/1971/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Different String</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a string $$$s$$$ consisting of lowercase English letters.</p><p>Rearrange the characters of $$$s$$$ to form a new string $$$r$$$ that is <span class="tex-font-style-bf">not equal</span> to $$$s$$$, or report that it's impossible.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a string $$$s$$$ of length at most $$$10$$$ consisting of lowercase English letters.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if no such string $$$r$$$ exists as described in the statement, output "<span class="tex-font-style-tt">NO</span>" (without quotes).</p><p>Otherwise, output "<span class="tex-font-style-tt">YES</span>" (without quotes). Then, output one line — the string $$$r$$$, consisting of letters of string $$$s$$$.</p><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", and "<span class="tex-font-style-tt">Yes</span>" will be recognized as a positive response).</p><p>If multiple answers are possible, you can output any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0012026006257423627" id="id007492802627756007" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0012026006257423627"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">codeforces</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">aaaaa</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">xxxxy</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">co</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">d</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">nutdealer</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">mwistht</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">hhhhhhhhhh</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id001040428207702635" id="id009488901023851516" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001040428207702635">YES
forcodesec
NO
YES
xxyxx
YES
oc
NO
YES
undertale
YES
thtsiwm
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, another possible answer is $$$\texttt{forcescode}$$$.</p><p>In the second test case, all rearrangements of $$$\texttt{aaaaa}$$$ are equal to $$$\texttt{aaaaa}$$$.</p></div>