class Solution
{
public:
    int fun(int mid, int n, int m)
    {
        long long ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * mid;
            if (ans > m)
                return 2;
        }
        if (ans == m)
            return 1;
        else
            return 0;
    }

    int nthRoot(int n, int m)
    {
        // Code here.
        int low = 1, high = m;
        int ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int midN = fun(mid, n, m);
            if (midN == 2)
                high = mid - 1;
            else if (midN == 1)
                ans = mid;
            else
                low = mid + 1;
        }
        return ans;
    }
};