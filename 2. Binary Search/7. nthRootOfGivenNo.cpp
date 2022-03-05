#include<bits/stdc++.h>
using namespace std;

long long multiply(int num , int power)
{
	long long ans = 1;
	while (power--) ans *= num;
	return ans;
}

int nthRoot(int num , int n)
{
	long long lo = 1 , hi = num / n;
	long long mid;
	long long ans = -1;
	while (hi >= lo)
	{
		mid = lo + ((hi - lo) / 2);
		if (multiply(mid, n) == num)
		{
			ans = mid;
			break;
		}
		else if (multiply(mid , n) > num) hi = mid - 1;
		else  lo = mid + 1;
	}
	return ans;
}

int main()
{
	long long num , n ;
	cin >> num >> n;

	int ans = nthRoot(num , n);

	cout << ans ;
}

// I/P -> number , n
// O/P -> nth root of number
