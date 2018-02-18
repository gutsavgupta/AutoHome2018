/*********************************************************************/
/**** This Program contains arduino code for door lock and close  ****/
/**** Author: Utsav                                               ****/
/**** Date  : 2/11/18                                             ****/
/**** Functionality: Door Lock APIS                               ****/
/*********************************************************************/
#ifndef _DOOR_LOCK_CONTROLLER
#define _DOOR_LOCK_CONTROLLER

/** Configuration libraries **/
#include "../PinConfiguration.h"
#include "../FeatureMacro.h"
#include "../Utility.h"

#ifdef DOOR_MODULE
/** Module specific libraries **/
#include <Arduino.h>
#include <Servo.h>

/** tDoorDiver class, contains variable and functionality
 ** required to control door locking system. This class
 ** implements api to get current status and drive motor
 ** to lock/unlock the door **/

class tDoorDriver
{
    public:
        /** Constructor **/
        tDoorDriver();

        /** TODO: call constructor with pin setup **/

        /** TODO: implement pin setup functions **/

        /** TODO: Lock Driver functions **/

        /** APIs for lock and unlock door **/
        byte LockDoor();

        byte UnLockDoor();

        /** APIs for get/set Door status  **/
        byte setDoorStatus();

        byte getDoorStatus();


    private:
        /** TODO: Add pin details **/
        byte dummyPin;

        /** State variables **/
        byte DoorState;
        byte LockState;
        word LastLockT;
        word LastUnlockT;

    protected:

}

#endif

#endif
