#pragma once
#include "base.h"

enum ErrorCode
{
	NotExist = -1,
	Success = 0,
};

namespace SearchAlgorithm
{
	/// <summary>
	/// 선형 검색 알고리즘. 템플릿 사용하여 다양한 변수 사용되도록 코드 구성
    /// template 의 선언은 header와 같은 코드 내에 선언되어야함.
    /// 그렇지 않을 경우 Link Error를 반환
    /// 처음부터 시작하여 배열 크기까지 검색하여 찾고자 하는 값을 검색한다.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="Arr">데이터들</param>
	/// <param name="nCount">데이터의 사이즈</param>
	/// <param name="Val">값들</param>
	/// <returns>Enum으로 선언한 Code 반환. 성공시 Success(0) 반환</returns>
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

    /// <summary>
    /// 이진 검색 알고리즘. 템플릿 사용하여 다양한 변수 사용되도록 코드수정
    /// 이진 검색 알고리즘은 정렬이 되어있어야함
    /// 배열의 중간에 있는 값과 비교하여 중간값이 찾으려는 값보다 크면 왼쪽 작으면 오른쪽을 검색하며 찾아간다.
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="Arr"></param>
    /// <param name="nCount"></param>
    /// <param name="Val"></param>
    /// <returns></returns>
    template <typename T>
    ErrorCode TBinary_SearchAlgorithm(T Arr[], int nCount, T Val)
    {
        int left = 0;
        int right = nCount - 1;
        int mid;

        while (left <= right)
        {
            mid = (left + right) / 2;
            if (Val == Arr[mid])
            {
                std::cout << Val << " 의 값은 " << mid + 1 << "번째에 있습니다." << std::endl;

                return Success;
            }

            if (Arr[mid] < Val)
                left = mid + 1;
            else
                right = mid - 1;
        }

        std::cout << Val << "값은존재하지 않습니다" << std::endl;

        return NotExist;
    }

    // 기본적인 바이너리 검색 알고리즘 정수형
    ErrorCode intBinary_SearchAlgorithm(int nArr[], int nCount, int nVal);
    // 기본적인 선형 검색 알고리즘 정수형
	ErrorCode intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal);
}