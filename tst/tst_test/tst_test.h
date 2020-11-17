#ifndef  __TST_TEST_H__
#define  __TST_TEST_H__

#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>

// Class CTst : TODO add class brief here
template<typename tType, size_t tBufSize>
class CTst
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTst():miA(10),miB(20){};
    // Destruct define
    inline virtual ~CTst(){};

private:
    // Copy construct define
    inline CTst             ( const CTst &obj ){};
    // Assignment operation
    inline CTst& operator = ( const CTst &obj ){return *this;};
// }}} ! Construct & Destruct

// Menbers   : {{{
protected:
    int         miA;
    int         miB;
// }}} ! Members

// Methods   : {{{
public:
    inline virtual void Print( void );
// }}} ! Methods

}; // }}} End of class CTst

// Class CUsrTst : public CTst : TODO add class brief here
class CUsrTst : public CTst<CUsrTst,1024>
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CUsrTst():miC(30){};
    // Destruct define
    inline virtual ~CUsrTst(){};

private:
    // Copy construct define
    inline CUsrTst             ( const CUsrTst &obj ){};
    // Assignment operation
    inline CUsrTst& operator = ( const CUsrTst &obj ){return*this;};
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    int         miC;
// }}} ! Members

// Methods   : {{{
public:
    inline virtual void Print( void );
// }}} ! Methods

}; // }}} End of class CUsrTst : public CTst

#include "tst_test.h.inl"

#endif // ! __TST_TEST_H__
