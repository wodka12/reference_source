#pragma once
#include "Act.h"
class TcpListenSocket;
class TcpSocket;
class Acceptor : public Actor
{
public:
	Acceptor(){};
public:
	void ProcEvent(Act* act, DWORD bytes_transferred);
	void ProcError(Act* act, DWORD error);
	void Init(TcpListenSocket* tcplistensocket, Proactor* proactor);
	void Register(TcpSocket& acceptsocket);
public:
	TcpListenSocket* TcpListenSocket_;
};
