/*
- unordered set uses hashing 
- stores element in no particular order
- no duplicate keys present
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(25);
    s.insert(15);
    s.insert(45);
    for(int x: s){
        cout<<x<<" ";
    }

    for(auto it = s.begin(); it != s.end(); it++){ //iterates in any particular order
    //outputs a permutation 
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<s.size()<<" "; //outputs size
    s.clear(); //clears the unordered set
    if(s.find(15) == s.end()){ 
        //find function checks whether the element is present
        //in the unordered set or not and if it does, returns its position
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    //count function returns either 1 or 0 depending on whether an element is present in the set or not
    if(s.count(15)){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }

    //erase function is used to remove an item or a range of items
    auto it = s.find(10);
    s.erase(it);
    cout<<s.size()<<" ";

    s.erase(s.begin(), s.end()); //removes everything before end iterator
    cout<<s.size()<<" ";
    return 0;
}