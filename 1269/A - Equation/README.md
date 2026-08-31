<h2><a href="https://codeforces.com/contest/1269/problem/A" target="_blank" rel="noopener noreferrer">1269A — Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1269A](https://codeforces.com/contest/1269/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Equation</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a positive integer <span class="tex-font-style-bf">composite</span> if it has at least one divisor other than $$$1$$$ and itself. For example:</p><ul> <li> the following numbers are composite: $$$1024$$$, $$$4$$$, $$$6$$$, $$$9$$$; </li><li> the following numbers are not composite: $$$13$$$, $$$1$$$, $$$2$$$, $$$3$$$, $$$37$$$. </li></ul><p>You are given a positive integer $$$n$$$. Find two composite integers $$$a,b$$$ such that $$$a-b=n$$$.</p><p>It can be proven that solution always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input contains one integer $$$n$$$ ($$$1 \leq n \leq 10^7$$$): the given integer.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two composite integers $$$a,b$$$ ($$$2 \leq a, b \leq 10^9, a-b=n$$$).</p><p>It can be proven, that solution always exists.</p><p>If there are several possible solutions, you can print any. </p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024699095454198372" id="id005420085428842313" class="input-output-copier">Copy</div></div><pre id="id0024699095454198372">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005915937495048242" id="id0010078360025858024" class="input-output-copier">Copy</div></div><pre id="id005915937495048242">9 8
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049475674176626594" id="id0027613022865544246" class="input-output-copier">Copy</div></div><pre id="id0049475674176626594">512
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008465961693989744" id="id0031557243437838534" class="input-output-copier">Copy</div></div><pre id="id008465961693989744">4608 4096
</pre></div></div></div>