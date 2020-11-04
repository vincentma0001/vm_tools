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
    char  miA;
    char  miA1;
    short miB;
    int miC;
    int miD;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    char* toString(){return nullptr;};
    int toCode(){return 10;};
// }}} ! Methods

};
// }}} ! [ class CA ]

#endif // ! __TST_TEST_H__
