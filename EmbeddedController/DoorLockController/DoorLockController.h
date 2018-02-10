/*********************************************************************/
/**** This Program contains arduino code for door lock and close  ****/
/**** Author: Utsav                                               ****/
/**** Date  : 2/11/18                                             ****/
/**** Functionality: Door Lock APIS                               ****/
/*********************************************************************/
#include "../PinConfiguration.h"
#include "../FeatureMacro.h"

#ifdef DOOR_MODULE
#include <avr/interrupt.h>
#include <Arduino.h>
#include <Servo.h>

typedef struct
{
    int lastLockTime;
    int lastUnlockTime;
    int currentState;
}DOOR_STS;

/** APIS for lock and unlock door **/
int LockDoor(int time);

int UnLockDoor(int time);

/** APIS for get/set lock status  **/
int setDoorStatus(DOOR_STS status);

DOOR_STS getDoorStatus();

#endif