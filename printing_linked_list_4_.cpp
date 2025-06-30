#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

 
    Node* temp = head;
    // while(head != NULL)
    while(temp != NULL)
    {
        // cout << head->val << endl;
        // head = head->next; // Head first e A hobe than B, than C, than NULL;
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head; //If you want to reprint all of those things;
    while(temp != NULL)
    {
        // cout << head->val << endl;
        // head = head->next; // Head first e A hobe than B, than C, than NULL;
        cout << temp->val << endl;
        temp = temp->next;
    }


    
    return 0;
}