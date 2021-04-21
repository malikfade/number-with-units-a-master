#include "doctest.h"
#include <iostream>
#include "NumberWithUnits.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>


using namespace ariel;

TEST_CASE("Tests")
{

 
 ifstream units_file{"units.txt"};
 NumberWithUnits::read_units(units_file);


 NumberWithUnits Distance1(10,"km");
 NumberWithUnits Distance2(5,"km");
 NumberWithUnits ans_sumD(15,"km");
 NumberWithUnits ans_subD(5,"km");



 NumberWithUnits sumD = Distance1 + Distance2;
 NumberWithUnits subD = Distance1 - Distance2;

CHECK(sumD == ans_sumD);
CHECK(subD == ans_subD);
CHECK(Distance1 != Distance2);
CHECK(ans_sumD > Distance1 );




 NumberWithUnits w1(135,"kg");
 NumberWithUnits w2(10,"kg");
 NumberWithUnits w3(20,"ton");
 NumberWithUnits w4(5,"ton");
 NumberWithUnits ans_sumW(145,"kg");
 NumberWithUnits ans_subW(125,"kg");



 NumberWithUnits sumW = w1 + w2;
 NumberWithUnits subW = w1 - w2;


  CHECK(sumW == ans_sumW);
  CHECK(subW== ans_subW);
  CHECK(w2 <= w1);
  CHECK(sumW <= ans_sumW);
  CHECK(ans_sumW > w1 );
  CHECK(ans_sumW!= ans_subW);

    Distance1 = 12 * Distance2;
    NumberWithUnits VAR (60,"km");
    CHECK(Distance1 == VAR);


    w1 = -w1;
    NumberWithUnits VAR1(-135 , "kg");
    CHECK(w1==VAR1);
    CHECK(VAR1 != VAR);

    w2 = -w2;
    NumberWithUnits VAR2(-10 , "kg");
    CHECK(w2 == VAR2);
    CHECK(VAR1 != VAR2);
    CHECK(VAR2 <= VAR2);


    w3 = -w3;
    NumberWithUnits VAR3(-20 , "ton");
    CHECK(w3 == VAR3);
    CHECK(VAR2 != VAR3);
    CHECK(VAR2 <= VAR2);

    w4 = -w4;
    NumberWithUnits VAR4(-5 , "ton");
    CHECK(w4 == VAR4);
    CHECK(VAR3 != VAR4);
    CHECK(VAR4 <= VAR4);




}