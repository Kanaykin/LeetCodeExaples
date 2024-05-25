  #include <vector>
  #include <algorithm>
  #include "helpers.h"

// l1 = [2,4,3]
// l2 = [5,6,4]
//-------------
// l1 = [9,9,9,9,9,9,9]
// l2 = [9,9,9,9]

int mainStd()
{

    ListNode* in1 = vector2List({2,4,9});
    ListNode* in2 = vector2List({5,6,4,9});

    std::vector<int> inv1 = list2Vector(in1);
    std::vector<int> inv2 = list2Vector(in2);

    std::vector<int> res;
    auto sum = 0;
    for(int i = inv1.size() - 1, j = inv2.size() - 1; i >= 0 || j >= 0 ; --i, --j)
    {
        auto val1 = i >= 0 ? inv1[i] : 0;
        auto val2 = j >= 0 ? inv2[j] : 0;
        sum += val1 + val2;
        res.push_back(sum % 10);
        sum = sum / 10;
    }
    if (sum > 0)
        res.push_back(sum % 10);

    ListNode* result = vector2List(res);

    deleteList(in1);
    deleteList(in2);
    deleteList(result);

    return 0;
}
