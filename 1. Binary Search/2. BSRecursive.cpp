#include<bits/stdc++.h>
using namespace std;

int BSRecursive(int arr[] ,  int x , int low , int high)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == x) return mid;
		else if (arr[mid] > x) return BSRecursive (arr , x , low , mid - 1);
		else if (arr[mid] < x) return BSRecursive (arr , x , mid + 1 , high);
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
	int ans = BSRecursive(arr , x , 0 , n - 1);
	cout << ans;
}

// I/P -> size_of_array , Array (in sorted order) , element_to_search
// O/P -> index_of_element
