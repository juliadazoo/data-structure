#include <iostream>
#include <vector>

using namespace std;

int main()
{
 // v1 uses default and automatic allocation of space
 cout << "Uses default constructor and psuh_back()" << endl;
 vector<int> v1;

 for (int i = 0; i < 100; i++)
    {
     cout << "Size: " << v1.size() << ", Capacity: " << v1.capacity() << 
	     ", Max Size: " << v1.max_size() << endl;
     v1.push_back(i);
    }

 cout << "Size: " << v1.size() << ", Capacity: " << v1.capacity() << 
         ", Max size: " << v1.max_size() << endl;


 // print out values in vector
 for (int i = 0; i < 100; i++)
     {
      if (i%10 == 0)
         cout << endl << "v1[" << i << "]: ";
      cout.width(5);
      cout << v1[i];
     }
 cout << endl;

 // print out values in vector using an iterator
 vector<int>::iterator iter1;
 int count=0;
 for (iter1 = v1.begin(); iter1 != v1.end(); ++iter1)
     {
      if (count%10 == 0)
         cout << endl << "v1[" << count << "]: ";
      count++;
      cout.width(5);
      cout << *iter1;
     }
 cout << endl << endl;

 // v2 begins with space allocated for 25 elements
 cout << "performing alloction with construction and push_back()" << endl;
 vector<int> v2(25);

 for (int i = 0; i < 100; i++)
    {
     cout << "Size: " << v2.size() << ", Capacity: " << v2.capacity() << 
	     ", Max Size: " << v2.max_size() << endl;
     v2.push_back(i);
    }

 cout << "Size: " << v2.size() << ", Capacity: " << v2.capacity() << 
         ", Max size: " << v2.max_size() << endl;

 // print out values in vector
 for (int i = 0; i < 100; i++)
     {
      if (i%10 == 0)
         cout << endl << "v2[" << i << "]: ";
      cout.width(5);
      cout << v2[i];
     }
 cout << endl;

 // print out values in vector using an iterator
 vector<int>::iterator iter2;
 count=0;
 for (iter2 = v2.begin(); iter2 != v2.end(); ++iter2)
     {
      if (count%10 == 0)
         cout << endl << "v2[" << count << "]: ";
      count++;
      cout.width(5);
      cout << *iter2;
     }
 cout << endl << endl;


 // Note:  The following code acts a little wierd

 // v3 begins with space allocated for 25 elements
 cout << "Performing alloaction with constructor and reserve(), "
      << "without push_back()" << endl;
 vector<int> v3(25);

 for (int i = 0; i < 100; i++)
    {
     cout << "i: " << i << ", Size: " << v3.size() << ", Capacity: " 
          << v3.capacity() << ", Max Size: " << v3.max_size() << endl;
     if (i == v3.capacity())
        {
         v3.reserve(v3.capacity() + 25);
        }
     v3[i] = i;
    }

 cout << "Size: " << v3.size() << ", Capacity: " << v3.capacity() << 
         ", Max size: " << v3.max_size() << endl;

 // print out values in vector
 for (int i = 0; i < 100; i++)
     {
      if (i%10 == 0)
         cout << endl << "v3[" << i << "]: ";
      cout.width(5);
      cout << v3[i];
     }
 cout << endl;

 // print out values in vector using an iterator
 vector<int>::iterator iter3;
 count=0;
 for (iter3 = v3.begin(); iter3 != v3.end(); ++iter3)
     {
      if (count%10 == 0)
         cout << endl << "v3[" << count << "]: ";
      count++;
      cout.width(5);
      cout << *iter3;
     }
 cout << endl << endl;


}