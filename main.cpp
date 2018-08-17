#include <iostream>
#include <vector>
#include "BinaryTreeNode.h"
#include "printFromTopToBottom.h"
int main() {
	TreeNode *pNode1 = new TreeNode (1);
	vector<int> v1;
	v1 = PrintFromTopToBottom(pNode1);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
}
