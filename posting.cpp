//-------------------------------------------
// Filename: posting.cpp
// Implementation of the Time class
//-------------------------------------------
#include <iostream>
#include <iomanip>
#include "posting.h"

#define POST_INT_LENGTH 4
#define POST_FLOAT_LENGTH 10
#define POST_FLOAT_PRECISION 3

using namespace std;

Posting::Posting()
{
   docid = -1;
   rtf = -1.0;
}

Posting::Posting(const int DocId, const float RTF)
{
   docid = DocId;
   rtf = RTF;
}

int Posting::GetDocId() const
{
   return docid;
}

int Posting::GetRTF() const
{
   return rtf;
}

void Posting::SetPosting(const int DocId, const float RTF)
{
   docid = DocId;
   rtf = RTF;
}

void Posting::Print() const
{
   cout << setw (POST_INT_LENGTH) << docid << " " 
        << setw (POST_FLOAT_LENGTH) << fixed << setprecision(POST_FLOAT_PRECISION) << rtf << endl;
}

void Posting::Print(ofstream &Dout) const
{
   Dout << setw (POST_INT_LENGTH) << docid << " " 
        << setw (POST_FLOAT_LENGTH) << fixed << setprecision(POST_FLOAT_PRECISION) << rtf << endl;
}

void Posting::Print(ofstream &Dout, const float IDF) const
{
   Dout << setw (POST_INT_LENGTH) << docid << " " 
        << setw (POST_FLOAT_LENGTH) << fixed << setprecision(POST_FLOAT_PRECISION) << rtf*IDF << endl;
}
