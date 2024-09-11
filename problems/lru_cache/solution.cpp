#include <map>
using namespace std;

class Node {
public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int k, int v, Node* next = nullptr, Node* prev = nullptr) {
        key = k;
        val = v;
        this->next = next;
        this->prev = prev;
    }
};

class LRUCache {
public:
    int cap;
    Node* head;
    Node* tail;
    map<int, Node*> mp;

    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);  // Dummy head node
        tail = new Node(-1, -1);  // Dummy tail node
        head->next = tail;
        tail->prev = head;
    }

    void insertAfterHead(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    void deleteNode(Node* node) {
        Node* pre = node->prev;
        Node* nxt = node->next;
        pre->next = nxt;
        nxt->prev = pre;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;  // Key not found
        } else {
            Node* n = mp[key];
            int value = n->val;
            deleteNode(n);
            insertAfterHead(n);
            return value;
        }
    }

    void put(int key, int value) {
        if (mp.find(key) == mp.end()) {
            if (mp.size() == cap) {
                Node* n = tail->prev;  // Remove the least recently used item
                mp.erase(n->key);
                deleteNode(n);
            }
            Node* nn = new Node(key, value);
            mp[key] = nn;
            insertAfterHead(nn);
        } else {
            Node* n = mp[key];
            n->val = value;
            deleteNode(n);
            insertAfterHead(n);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */