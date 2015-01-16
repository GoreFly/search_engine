//-----------------------------------------
// Filename: posting.h
// Class to implement a very simple Posting class
//-----------------------------------------
#include <fstream>
using namespace std;

class Posting
{
public:
  // constructors and destructors
  // default constructor
  Posting();
  Posting(const int DocId, const float RTF);

  // getters and setters
  int GetDocId() const;
  int GetRTF() const;
  void SetPosting(const int DocId, const float RTF);

  // useful methods
  void Print() const;
  void Print(ofstream &Dout) const;
  void Print(ofstream &Dout, const float IDF) const;

private:
  int docid;
  float rtf;
};
