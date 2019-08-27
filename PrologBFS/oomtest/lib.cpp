#include <vector>
#include <emscripten/bind.h>
using namespace emscripten;
using namespace std;

class Test {
public:
	vector<int> vec;
	
	void add() {
		for (int i = 0; i < 30000000; i++) {
			vec.push_back(10000000);
		}
		
		vec.clear();
	}
};

// Binding code
EMSCRIPTEN_BINDINGS(Test) {
  class_<Test>("Test")
    .constructor()
    .function("add", &Test::add)
    ;
}
