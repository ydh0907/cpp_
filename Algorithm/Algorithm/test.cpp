#include "iostream"
#include "vector"

using namespace std;

int main() {
	vector<int> v{ 1, 2, 3, 4, 5, 6 };

	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		if (i == v.begin() + 3) {
			i = v.erase(i);
		}
		cout << *i << endl;
	}
}