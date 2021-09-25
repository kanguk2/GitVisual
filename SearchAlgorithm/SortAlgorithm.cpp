#include "SortAlgorithm.h"

void SortAlgorithm::intBubble_SortAlgorithm(int* nArr, int nSize)
{
	int nTmp = nArr[0];
	for (int i = 0; i < nSize; i++)
	{
		for (int j = i + 1; j < nSize; j++)
		{
			if (nArr[i]> nArr[j])
			{
				nTmp = nArr[i];
				nArr[i] = nArr[j];
				nArr[j] = nTmp;
			}
		}
	}
}

void SortAlgorithm::intSelection_SortAlgorithm(int* nArr, int nSize)
{
	int nMin = 0;
	int nTmp = 0;
	for (int i = 0; i < nSize; i++)
	{
		nMin = i;
		for (int j = i+1; j < nSize; j++)
		{
			if (nArr[nMin] > nArr[j])
			{
				nMin = j;
			}
		}

		nTmp = nArr[i];
		nArr[i] = nArr[nMin];
		nArr[nMin] = nTmp;
	}
}

void SortAlgorithm::intMergeSort_SortAlgorithm(int* nArr, int nStartIdx, int nEndIndex, int* nArrSorted /*=NULL*/)
{
	if (nArrSorted == NULL)
		nArrSorted = new int[nEndIndex + 1];

	if(nStartIdx < nEndIndex)
	{
		int nMidIndex = (nStartIdx+ nEndIndex) / 2;
		intMergeSort_SortAlgorithm(nArr, nStartIdx, nMidIndex, nArrSorted);
		intMergeSort_SortAlgorithm(nArr, nMidIndex + 1, nEndIndex, nArrSorted);
		intMerge_SortAlgorithm(nArr, nArrSorted, nStartIdx, nMidIndex, nEndIndex);
	}
}

void SortAlgorithm::intMerge_SortAlgorithm(int* nArr, int* nArrSorted, int nStartIdx, int nMidIndex, int nEndIndex)
{
	int i = nStartIdx;
	int j = nMidIndex+1;
	int k = nStartIdx;

	while (i <= nMidIndex && j <= nEndIndex)
	{
		if (nArr[i] < nArr[j])
		{
			nArrSorted[k] = nArr[i];
			i++;
		}
		else
		{
			nArrSorted[k] = nArr[j];
			j++;
		}

		k++;
	}

	if (i > nMidIndex)
	{
		for (int t = j; t <= nEndIndex; t++, k++)
			nArrSorted[k] = nArr[t];
	}
	else
	{
		for (int t = i; t <= nMidIndex; t++, k++)
			nArrSorted[k] = nArr[t];
	}

	for (int t = nStartIdx; t <= nEndIndex; t++)
		nArr[t] = nArrSorted[t];

}