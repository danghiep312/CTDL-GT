#include <bits/stdc++.h>
using namespace std;

int minn;

class Node
{
public:
    int coeff, power;
    Node *next;
    Node(int coeff, int power)
    {
        this->coeff = coeff;
        this->power = power;
        this->next = NULL;
    }
};

void printList(Node *head)
{
    cout << "Linked List" << endl;
    while (head != NULL)
    {
        cout << " " << head->coeff << "x"
             << "^" << head->power;
        head = head->next;
    }
}

void addPolynomials(Node *head1, Node *head2)
{

    if (head1 == NULL && head2 == NULL)
        return;
    else if (head1->power == head2->power)
    {
        cout << head1->coeff + head2->coeff << "*x^" << head1->power;
        if (head1->power != minn) {
            cout << " + ";
        }
        addPolynomials(head1->next, head2->next);
    }
    else if (head1->power > head2->power)
    {
        cout << head1->coeff << "*x^" << head1->power;
        if (head1->power != minn) {
            cout << " + ";
        }
        addPolynomials(head1->next, head2);
    }
    else
    {
        cout << head2->coeff << "*x^" << head2->power;
        if (head2->power != minn) {
            cout << " + ";
        }
        addPolynomials(head1, head2->next);
    }
}

void insert(Node *head, int coeff, int power)
{
    Node *new_node = new Node(coeff, power);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new_node;
}

void tach(vector<pair<int, int>> &aa, string a)
{
    int i = 1;
    int coeff = 0;
    int power = 0;
    while (i < a.size())
    {
        if (a[i - 2] == '+' && a[i - 1] == ' ')
        {
            while (a[i] <= '9' && a[i] >= '0' && i < a.size())
            {
                coeff = coeff * 10 + (a[i] - '0');
                i++;
            }
        }
        if (a[i - 1] == '^')
        {
            while (a[i] <= '9' && a[i] >= '0' && i < a.size())
            {
                power = power * 10 + (a[i] - '0');
                i++;
            }
            aa.push_back({coeff, power});
            coeff = 0;
            power = 0;
        }
        i++;
    }
}

void taobieuthuc(Node *h, vector<pair<int, int>> aa)
{
    for (int i = 0; i < aa.size(); i++)
    {
        minn = min(minn, aa[i].second);
        if (i == 0)
            continue;
        insert(h, aa[i].first, aa[i].second);
    }
}

void solve()
{
    minn = INT_MAX;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    a = "+ " + a;
    b = "+ " + b;
    vector<pair<int, int>> aa, bb;
    tach(aa, a);
    tach(bb, b);
    Node *h1 = new Node(aa[0].first, aa[0].second);
    taobieuthuc(h1, aa);
    Node *h2 = new Node(bb[0].first, bb[0].second);
    taobieuthuc(h2, bb);
    // printList(h1);
    // cout << endl;
    // printList(h2);
    addPolynomials(h1, h2);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << endl;
    }
}