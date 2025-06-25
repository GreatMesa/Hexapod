#include <Servo.h>

class Leg
{
private:
    Servo Coxa;
    Servo Femur;
    Servo Tibia;
    float CoxaLength;
    float FemurLength;
    float TibiaLength;
public:
    /*
    @brief Constructor for Leg Class.
    @param CoxaPin Coxa Servo's Pin.
    @param iCoxaLength Coxa's Length.
    @param FemurPin Femur Servo's Pin.
    @param iFemurLength Femur's Length.
    @param TibiaPin Tibia Servo's Pin.
    @param iTibiaLength Tibia's Length.
     */
    Leg(int CoxaPin, float iCoxaLength, int FemurPin, float iFemurLength, int TibiaPin, float iTibiaLength);

    /*
    @brief Sets angle values for the 3 Servos
    @param iCoxaAngle Servo angle for the Coxa.
    @param iFemurAngle Servo angle for the Femur.
    @param iFemurAngle Servo angle for the Femur.
    */
    void setAngles(float iCoxaAngle, float iFemurAngle, float iTibiaAngle);
};