#pragma once

#include <iostream>

enum ErrorCode
{
	NotExist = -1,
	Success = 0,
};

// �ܼ� ���� �˻� �˰���
// ���� �ʿ� or �ʿ�x ����
namespace SearchAlgorithm
{
	template <typename T>
    ErrorCode TLinear_SearchAlgorithm(T Arr[], int nCount, T Val)
    {
        for (int i = 0; i < nCount; i++)
        {
            if (Arr[i] == Val)
            {
                std::cout << Val << " �� ���� "<<i+1<< "��°�� �ֽ��ϴ�." << std::endl;
                return Success;
            }
        }

        printf("�������� �ʽ��ϴ�\n");

        return NotExist;
    }

	ErrorCode intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal);
}