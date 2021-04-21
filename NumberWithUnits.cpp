#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>


using namespace ariel;




 NumberWithUnits ariel :: operator+ (NumberWithUnits x , NumberWithUnits y )
{


    return x;

}

NumberWithUnits ariel ::  operator- (NumberWithUnits x , NumberWithUnits y )
{

    return x;

}

NumberWithUnits ariel :: operator- (NumberWithUnits x)
{

    return x;
}

 NumberWithUnits ariel :: operator* (int z ,NumberWithUnits x)
{

    return x;
}

 bool ariel:: operator> (NumberWithUnits x , NumberWithUnits y )
{
    return true;
}

bool ariel :: operator<= (NumberWithUnits x , NumberWithUnits y )
{

    return true;
}

bool ariel :: operator==(NumberWithUnits x , NumberWithUnits y )
{

    return true;
}


bool ariel :: operator!= ( NumberWithUnits x , NumberWithUnits y )
{

return true;

}

NumberWithUnits ariel :: operator+= (NumberWithUnits x , NumberWithUnits y )
{

    return x;
}

 std::ostream& operator<<(std::ostream& out, NumberWithUnits x)
{
return out;
}

NumberWithUnits::NumberWithUnits(double a, string s) {}


std::ostream &ariel::operator<<(std::ostream &ostream, NumberWithUnits x)
{
    return ostream;
}

istringstream &ariel::operator>>(istringstream &input, NumberWithUnits x)
{
    return input;
}

void NumberWithUnits::read_units(ifstream &file)
{
}
