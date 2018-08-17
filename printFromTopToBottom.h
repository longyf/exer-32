#ifndef PRINT_FROM_TOP_TO_BOTTOM_H
#define PRINT_FROM_TOP_TO_BOTTOM_H
#include "BinaryTreeNode.h"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

    void PrintFromTopToBottomCore(TreeNode *node, queue<TreeNode *> &temp, vector<int> &result) {
        if (node == nullptr) return;
        
        result.push_back(node->val);
        if (node->left != nullptr) temp.push(node->left);
        if (node->right != nullptr) temp.push(node->right);
        
        TreeNode *next; 
		if (temp.empty()) next = nullptr;//这个地方要小心，空的temp不可再删东西。
		else {
			next = temp.front();
			temp.pop();
		}

        PrintFromTopToBottomCore(next, temp, result);
    }
    
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> result;
        queue<TreeNode *> temp;
        PrintFromTopToBottomCore(root, temp, result);
        return result;
    }

#endif
