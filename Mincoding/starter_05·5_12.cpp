﻿#include <iostream>

using namespace std;

int main()
{
	int arr[5], sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	cout << "합은 " << sum << "입니다";

	return 0;
}