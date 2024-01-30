#include <bits/stdc++.h>
using namespace std;

int nways(int n, int k, int sum)
{
    if (sum < 0)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += nways(n - 1, k, sum - i);
        // if (ans > 0){
        //     cout << ans << "  \n";
        //     cout << "for " << n-1 << " " << k << " " << sum-i << " " << ans << endl;
        // }
    }
    return ans;
}

int main()
{
    int n = 3;
    int k = 3;
    int sum = 6;
    cout << nways(n, k, sum);
}