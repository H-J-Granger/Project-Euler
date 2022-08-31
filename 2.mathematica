n = 0;
ans = 0;
While[Fibonacci[n] <= 
   4000000, (If[Mod[Fibonacci[n], 2] == 0, ans += Fibonacci[n]]; n++)];
Print[ans]