#pragma once

struct ListNode 
  {
      int val = {0};
      ListNode *next = nullptr;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* vector2ListImpl(const std::vector<int>& v, std::vector<int>::const_iterator iter)
{
    if (iter == v.end())
        return new ListNode(0);

    auto curIter = iter;
    auto res = vector2ListImpl(v, ++iter);

    res->val = *curIter;

    if (curIter != v.begin())
    {
        ListNode* result = new ListNode(0);
        result->next = res;
        return result;
    }
    return res;
}

ListNode* vector2List(const std::vector<int>& v)
{
    std::vector<int>::const_iterator iter = v.begin();
    return vector2ListImpl(v, iter);
}

std::vector<int> list2Vector(ListNode* l)
{
    std::vector<int> result;
    if (!l)
        return result;
    do
    {
        result.push_back(l->val);
        l = l->next;

    } while (l);
    
    return result;
}

void deleteList(ListNode* l1)
{
    while(l1)
    {
        ListNode* tmp = l1->next;
        delete l1;
        l1 = tmp;
    }
}