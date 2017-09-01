#include <string>
using namespace std;

#define mfPointer MyFile *
#define sPointer string *

class MyFile {
  public:
    MyFile(string pwd) {
        size_t slash = pwd.find_last_of('/') + 1;
        this->location = pwd.substr(0, slash);
        this->fileName = pwd.substr(slash, pwd.length());
    }
    string getLocation() { return this->location; }
    string getFileName() { return this->fileName; }
    void setLocation(string loc) { this->location = loc; }
    void setFileName(string fName) { this->fileName = fName; }

  private:
    string location;
    string fileName;
};