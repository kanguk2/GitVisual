#pragma once
#include "base.h"
//���� �˰���
namespace SortAlgorithm
{
	/// <summary>
	/// Bubble ���� �˰��� ����
	/// </summary>
	/// <param name="nArr"></param>
	/// <param name="nSize"></param>
	void intBubble_SortAlgorithm(int* nArr, int nSize);

	/// <summary>
	/// Bubble ���� �˰��� ����
	/// </summary>
	/// <param name="nArr"></param>
	/// <param name="nSize"></param>
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
}