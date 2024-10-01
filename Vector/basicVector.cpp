#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<string> name = {"I Love Madison Beer"};
    int nameSz = 11;

    vector<int> nums;

    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(34);



    for(string value : name) {
        cout << value << endl;
    }

    cout << name.size() << endl;

    name.push_back("For Eternity");

    for(string value : name) {
        cout << value << " ";
    }

    cout << endl;

    name.pop_back();
    name.push_back("For Forever!");


    for(string value : name) {
        cout << value << " ";
    }

    cout << name.front() << endl;

    cout << name.back() << endl;

    cout << name.at(1) << endl;

    cout << nums.size() << endl;
    cout << nums.capacity() << endl;

    nums.push_back(343);
    nums.push_back(645);

    cout << nums.size() << endl;
    cout << nums.capacity() << endl;
}