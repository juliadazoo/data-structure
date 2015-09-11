#include <iostream>
#include <queue>

using namespace std;

int main()
{
 cout << "Queue declared with: queue<int>"  << endl;
 queue<int> q1;

 q1.push(30);
 q1.push(20);
 q1.push(40);
 q1.push(10);
 q1.push(50);
 
 while (!q1.empty())
    {
     cout << "Queue Value: " << q1.front() << endl;
     q1.pop();
    }

 cout << endl;
 cout << "Queue declared with: queue<int, deque<int> >"  << endl;
 queue<int, deque<int> > q2;

 q2.push(31);
 q2.push(21);
 q2.push(41);
 q2.push(11);
 q2.push(51);
 
 while (!q2.empty())
    {
     cout << "Queue Value: " << q2.front() << endl;
     q2.pop();
    }

 cout << endl;
 
// The following does not work, contrary to published reports
// cout << "Queue declared with: queue<deque<int> >"  << endl;
// queue<deque<int> > q3;
//
// q3.push(32);
// q3.push(22);
// q3.push(42);
// q3.push(12);
// q3.push(52);
// 
// while (!q3.empty())
//    {
//     cout << "Queue Value: " << q3.front() << endl;
//     q3.pop();
//    }

}