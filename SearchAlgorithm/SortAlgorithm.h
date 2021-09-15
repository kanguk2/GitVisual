#pragma once
#include "base.h"
//정렬 알고리즘
namespace SortAlgorithm
{
	/// <summary>
	/// Bubble 정렬 알고리즘 구현
	/// 처음 순서대로 하나씩 비교하며 정렬
	/// </summary>
	void intBubble_SortAlgorithm(int* nArr, int nSize);

	template <typename T>
	void TBubble_SortAlgorithm(T* Arr, int nSize)
	{
		T Tmp = Arr[0];
		for (int i = 0; i < nSize; i++)
		{
			for (int j = i + 1; j < nSize; j++)
			{
				if (Arr[i] > Arr[j])
				{
					Tmp = Arr[i];
					Arr[i] = Arr[j];
					Arr[j] = Tmp;
				}
			}
		}
	}

	/// <summary>
	/// 배열의 값중 가장 작은 값을 순서대로 앞쪽으로 배치하며 정렬
	/// </summary>
	/// <param name="nArr"></param>
	/// <param name="nSize"></param>
	void intSelection_SortAlgorithm(int* nArr, int nSize);

	template <typename T>
	void TSelection_SortAlgorithm(T* Arr, int nSize)
	{
		int nMin = 0;
		T Tmp = 0;
		for (int i = 0; i < nSize; i++)
		{
			nMin = i;
			for (int j = i + 1; j < nSize; j++)
			{
				if (Arr[nMin] > Arr[j])
				{
					nMin = j;
				}
			}

			Tmp = Arr[i];
			Arr[i] = Arr[nMin];
			Arr[nMin] = Tmp;
		}
	}

}