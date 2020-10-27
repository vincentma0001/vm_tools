#ifndef  __TST_TEST_H__
#define  __TST_TEST_H__

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
    inline explicit CA(){};
    // Destruct define
    inline virtual ~CA(){};

private:
    // Copy construct define
    inline CA             ( const CA &obj ){  *this = obj; };
    // Assignment operation
    inline CA& operator = ( const CA &obj ){ return *this; };
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

#endif // ! __TST_TEST_H__
