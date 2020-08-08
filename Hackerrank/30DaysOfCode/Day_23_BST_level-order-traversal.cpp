// https://www.hackerrank.com/challenges/30-binary-trees/problem
// BST level order traversal aka BFS

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node {
public:
    int data;
    Node* left, * right;
    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }

    // Write your code here
    void levelOrder(Node* root) {
        queue<Node*> queue;

        if (root == NULL)
            return;

        queue.push(root);

        while (!queue.empty())
        {
            Node* node = queue.front();
            cout << node->data << " ";

            queue.pop();

            if (node->left != NULL)
                queue.push(node->left);
            if (node->right != NULL)
                queue.push(node->right);
        }

    }

};

int main() {
    Solution myTree;
    Node* root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}