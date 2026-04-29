#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
	int n = arr.size();

	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = 0; j < arr.size() - i - 1; j++) 
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}