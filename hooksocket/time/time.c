#include "sys/resource.h"

//This function will override the one in /usr/lib/libSystem.dylib

time_t time(time_t *tloc){
//January 1st,2013
struct tm timeStruct;
timeStruct.tm_year= 2013-1900;
timeStruct.tm_mon = 0;
timeStruct.tm_mday = 1;
timeStruct.tm_hour = 0;
timeStruct.tm_min = 0;
timeStruct.tm_sec = 0;
timeStruct.tm_isdst = -1;

*tloc = mktime(&timeStruct);

return *tloc;
}