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
    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;

    // cout << (*a.next).val << endl;
    cout << a.next->val << endl; //Printing the value of b;
    cout << a.next->next->val << endl; //Printing the value of c;



    return 0;
}