#pragma once


template <typename F>
void swapfunc(F& index, F& index_to_change)
{
	F save_indx = index;
	index = index_to_change;
	index_to_change = save_indx;
}

template <typename E>
void choose_sort(E* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_indx])
			{
				min_indx = j;
			}
		}
		swapfunc(arr[i], arr[min_indx]);
	}
}

template <typename A>
void bubble_sort(A* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int swaps = 0;
		for (int j = 0; i < size - 1 - i; i++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapfunc(arr[j], arr[j + 1]);
				swaps++;
			}
		}
		if (swaps == 0) break;
	}
}

template <typename S>
void shaker_sort(S* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int swaps = 0;
		for (int j = i, k = size - 2 - i; j < size - 1 - i; j++, k--)
		{
			if (arr[j] > arr[j + 1])
			{
				swapfunc(arr[j], arr[j + 1]);
				swaps++;
			}
			if (arr[k] > arr[k + 1])
			{
				swapfunc(arr[k], arr[k + 1]);
				swaps++;
			}
		}
		if (swaps == 0) break;
	}
}