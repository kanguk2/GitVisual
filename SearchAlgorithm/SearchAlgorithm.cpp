#include "SearchAlgorithm.h"

ErrorCode SearchAlgorithm::intBinary_SearchAlgorithm(int nArr[], int nCount, int nVal)
{
    int left = 0;
    int right = nCount - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (nVal == nArr[mid])
        {
            printf("%d 의 값은 %d번째에 있습니다.\n", nVal, mid + 1);
            return Success;
        }

        if (nArr[mid] < nVal)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("%d값이 존재하지 않습니다.\n", nVal);

    return NotExist;
}

ErrorCode SearchAlgorithm::intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal)
{
    for (int i = 0; i < nCount; i++)
    {
        if (nArr[i] == nVal)
        {
            printf("%d 의 값은 %d번째에 있습니다.\n", nVal, i + 1);
            return Success;
        }
    }

    printf("%d값이 존재하지 않습니다.\n", nVal);

    return NotExist;
}