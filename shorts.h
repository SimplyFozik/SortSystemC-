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

template <typename Y>
void InsertSort(Y* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; (j > 0) && (arr[j] < arr[j - 1]); j--)
			swapfunc(arr[j], arr[j - 1]);
	}
}

template <typename X>
void MergeSort(X* arr, int size)
{
	if (size > 1)
	{
		int half1 = size / 2;
		int half2 = size - half1;

		int* merge1 = new int[half1];
		int* merge2 = new int[half2];

		for (int i = 0; i < half1; i++)
			merge1[i] = arr[i];
		for (int i = half1; i < size; i++)
			merge2[i] = arr[i];

		MergeSort(merge1, half1);
		MergeSort(merge2, half2);

		int i, h1, h2;
		for (i = 0, h1 = 0, h2 = 0; i < size; i++)
		{
			if (merge1[h1] < merge2[h2])
			{
				arr[i] = merge1[h1];
				h1++;
				if (h1 == half1) break;
			}
			else
			{
				arr[i] = merge2[h2];
				h2++;
				if (h2 == half2) break;
			}
		}
		if (h1 == half1)
		{
			for (; i < size; i++,h2++)
				arr[i] = merge2[h2];
		}
		else
		{
			for (; i < size; i++, h1++)
				arr[i] = merge1[h1];
		}
	}
}