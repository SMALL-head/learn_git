#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream fin("hello.txt");
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }

  return 0;
}
