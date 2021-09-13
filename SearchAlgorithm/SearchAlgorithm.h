#pragma once

#include <iostream>

enum ErrorCode
{
	NotExist = -1,
	Success = 0,
};

// 단순 선형 검색 알고리즘
// 정렬 필요 or 필요x 무관
namespace SearchAlgorithm
{
	template <typename T>
    ErrorCode TLinear_SearchAlgorithm(T Arr[], int nCount, T Val)
    {
        for (int i = 0; i < nCount; i++)
        {
            if (Arr[i] == Val)
            {
                std::cout << Val << " 의 값은 "<<i+1<< "번째에 있습니다." << std::endl;
                return Success;
            }
        }

        printf("존재하지 않습니다\n");

        return NotExist;
    }

	ErrorCode intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal);
}