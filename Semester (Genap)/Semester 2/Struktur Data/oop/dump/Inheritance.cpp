#include <iostream>

using namespace std;

class OpeartingSystem {
  private:
    string tipe[2] = {
      "64-bit", "32-bit"
    };

  public:
    OpeartingSystem() {
      cout << "Bit: " << this->tipe[0] << endl;
    }
};

class Windows: public OpeartingSystem {
  public:
    string os_name = "Windows";
    string getOsName() {
      return this->os_name;
    }
};

int main() {

  Windows window;
  cout << "Operating System Name: " << window.getOsName();

  return 0;
}
