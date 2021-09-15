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
