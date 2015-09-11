#include <iostream>
#include <stack>

using namespace std;

int main()
{
 cout << "Stack declared with: stack<int>"  << endl;
 stack<int> s1;

 s1.push(30);
 s1.push(20);
 s1.push(40);
 s1.push(10);
 s1.push(50);
 
 while (!s1.empty())
    {
     cout << "Stack Value: " << s1.top() << endl;
     s1.pop();
    }

 cout << endl;
 cout << "Stack declared with: stack<int, deque<int> >"  << endl;
 stack<int, deque<int> > s2;

 s2.push(31);
 s2.push(21);
 s2.push(41);
 s2.push(11);
 s2.push(51);
 
 while (!s2.empty())
    {
     cout << "Stack Value: " << s2.top() << endl;
     s2.pop();
    }

 cout << endl;
 
// The following does not work, contrary to published reports
// cout << "Stack declared with: stack<deque<int> >"  << endl;
// stack<deque<int> > s3;
//
// s3.push(32);
// s3.push(22);
// s3.push(42);
// s3.push(12);
// s3.push(52);
// 
// while (!s3.empty())
//    {
//     cout << "Stack Value: " << s3.top() << endl;
//     s3.pop();
//    }

}