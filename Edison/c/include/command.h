#ifndef RASPBERRY_INCLUDE_COMMAND_H
#define RASPBERRY_INCLUDE_COMMAND_H


void CreateBeat(char *szCommand) ;
void CreateOnLine(char *szDeviceId,char *szCommand) ;
char *CreateUpload(char *szData[],int nCount) ;

#endif
