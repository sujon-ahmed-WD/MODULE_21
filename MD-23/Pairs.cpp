#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int num;

    Student(string name, int num)
    {
        this->name = name;
        this->num = num;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.name > r.name)
            return true;
        else if (l.name < r.name)
            return false;
        else
            return l.num < r.num;
    }
};

int main()
{

    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        Student obg(name, num);
        pq.push(obg);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().num << endl;
        pq.pop();
    }
    return 0;
}
