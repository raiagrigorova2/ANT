#ifndef CPSEX
#define CPSEX

class CapacityException : public CException{
public:
    CapacityException(){message = "Capacity exception. size of the vector is smaller than the capacity";}
};


#endif // CPSEX
