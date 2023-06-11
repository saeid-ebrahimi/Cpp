// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;
//command interface for commands must implement pure virtual function execute.
class Command
{
public:
	virtual void execute() = 0;

};
//the TV
class Television
{
public:
	//TV constructor and channel to 0.
	Television() :volume(0), channel(0){}
	void turnOn() 
	{
		cout << "the television is on" << endl;
	}
	void turnOff()
	{
		cout << "The television is off" << endl;
	}
	void volumeUp()
	{
		cout << "Turn volume up level is " << ++volume << endl;
	}
	void volumeDown()
	{
		cout << "Turn volume down level is " << --volume << endl;
	}
	void channelUp()
	{
		cout << "Turn channel up level is " << ++channel << endl;
	}
	void channelDown()
	{
		cout << "Turn channel down level is " << --channel << endl;
	}
	
private:
	int volume;
	int channel;
};
// Tuen tv on.
class TVOnCommand
	: public Command
{
public:
	TVOnCommand(Television& tele) :tv(tele) {}
	virtual void execute()
	{
		tv.turnOn();
	}

private:
	Television& tv;
};
//Turn tv off.
class TVOffCommand
	:public Command
{
public:
	TVOffCommand(Television& tele):tv(tele){}
	virtual void execute()
	{
		tv.turnOff();
	}

private:
	Television& tv;
};
//Turn tv volume up
class VolumeUpCommand
	:public Command
{
public:
	VolumeUpCommand(Television& tele):tv(tele){}
	virtual void execute()
	{
		tv.volumeUp();
	}

private:
	Television& tv;
};

//Turn tv volume down
class VolumeDownCommand : public Command {
public:

	VolumeDownCommand(Television& tele) :tv(tele) {}

	virtual void execute() {
		tv.volumeDown();
	}

private:
	Television& tv;
};


//Turn tv channel up.
class ChannelUpCommand : public Command {
public:

	ChannelUpCommand(Television& tele) :tv(tele) {}

	virtual void execute() {
		tv.channelUp();
	}

private:
	Television& tv;
};

//Turn tv channel down.
class ChannelDownCommand : public Command {
public:

	ChannelDownCommand(Television& tele) :tv(tele) {}

	virtual void execute() {
		tv.channelDown();
	}

private:
	Television& tv;
};
class TVRemote
{
public:
	TVRemote(Command& volumeUpCmd, Command& volumeDownCmd,Command& channelUpCmd,Command&  channelDownCmd, Command& tvOnCmd, Command& tvOffCmd)
		:volumeUpCommand(volumeUpCmd),volumeDownCommand(volumeDownCmd), channelDownCommand(channelDownCmd),channelUpCommand(channelUpCmd),tvOffCommand(tvOffCmd),tvOnCommand(tvOnCmd)
	{}
	inline void tvOn() { tvOnCommand.execute(); }
	inline void tvOff() { tvOffCommand.execute(); }
	inline void volumeUp() { volumeUpCommand.execute(); }
	inline void volumeDown() { volumeDownCommand.execute(); }
	inline void channelUp() { channelUpCommand.execute(); }	
	inline void channelDown() { channelDownCommand.execute(); }
private:
	Command& tvOnCommand;
	Command& tvOffCommand;
	Command& channelUpCommand;
	Command& channelDownCommand;
	Command& volumeUpCommand;
	Command& volumeDownCommand;
};
int main()
{
	Television myTV;
	TVOnCommand tvOn(myTV);
	TVOffCommand tvOff(myTV);
	ChannelDownCommand chDownCmd(myTV);
	ChannelUpCommand chUpCmd(myTV);
	VolumeDownCommand volDownCmd(myTV);
	VolumeUpCommand volUpCmd(myTV);

	TVRemote remote(volUpCmd, volDownCmd, chUpCmd, chDownCmd, tvOn, tvOff);

	remote.tvOn();
	remote.channelUp();
	remote.channelUp();
	remote.channelUp();
	remote.volumeUp();
	remote.volumeUp();
	remote.channelDown();
	remote.volumeDown();
	remote.tvOff();

}
