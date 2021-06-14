#ifndef DS_MANAGER_H_
#define DS_MANAGER_H_

#include "dsunion.h"

//class that manages a dealership
// using union find
class DSManager: public DSUnion{
public:
    // method used to sell num_sales of car type type_id
    // in agency agecy_id
    bool SellCar(int agency_id, int type_id, int num_sales);
    // unites two agencies
    bool UniteAgencies(int agency_id1, int agency_id2);
    // returns the "i"th sold car,
    // 0 being least sold
    int GetIthSoldType(int agency_id, int i);
};




#endif //DS_MANAGER_H_