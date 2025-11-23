#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;        // value in array
    int index;      // index of the value
    struct Node* next;
} Node;

#define TABLE_SIZE 10007  // a prime number for better hashing

Node* hashTable[TABLE_SIZE];

// Hash function
int hash(int key) {
    if (key < 0) key = -key;
    return key % TABLE_SIZE;
}

// Insert into hash table
void insert(int key, int index) {
    int h = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->index = index;
    newNode->next = hashTable[h];
    hashTable[h] = newNode;
}

// Search for a key in the hash table, return index or -1
int search(int key) {
    int h = hash(key);
    Node* curr = hashTable[h];
    while (curr) {
        if (curr->key == key) return curr->index;
        curr = curr->next;
    }
    return -1;
}

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    // Initialize hash table
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }

    // Two-sum logic
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        int idx = search(complement);

        if (idx != -1 && idx != i) {
            printf("%d %d", idx, i);
            return 0;
        }

        insert(nums[i], i);
    }

    // If no solution found
    printf("-1 -1");
    return 0;
}
