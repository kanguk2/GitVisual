#pragma once
#include "SearchAlgorithm.h"
#include "SortAlgorithm.h"

int main(void)
{
	const int nFixedNum = 10;
	int nArr[nFixedNum] = { 1,5,7,20,58,19,60,23,66,34 };
	double dArr[nFixedNum] = { 1.6, 9.5, 2.4 , 7, 7.3, 9.2, 49.11, 494.2, 2.1, 6.6 };

	SearchAlgorithm::TLinear_SearchAlgorithm(nArr, nFixedNum, 19);
	SearchAlgorithm::TLinear_SearchAlgorithm(dArr, nFixedNum, 2.1);

	SortAlgorithm::intBubble_SortAlgorithm(nArr, nFixedNum);
	SearchAlgorithm::intBinary_SearchAlgorithm(nArr, nFixedNum, 66);

	SortAlgorithm::TBubble_SortAlgorithm(dArr, nFixedNum);
	SearchAlgorithm::TBinary_SearchAlgorithm(dArr, nFixedNum, 7.3);

	return 0;
}