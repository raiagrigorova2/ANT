#ifndef IVP
#define IVP

#include "CException.h"

class InvalidPosition : public CException{
public:
    InvalidPosition(){message = "The position you have chosen is invalid.";}
};
#endif // IVP
