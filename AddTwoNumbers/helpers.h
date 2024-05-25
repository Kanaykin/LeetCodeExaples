#pragma once

#include <vector>
#include <algorithm>

struct ListNode 
  {
      int val = {0};
      ListNode *next = nullptr;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* vector2ListImpl(const std::vector<int>& v, std::vector<int>::const_iterator iter);

ListNode* vector2List(const std::vector<int>& v);

std::vector<int> list2Vector(ListNode* l);

void deleteList(ListNode* l1);

int mainFast();
int mainStd();