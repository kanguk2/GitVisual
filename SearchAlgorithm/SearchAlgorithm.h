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
	/// ���� �˻� �˰���. ���ø� ����Ͽ� �پ��� ���� ���ǵ��� �ڵ� ����
    /// template �� ������ header�� ���� �ڵ� ���� ����Ǿ����.
    /// �׷��� ���� ��� Link Error�� ��ȯ
    /// ó������ �����Ͽ� �迭 ũ����� �˻��Ͽ� ã���� �ϴ� ���� �˻��Ѵ�.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="Arr">�����͵�</param>
	/// <param name="nCount">�������� ������</param>
	/// <param name="Val">����</param>
	/// <returns>Enum���� ������ Code ��ȯ. ������ Success(0) ��ȯ</returns>
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

    /// <summary>
    /// ���� �˻� �˰���. ���ø� ����Ͽ� �پ��� ���� ���ǵ��� �ڵ����
    /// ���� �˻� �˰����� ������ �Ǿ��־����
    /// �迭�� �߰��� �ִ� ���� ���Ͽ� �߰����� ã������ ������ ũ�� ���� ������ �������� �˻��ϸ� ã�ư���.
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
                std::cout << Val << " �� ���� " << mid + 1 << "��°�� �ֽ��ϴ�." << std::endl;

                return Success;
            }

            if (Arr[mid] < Val)
                left = mid + 1;
            else
                right = mid - 1;
        }

        std::cout << Val << "������������ �ʽ��ϴ�" << std::endl;

        return NotExist;
    }

    // �⺻���� ���̳ʸ� �˻� �˰��� ������
    ErrorCode intBinary_SearchAlgorithm(int nArr[], int nCount, int nVal);
    // �⺻���� ���� �˻� �˰��� ������
	ErrorCode intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal);
}