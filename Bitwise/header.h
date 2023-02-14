#include <stdio.h>
#include <stdlib.h>
#define SETBIT(var,bit) var=var|(1<<bit)
#define CLEARBIT(var,bit) var=var&~(1<<bit)
#define READBIT(var,bit) ((var>>bit)&1)
#define TOGGLEBIT(var,bit) var=var^(1<<bit)



typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;
typedef signed long long sint64;
