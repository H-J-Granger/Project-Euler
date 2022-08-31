f[n_, k_] := Floor[n/k]*(Floor[n/k] + 1)/2*k;
Print[f[999, 3] - f[999, 15] + f[999, 5]]