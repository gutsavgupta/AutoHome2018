/*************************************************/
/**** This file contain genral utility function **/
/**** which can be commonly used in all module  **/
/*************************************************/

#ifndef _COMMON_UTILITY
#define _COMMON_UTILITY

/** Enum for defining errors **/
enum
{
    SUCCESS = 0,
    VALUE_ERROR,
    INDEX_ERROR
};

/** Enum for lock/unlock state **/
enum
{
    UNLOCK = 0,
    LOCK,
    INVALID
};

/** Typedef for data types **/
typedef unsigned int word;
typedef unsigned char byte;

/** Max and Min definition **/
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

/** MOD function **/
#define MOD(a,b) ((a)%(b))

#endif 