#include<bits/stdc++.h>
using namespace std;

int firstOccurance( int arr[] , int n , int x)
{
	int ans = -1;
	int low = 0 , high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == x)
		{
			ans = mid;
			high = mid - 1;
			continue;
		}
		else if (arr[mid] > x) high = mid - 1;
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
	int ans = firstOccurance(arr , n , x);
	cout << ans;
}

// I/P -> size_of_Array , Array(in sorted order) , Element_to_find_first_occurance
// O/P -> index_of_first_occurance_of_element
