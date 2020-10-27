
#include <vector>
#include <string>
#include <map>
#include <iostream>

#include <tst_test/tst_test.h>

int main(int argc, char *argv[])
{
    std::cout << "This is a test!" << std::endl;

    CA lA;
    lA.toCode();


    std::vector<int>    lV;
    lV.push_back(19);
    lV.push_back(20);

    std::string lstr="abced";
    lstr.c_str();
    std::cout << lstr << std::endl;


    std::map<int, std::string> lmap;
    lmap.insert( std::pair<int, std::string>(10, "abcde"));

//*/
    return 0;
}
