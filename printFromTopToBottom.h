#ifndef PRINT_FROM_TOP_TO_BOTTOM_H
#define PRINT_FROM_TOP_TO_BOTTOM_H
#include "BinaryTreeNode.h"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

    void PrintFromTopToBottomCore(TreeNode *root, vector<int> &result) {
        TreeNode *node = root;
		queue<TreeNode *> temp;
		while (node != nullptr) {
        
	        result.push_back(node->val);
	        if (node->left != nullptr) temp.push(node->left);
	        if (node->right != nullptr) temp.push(node->right);
         
			if (temp.empty()) return;
			else {
				node = temp.front();
				temp.pop();
			}
		}
    }
    
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> result;
        PrintFromTopToBottomCore(root, result);
        return result;
    }

#endif
