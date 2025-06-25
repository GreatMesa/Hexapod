#include "leg.hpp"

Leg::Leg(int CoxaPin, float iCoxaLength, int FemurPin, float iFemurLength, int TibiaPin, float iTibiaLength)
{
    //Initialized / Attached Servos
    Coxa.attach(CoxaPin);
    Femur.attach(FemurPin);
    Tibia.attach(TibiaPin);
    //Initialized Servo Lengths
    CoxaLength = iCoxaLength;
    FemurLength = iFemurLength;
    TibiaLength = iTibiaLength;
}

void Leg::setAngles(float iCoxaAngle, float iFemurAngle, float iTibiaAngle)
{
    Coxa.write(iCoxaAngle);
    Femur.write(iFemurAngle);
    Tibia.write(iTibiaAngle);
}