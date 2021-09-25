#pragma once
#include "base.h"
//���� �˰���
namespace SortAlgorithm
{
	/// <summary>
	/// Bubble ���� �˰��� ����
	/// ó�� ������� �ϳ��� ���ϸ� ����
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
	/// �迭�� ���� ���� ���� ���� ������� �������� ��ġ�ϸ� ����
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

	/// <summary>
	/// ū ������ �ΰ��� ���������� ���� �� ���� ����ϰ� ���߿� �պ�
	/// </summary>
	/// <param name="nArr"></param>
	/// <param name="nSize"></param>
	void intMergeSort_SortAlgorithm(int* nArr, int nStartIdx, int nEndIndex, int* nArrSorted = NULL);
	void intMerge_SortAlgorithm(int* nArr, int* nArrSorted, int nStartIdx, int nMidIndex, int nEndIndex);

	template <typename T>
	void TMerge_SortAlgorithm(T* Arr, T* ArrSorted, int nStartIdx, int nMidIndex, int nEndIndex)
	{
		int i = nStartIdx;
		int j = nMidIndex + 1;
		int k = nStartIdx;

		while (i <= nMidIndex && j <= nEndIndex)
		{
			if (Arr[i] < Arr[j])
			{
				ArrSorted[k] = Arr[i];
				i++;
			}
			else
			{
				ArrSorted[k] = Arr[j];
				j++;
			}

			k++;
		}

		if (i > nMidIndex)
		{
			for (int t = j; t <= nEndIndex; t++, k++)
				ArrSorted[k] = Arr[t];
		}
		else
		{
			for (int t = i; t <= nMidIndex; t++, k++)
				ArrSorted[k] = Arr[t];
		}

		for (int t = nStartIdx; t <= nEndIndex; t++)
			Arr[t] = ArrSorted[t];
	}

	template <typename T>
	void TMergeSort_SortAlgorithm(T* Arr, int nStartIdx, int nEndIndex, T* ArrSorted = NULL)
	{
		if (ArrSorted == NULL)
			ArrSorted = new T[nEndIndex + 1];

		if (nStartIdx < nEndIndex)
		{
			int nMidIndex = (nStartIdx + nEndIndex) / 2;
			TMergeSort_SortAlgorithm(Arr, nStartIdx, nMidIndex, ArrSorted);
			TMergeSort_SortAlgorithm(Arr, nMidIndex + 1, nEndIndex, ArrSorted);
			TMerge_SortAlgorithm(Arr, ArrSorted, nStartIdx, nMidIndex, nEndIndex);
		}
	}

}