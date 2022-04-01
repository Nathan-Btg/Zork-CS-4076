#include <iostream>
#include <QtDebug>

using namespace std;
#include "ZorkUL.h"
#include "game.h"

/*int main(int argc, char argv[]) {
	ZorkUL temp;
	temp.play();
	return 0;
}*/

ZorkUL::ZorkUL() {
	createRooms();
}

void ZorkUL::createRooms()  {
    Room *hall, *secroom, *vault, *toilets, *dirroom, *counter, *gates, *upstairs, *i;

    hall = new Room("hall");
        hall->addItem(new Item("x", 1, 11));
        hall->addItem(new Item("y", 2, 22));
    secroom = new Room("security room");
        secroom->addItem(new Item("xx", 3, 33));
        secroom->addItem(new Item("yy", 4, 44));
    vault = new Room("vault");
    toilets = new Room("director office");
    dirroom = new Room("e");
    counter = new Room("counter");
    gates = new Room("security gates");
    upstairs = new Room("upstairs");
	i = new Room("i");

//             (N, E, S, W)
    hall->setExits(counter, toilets, NULL, upstairs);
    secroom->setExits(NULL, NULL, upstairs, NULL);
    vault->setExits(NULL, NULL, gates, NULL);
    toilets->setExits(NULL, NULL, NULL, hall);
    dirroom->setExits(NULL, upstairs, NULL, NULL);
    counter->setExits(gates, NULL, hall, NULL);
    gates->setExits(vault, NULL, counter, NULL);
    upstairs->setExits(secroom, hall, NULL, dirroom);
    i->setExits(NULL, NULL, NULL, NULL);

        currentRoom = hall;

    Roomlist.push_back(hall);
    Roomlist.push_back(secroom);
    Roomlist.push_back(vault);
    Roomlist.push_back(toilets);
    Roomlist.push_back(dirroom);
    Roomlist.push_back(counter);                    //pointer list
    Roomlist.push_back(gates);
    Roomlist.push_back(upstairs);
    Roomlist.push_back(i);


}

/**
 *  Main play routine.  Loops until end of play.
 */
void ZorkUL::play() {
    //printWelcome();

	// Enter the main command loop.  Here we repeatedly read commands and
	// execute them until the ZorkUL game is over.

	bool finished = false;
	while (!finished) {
		// Create pointer to command and give it a command.
		Command* command = parser.getCommand();
		// Pass dereferenced command and check for end of game.
		finished = processCommand(*command);
		// Free the memory allocated by "parser.getCommand()"
		//   with ("return new Command(...)")
		delete command;
	}
    //cout << endl;
    //cout << "end" << endl;
}

/*void ZorkUL::printWelcome() {
	cout << "start"<< endl;
	cout << "info for help"<< endl;
	cout << endl;
	cout << currentRoom->longDescription() << endl;
}*/

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */
/*bool ZorkUL::processCommand(Command command) {
    if (command.isUnknown()) {
		cout << "invalid input"<< endl;
		return false;
    }

	string commandWord = command.getCommandWord();
	if (commandWord.compare("info") == 0)
		printHelp();

	else if (commandWord.compare("map") == 0)
		{
        cout << "[h] --- [f] --- [g]" << endl;
		cout << "         |         " << endl;
        cout << "         |         " << endl;
		cout << "[c] --- [a] --- [b]" << endl;
		cout << "         |         " << endl;
		cout << "         |         " << endl;
		cout << "[i] --- [d] --- [e]" << endl;
		}

	else if (commandWord.compare("go") == 0)
		goRoom(command);

    else if (commandWord.compare("take") == 0)
    {
       	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
         if (command.hasSecondWord()) {
        cout << "you're trying to take " + command.getSecondWord() << endl;
        int location = currentRoom->isItemInRoom(command.getSecondWord());
        if (location  < 0 )
            cout << "item is not in room" << endl;
        else
            cout << "item is in room" << endl;
            cout << "index number " << + location << endl;
            cout << endl;
            cout << currentRoom->longDescription() << endl;
        }
    }

    else if (commandWord.compare("put") == 0)
    {

    }

    {
    if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
            cout << "you're adding " + command.getSecondWord() << endl;
            itemsInRoom.push_Back;
        }
    }

    else if (commandWord.compare("quit") == 0) {
		if (command.hasSecondWord())
			cout << "overdefined input"<< endl;
		else
            return true; //signal to quit
	}
	return false;
}*/
/** COMMANDS **/
void ZorkUL::printHelp() {
	cout << "valid inputs are; " << endl;
	parser.showCommands();

}

void ZorkUL::goRoom(string direction) {

	// Try to leave current room.
	Room* nextRoom = currentRoom->nextRoom(direction);

    if (nextRoom == NULL)
        qDebug() << "no room bro";
    else {
		currentRoom = nextRoom;
		cout << currentRoom->longDescription() << endl;
	}
}

string ZorkUL::go(string direction) {
	//Make the direction lowercase
	//transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
	//Move to the next room
	Room* nextRoom = currentRoom->nextRoom(direction);
	if (nextRoom == NULL)
		return("direction null");
	else
	{
		currentRoom = nextRoom;
		return currentRoom->longDescription();
	}
}
