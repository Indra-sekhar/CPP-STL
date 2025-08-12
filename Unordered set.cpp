#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(20); // duplicates will be  ignored
	
	cout<<"elements ";
	// Printing elements (orderd not guaranteed)
	for(auto i : s){
	    cout<<i<<" ";
	}
	
	// Searching elements
	
	// Search element
    if (s.find(20) != s.end())
        cout << "20 found\n";
    else
        cout << "20 not found\n";

    // Erase element
    s.erase(10);

    // Size
    cout << "Size: " << s.size() << "\n";

    return 0;

}
