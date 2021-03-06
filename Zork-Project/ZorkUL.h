#ifndef ZORKUL_H_
#define ZORKUL_H_
#include <QtDebug>
#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {

    friend class MainWindow; //frienship
private:

	Parser parser;
	Room *currentRoom;
    vector <Room*> Roomlist;
    vector <Item> Inventory;


    void goRoom(string direction);

    //////////////////////////////////
    void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void printHelp();
    void createItems();
    void displayItems();

public:
    void addtoinventory(Item item);
	ZorkUL();
	void play();
	string go(string direction);
    int step :4;
};

class MyException{
public:
    const char * what() const throw()
    {
        qDebug()<< "no exit here";
        return "no exit";
    }
};

#endif /*ZORKUL_H_*/
