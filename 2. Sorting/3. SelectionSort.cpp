#include<bits/stdc++.h>
using namespace std;

void swap(int &x , int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void selectionSort(int arr[] , int N)
{
	for (int i = 0; i < N; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < N; ++j)
		{
			if (arr[j] < arr[minIndex]) minIndex = j;
		}
		swap(arr[i] , arr[minIndex]);
	}
}

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; ++i)cin >> arr[i];

	selectionSort(arr , N);

	for (auto it : arr)cout << it << " " ;
	cout << endl;
}
