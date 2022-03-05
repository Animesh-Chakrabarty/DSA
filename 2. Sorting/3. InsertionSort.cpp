#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int N)
{
	for (int i = 1; i < N ; ++i)
	{
		int temp = arr[i];
		int j = i - 1;

		// loop will break when it finds a element smaller than temp or index as -1
		while ((arr[j] >= temp) && (j > -1))
		{
			// shift array elements on right
			arr[j + 1] = arr[j];
			j--;
		}

		//insert element at the right place
		arr[j + 1] = temp;
	}
}

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; ++i)cin >> arr[i];

	insertionSort(arr , N);

	for (auto it : arr) cout << it << " ";
	cout << endl;
}
