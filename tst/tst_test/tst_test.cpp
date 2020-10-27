
#include <string>
#include <iostream>
#include <map>

// ================================================================================================ //
// ==  Class CA : TODO add class brief here                                                      == //
// ------------------------------------------------------------------------------------------------ //
class CA
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CA();
    // Destruct define
    inline virtual ~CA();

private:
    // Copy construct define
    inline CA             ( const CA &obj );
    // Assignment operation
    inline CA& operator = ( const CA &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
public:
    int miA;
    int miB;
    char* mszC;
    /* TODO Add class's menbers here */
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    char* toString(){return nullptr;};
    int toCode(){return 10;};
    /* TODO Add class's Methods here */
// }}} ! Methods

};
// }}} ! [ class CA ]

int main(int argc, char *argv[])
{
    std::cout << "This is a test!" << std::endl;

    std::string lstr="abced";
    std::cout << lstr << std::endl;
    

    std::map<int, std::string> lmap;

    return 0;
}
