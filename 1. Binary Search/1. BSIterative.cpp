#include<bits/stdc++.h>
using namespace std;

int BS(int arr[] , int n , int x)
{
	int low = 0 , high = n - 1;
	while (low <= high)
	{
		int mid = low + ((high - low) / 2);
		if (arr[mid] == x) return mid;
		else if (arr[mid] > x) high = mid - 1;
		else if (arr[mid] < x) low = mid + 1;
	}
	return -1;
}

int main()
{
	int n , x;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	cin >> x;
	int ans = BS(arr , n , x);
	cout << ans;
}

// I/P -> size_of_Array , Array(in sorted order) , Element_to_search
// O/P -> index_of_element
