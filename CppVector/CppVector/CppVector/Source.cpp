#pragma once
#include <string>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode result;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode result;
	ListNode* l3 = &result;

	l3->val = 4;
	return l3;
}