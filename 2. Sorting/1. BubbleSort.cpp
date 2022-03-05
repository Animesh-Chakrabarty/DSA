#include<bits/stdc++.h>
using namespace std;

void swap(int &x , int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void bubbleSort(int arr[] , int N)
{
	for (int i = 1; i < N; ++i)
	{
		for (int j = 0; j < N - i; ++j)
		{
			if (arr[j] > arr[j + 1]) swap(arr[j] , arr[j + 1]);
		}
	}
}

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; ++i)cin >> arr[i];

	bubbleSort(arr, N);

	for (auto it : arr)cout << it << " " ;
	cout << endl;
}
