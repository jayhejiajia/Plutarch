
#include <stdlib.h>
#include "../include/command.h"
#define BUFFIZE_SIZE 255
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

char *CreateUpload(char *szData[],int nCount)
{
	int i = 0 ;
	char szPackageData[BUFFIZE_SIZE] ;
	memset(szPackageData,0,BUFFIZE_SIZE) ;

	strcat(szPackageData,"#") ;
	for(i=0;i<nCount;i++)
	{
		strcat(szPackageData,szData[i]) ;
		strcat(szPackageData,"#") ;
	}

	static char szCommand[BUFFIZE_SIZE] ;
	
	sprintf(szCommand,"#%d%s",DEVICE_UPLOAD,szPackageData) ;

	return szCommand ;

}
