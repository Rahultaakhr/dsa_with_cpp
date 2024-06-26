#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <deque>

int main()
{
    //     vector<int> a;
    //     a.push_back(1);
    //     a.push_back(2);
    //     a.push_back(14);
    //     a.push_back(13);

    //    vector<int>::iterator it;

    //    it=find(a.begin(),a.end(),104);
    //    cout<< *it<< endl;
    // map<int, string> name;
    // map<int,string>::iterator it;

    // name[1] = "Rahul";
    // name[5] = "Manish";
    // name[3] = "Naveen";
    // name[4] = "Vikash";

    // for ( it=name.begin(); it!=name.end(); it++)
    // {
    //    cout<<  it->second<< endl;
    // }

//     list<int> l;
//     l.push_back(6);
//     l.push_front(3);
//     l.push_front(4);
//     l.pop_back();
// for (int i:l)
// {
//   cout<< i<< endl;
// }

deque<int> d;
d.push_back(4);
d.push_back(2);
d.push_back(1);
d.push_front(1);

for (int i:d)
{
    cout<< i<< " ";
}

}
