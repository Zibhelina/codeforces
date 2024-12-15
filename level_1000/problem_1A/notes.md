* The goal is to find the minimum amount of $a x a$ tiles needed to cover a rectangular area of $n x m$.
* The first thing that goes through my head is trying to fit the largest square made up of $a x a$ squares that can fit inside the rectangular $n x m$ area.
* I also think about having a convenient notation for referring to these squares and rectangles. How about having a capital letter denoting the name for the region, followed by its dimension inside parenthesis? $S(a x a)$. Then if I want to refer to any specific cell, I can say R(n x m)[i][j], where i and j refer to row and column respectivelly. If I want to refer to a subregion of R, I can say $R(n x m)[i..r][j..c]$.
* How can I find the largest square $L(k x k)$ that is coverable by $S(a x a)$ in $R(n x m)$ in terms of $a$, $n$, and $m$?
    * I can easily see there are four scenarios to consider when placing $L(k x k)$ in $R(n x m)$. 
        * Case 1: $L(k x k)$ fits perfectly within $R(n x m)$:
            * This case happens when $n = ka$ and $m = ka$. Solving for $k$ we have that $k=n/a$ and $k=m/a$ and $n=m$.
        * Case 2: $L(k x k)$ fits perfectly column-wise but not row-wise:
        * Case 3: $L(k x k)$ fits perfectly row-wise but now column-wise:
        * Case 4 $L(k x k)$ does not fit perfectly within $R$: