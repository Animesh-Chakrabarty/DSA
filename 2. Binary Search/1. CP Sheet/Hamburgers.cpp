#include<bits/stdc++.h>
using namespace std;
int ingridientsFor1Burger[3];
int ingridientsAvailable[3];
int priceOf1Ingridient[3];
long long rubles;

// Using Monotonic Predicate Function

bool isPossible(long long n)
{
	long long noOfIngridientsNeeded[3];
	long long ingridientsToBuy[3] = {0} ;
	for (int i = 0; i < 3; ++i)
	{
		noOfIngridientsNeeded[i] = n * ingridientsFor1Burger[i];
		if (noOfIngridientsNeeded[i] > ingridientsAvailable[i]) ingridientsToBuy[i] = noOfIngridientsNeeded[i] - ingridientsAvailable[i];
	}
	long long amountRequired = 0;
	for (int i = 0; i < 3; ++i)amountRequired += ingridientsToBuy[i] * priceOf1Ingridient[i];
	return rubles >= amountRequired;
}

int main()
{
	string reciepe;
	cin >> reciepe;
	for (auto it : reciepe)
	{
		if (it == 'B')ingridientsFor1Burger[0]++;
		else if (it == 'S')ingridientsFor1Burger[1]++;
		else if (it == 'C')ingridientsFor1Burger[2]++;
	}

	for (int i = 0; i < 3; ++i)cin >> ingridientsAvailable[i];
	for (int i = 0; i < 3; ++i)cin >> priceOf1Ingridient[i];
	cin >> rubles;

	long long low = 0 , high = 1e13;
	while (low <= high)
	{
		long long mid = low + ((high - low) / 2);
		if (isPossible(mid)) low = mid + 1 ;
		else high = mid - 1;
	}
	cout << low - 1;
}
