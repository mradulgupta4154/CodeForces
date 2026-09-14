<h2><a href="https://codeforces.com/contest/1538/problem/A" target="_blank" rel="noopener noreferrer">1538A — Stone Game</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Python 3 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1538A](https://codeforces.com/contest/1538/problem/A) |

## Topics
`brute force` `dp` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Stone Game</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Polycarp is playing a new computer game. This game has $$$n$$$ stones in a row. The stone on the position $$$i$$$ has integer power $$$a_i$$$. <span class="tex-font-style-bf">The powers of all stones are distinct</span>.</p><p>Each turn Polycarp can destroy either stone on the first position or stone on the last position (in other words, either the leftmost or the rightmost stone). When Polycarp destroys the stone it does not exist any more.</p><p>Now, Polycarp wants two achievements. He gets them if he destroys the stone with the <span class="tex-font-style-bf">least</span> power and the stone with the <span class="tex-font-style-bf">greatest</span> power. Help Polycarp find out what is the minimum number of moves he should make in order to achieve his goal.</p><p>For example, if $$$n = 5$$$ and $$$a = [1, 5, 4, 3, 2]$$$, then Polycarp could make the following moves: </p><ul> <li> Destroy the leftmost stone. After this move $$$a = [5, 4, 3, 2]$$$; </li><li> Destroy the rightmost stone. After this move $$$a = [5, 4, 3]$$$; </li><li> Destroy the leftmost stone. After this move $$$a = [4, 3]$$$. Polycarp destroyed the stones with the greatest and least power, so he can end the game. </li></ul><p>Please note that in the example above, you can complete the game in two steps. For example: </p><ul> <li> Destroy the leftmost stone. After this move $$$a = [5, 4, 3, 2]$$$; </li><li> Destroy the leftmost stone. After this move $$$a = [4, 3, 2]$$$. Polycarp destroyed the stones with the greatest and least power, so he can end the game. </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 100$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 100$$$) — the number of stones.</p><p>The second line contains $$$n$$$ distinct integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$) — the power of the stones.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the minimum number of moves required to destroy the stones with the greatest and the lowest power.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0015030419549270402" id="id0013400826071501548" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0015030419549270402">5
5
1 5 4 3 2
8
2 1 3 4 5 6 8 7
8
4 2 3 1 8 6 7 5
4
3 4 2 1
4
2 3 1 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0008556550238186855" id="id0018341425105494447" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0008556550238186855">2
4
5
3
2
</pre></div></div></div>