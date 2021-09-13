#include "SearchAlgorithm.h"

ErrorCode SearchAlgorithm::intLinear_SearchAlgorithm(int nArr[], int nCount, int nVal)
{
    for (int i = 0; i < nCount; i++)
    {
        if (nArr[i] == nVal)
        {
            printf("%d 의 값은 %d번째에 있습니다.", nVal, i + 1);
            return Success;
        }
    }

    return NotExist;
}
