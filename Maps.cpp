#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
    // creation
    unordered_map<string , int> m;

    //insertion

    //1
    pair<string , int> p = make_pair("babbar" , 3);
    m.insert(p);

    //2
    pair<string , int> pair2("love" , 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    // Searching
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    //unknown element 
    cout << m["unknownKey"] << endl;
    cout << m.at("unknownKey") << endl;

    // To check size 
    cout << m.size() << endl;

    // To check whether a key is present or not 
    cout << m.count("bro") << endl;


    // erase 
    m.erase("love");
    cout << m.size() << endl;


    //iterator 
    unordered_map<string , int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }



      
 







    return 0;

}

