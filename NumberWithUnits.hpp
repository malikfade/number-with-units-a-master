#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;



namespace ariel{
class NumberWithUnits
{

private:

double x;
 string str;

public:

 NumberWithUnits( double  z ,string s );
 static void read_units(ifstream &file);
 friend NumberWithUnits operator+ (NumberWithUnits x , NumberWithUnits y );
 friend NumberWithUnits operator- (NumberWithUnits x , NumberWithUnits y );
 friend NumberWithUnits operator- (NumberWithUnits x);
 friend NumberWithUnits operator* (int z ,NumberWithUnits x);
 friend bool operator> (NumberWithUnits x , NumberWithUnits y );
 friend bool operator<= (NumberWithUnits x , NumberWithUnits y );
 friend bool operator== (NumberWithUnits x , NumberWithUnits y );
 friend NumberWithUnits operator+= (NumberWithUnits x , NumberWithUnits y );
 friend ostream &operator<<(ostream &os, NumberWithUnits a);
 friend istringstream &operator>>(istringstream &sample_input, NumberWithUnits a);
 friend bool operator!=(NumberWithUnits a, NumberWithUnits b);





};


};