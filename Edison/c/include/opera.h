#ifndef RASPBERRY_INCLUDE_OPERA_H
#define RASPBERRY_INCLUDE_OPERA_H



extern int CreateSocket(char *szServerIP, int nPort) ;
extern long  SelectRead(int nSocketfd,int nMaxFd,fd_set *fdRead,struct timeval *timeout,char *szRecv,int nRecvBuf) ;

#endif