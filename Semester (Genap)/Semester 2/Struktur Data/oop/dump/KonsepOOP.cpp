#include <iostream>

using namespace std;

class Contoh {

  private:
    string text;

  public:
    Contoh(string text) {
      this->text = text;
    }

    string getText() {
      return text;
    }
};

int main() {

  Contoh contoh1("Hello World = 1");
  Contoh contoh2("Hello World = 2");
  cout << contoh1.getText() << endl;
  cout << contoh2.getText();

  return 0;
}
