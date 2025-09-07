#include <vector>
using namespace std;

vector<int> v{1,2,3,4,5,6,7,8};             // empty vector
vector<int> v2(5);         // vector of size 5, default values = 0
vector<int> v3(5, 10);     // vector of size 5, each element = 10
vector<int> v4{1,2,3,4};   // initialize with values

int main(){
  // Iterators
  // Forward Iterator
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++) {
      cout << *it << " ";
  }
  //Reverse Iterator
  vector<int>::reverse_iterator rit;
  for(rit = v.rbegin(); rit != v.rend(); rit++) {
      cout << *rit << " ";
  }
 // Constant Iterator
  vector<int>::const_iterator cit;
  for(cit = v.cbegin(); cit != v.cend(); cit++) {
      cout << *cit << " ";  // read-only
  }
  // Access Elements
  v[index];         // access element, no bounds check
  v.at(index);      // access element, throws error if out-of-range
  v.front();        // first element
  v.back();         // last element
  v.data();         // pointer to underlying array

  //Capacity & Info
  v.size();         // number of elements
  v.capacity();     // allocated memory
  v.empty();        // true if vector is empty
  v.reserve(n);     // allocate memory for n elements
  v.shrink_to_fit(); // reduce capacity to current size

  //   Modifiers
  // Adding / Removing Elements
  v.push_back(x);             // add element at end
  v.pop_back();               // remove last element
  v.insert(v.begin() + i, x); // insert at index i
  v.erase(v.begin() + i);    // remove element at index i
  v.erase(v.begin(), v.begin() + n); // remove range of elements
  v.clear();                  // remove all elements
  v.swap(v2);                 // swap contents with another vector
  v.resize(n, val);           // resize to n elements, fill new with val

  

}
