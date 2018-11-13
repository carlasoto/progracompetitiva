#include <bits/stdc++.h>

using namespace std;
int main() {
    int t, i;
    scanf("%d", &t);
    while (t--){
        int c, a, f;
        scanf("%d %d %d", &c, &a, &f);
        int x[50000];
        int y[50000];
        for (i = 0; i<f; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }
        sort(x, x+f);
        sort(y, y+f);
 
        printf("(Street: %d, Avenue: %d)\n", x[(f - 1) / 2], y[(f - 1) / 2]);
    }
    return 0;
}
