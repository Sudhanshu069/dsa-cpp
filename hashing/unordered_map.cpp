/*
- unordered map is used for storing key value pairs
- it does not store elements in any order
- it uses hashing
- fast operations
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20; // member access
    m["ide"] = 30;

    m.insert({"courses", 15}); // standard function for insertion
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n"; // first: key; second: value
        // orderless
    }
    // find() : search whether a key is present or not: if not, it returns end() iterator{iterator at the end of the map, after the last element}
    if (m.find("ide") != m.end())
    {
        cout << "Found \n";
    }
    else
    {
        cout << "Not Found"
             << "\n";
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << "\n";
    }

    // count() is used to find whether an element is present in the map or not; return type is not boolean

    if (m.count("ide") > 0)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    cout << m.size() << " ";

    m.erase("ide");
    m.erase(m.begin(), m.end());

    cout<<m.size()<<" ";

    return 0;
}