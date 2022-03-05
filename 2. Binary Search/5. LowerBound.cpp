#include<bits/stdc++.h>
using namespace std;

int lowerBound( int arr[] , int n , int x)
{
	int ans = n;
	int low = 0 , high = n - 1;
	while (low <= high)
	{
		int mid = low + ( high - low ) / 2;
		if (arr[mid] == x)
		{
			ans = mid;
			return ans;
		}
		else if (arr[mid] > x)
		{
			ans = mid;
			high = mid - 1;
		}
		else if (arr[mid] < x) low = mid + 1;
	}
	return ans;
}

int main()
{
	int n , x;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	cin >> x;
	int ans = lowerBound(arr , n , x);
	cout << ans;
}

// I/P -> size_of_array , Array (in sorted order) , element_to_search_lower_bound
// O/P -> index_of_lower_bound_of_element
