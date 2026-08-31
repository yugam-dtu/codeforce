<h2><a href="https://codeforces.com/contest/1838/problem/C" target="_blank" rel="noopener noreferrer">1838C — No Prime Differences</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1838C](https://codeforces.com/contest/1838/problem/C) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. No Prime Differences</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given integers $$$n$$$ and $$$m$$$. Fill an $$$n$$$ by $$$m$$$ grid with the integers $$$1$$$ through $$$n\cdot m$$$, in such a way that for any two adjacent cells in the grid, the absolute difference of the values in those cells is not a prime number. Two cells in the grid are considered adjacent if they share a side.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/58a8ad463a03a7b533c80c7cc8f71f56bd745256.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>It can be shown that under the given constraints, there is always a solution.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The description of the test cases follows.</p><p>The first and only line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$4 \le n, m \le 1000$$$) — the dimensions of the grid.</p><p>It is guaranteed that the sum of $$$n\cdot m$$$ over all test cases does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ lines of $$$m$$$ integers each, representing the final grid. Every number from $$$1$$$ to $$$n\cdot m$$$ should appear exactly once in the grid.</p><p>The extra spaces and blank lines in the sample output below are only present to make the output easier to read, and are <span class="tex-font-style-bf">not</span> required.</p><p>If there are multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009832827447768918" id="id0048550262587660586" class="input-output-copier">Copy</div></div><pre id="id009832827447768918"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4 4</div><div class="test-example-line test-example-line-even test-example-line-2">5 7</div><div class="test-example-line test-example-line-odd test-example-line-3">6 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00974043082270657" id="id003251450331163739" class="input-output-copier">Copy</div></div><pre id="id00974043082270657">16  7  1  9
12  8  2  3
13  4 10 11
14  5  6 15

29 23 17  9  5  6  2
33 27 21 15 11  7  1
32 31 25 19 20 16 10
26 30 24 18 14  8  4
35 34 28 22 13 12  3

 2  3  7 11
 8  9  1 10
17 13  5  4
18 14  6 12
19 23 15 21
20 24 16 22
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first sample case corresponds to the picture above. The only absolute differences between adjacent elements in this grid are $$$1$$$, $$$4$$$, $$$6$$$, $$$8$$$, and $$$9$$$, none of which are prime. </p></div>