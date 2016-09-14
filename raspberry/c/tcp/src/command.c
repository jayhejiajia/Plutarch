
#include <stdlib.h>
#include "../include/command.h"

const int DEVICE_ONLINE= 1001 ;
const int DEVICE_BEAT =  1004 ;
const int DEVICE_UPLOAD= 1003 ;
const int DEVICE_CONTROL= 1002 ;

void CreateOnLine(char *szDeviceId,char *szCommand)
{
	if(!szDeviceId)
	{
		return  ;
	}

	sprintf(szCommand,"#%d#%s#",DEVICE_ONLINE,szDeviceId) ;

	return  ;
}

void  CreateBeat(char *szCommand)
{
	if(!szCommand)
		return  ;

	sprintf(szCommand,"#%d#",DEVICE_BEAT) ;

	return  ;
}
