#include <iostream>
using namespace std;
int main()
{
	const int size = 5;
	int arr[size];
	int index;
	for (index = 0; index < size; index++)
	{
		cout << "Enter numbers [" << index << "]:";
		cin >> arr[index];
	}
	for (index = 0; index < size; index++)
	{
		cout << "arr [" << index + 1 << "]=" << arr[index] << endl;
	}
	cout << endl;

	//*****Linear Search*****

// Minimum Value

	int min, minindex = 0;
	min = arr[0];
	for (index = 1; index < size; index++)
	{
		if (arr[index] < min)
		{
			min = arr[index];
			minindex = index;
		}
	}
	cout << "The Minimum value is " << min << " at index [" << minindex << "]" << endl;
	cout << endl;

	// Maximum Value

	int max, maxindex = 0;
	max = arr[0];
	for (index = 1; index < size; index++)
	{
		if (arr[index] > max)
		{
			max = arr[index];
			maxindex = index;
		}
	}
	cout << "The Maximum value is " << max << " at index [" << maxindex << "]" << endl;
	cout << endl;

	//Value Finder

	int value;
	cout << "Enter the value you want to find : ";
	cin >> value;
	bool found = false;
	for (index = 0; index < size; index++)
	{
		if (value == arr[index])
		{
			found = true;
			break;
		}
	}
	cout << endl;

	if (found)
	{
		cout << "The Value exist in the array at index [" << index << "]" << endl;
	}
	else
	{
		cout << "The Value does not exist in the array" << endl;
	}
	cout << endl;


	//*****Binary Search*****

}