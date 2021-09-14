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
