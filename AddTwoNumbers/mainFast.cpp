#include <vector>
#include <algorithm>
#include "helpers.h"

// l1 = [2,4,3]
// l2 = [5,6,4]
//-------------
// l1 = [9,9,9,9,9,9,9]
// l2 = [9,9,9,9]

int main()
{

    ListNode* in1 = vector2List({2,4,9});
    ListNode* in2 = vector2List({5,6,4,9});


    ListNode* result = nullptr;
    ListNode* current = nullptr;
    int sum = 0;
    while(in1 || in2)
    {
        const int val1 = in1 ? in1->val : 0;
        const int val2 = in2 ? in2->val : 0;
        sum += val1 + val2;
        if (!result)
        {
            result = new ListNode();
            result->val = sum % 10;
            current = result;
        }
        else
        {
            current->next = new ListNode();
            current = current->next;
            current->val = sum % 10;
        }
        sum = sum / 10;
        in2 = in2 ? in2->next : nullptr;
        in1 = in1 ? in1->next : nullptr;
    }
    if (sum > 0)
    {
        current->next = new ListNode();
        current = current->next;
        current->val = sum % 10;
    }

    deleteList(in1);
    deleteList(in2);
    deleteList(result);

    return 0;
}