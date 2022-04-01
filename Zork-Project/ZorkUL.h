#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {

    friend class MainWindow;
private:
	Parser parser;
	Room *currentRoom;
    vector <Room*> Roomlist;
    void goRoom(string direction);

    //////////////////////////////////
    void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void printHelp();
    void createItems();
    void displayItems();

public:
	ZorkUL();
	void play();
	string go(string direction);
};

#endif /*ZORKUL_H_*/
