#include <iostream>
#include <QtDebug>

using namespace std;
#include "ZorkUL.h"


ZorkUL::ZorkUL() {
	createRooms();
}

void ZorkUL::createRooms()  {
    Room *hall, *secroom, *vault, *toilets, *dirroom, *counter, *gates, *upstairs, *waitroom;

    hall = new Room("hall");
    secroom = new Room("security room");
        secroom->addItem(new Item("taser"));
    vault = new Room("vault");
    toilets = new Room("toilets");
        toilets->addItem(new Item("pin"));
    dirroom = new Room("director office");
    counter = new Room("bank counter");
        counter->addItem(new Item("employee card"));
    gates = new Room("security gates");
    upstairs = new Room("upstairs");
    waitroom = new Room("waiting room");

//             (N, E, S, W)
    hall->setExits(counter, toilets, NULL, upstairs);
    secroom->setExits(NULL, NULL, upstairs, NULL);
    vault->setExits(NULL, NULL, gates, NULL);
    toilets->setExits(NULL, NULL, NULL, hall);
    dirroom->setExits(NULL, NULL, NULL, upstairs);
    counter->setExits(gates, NULL, hall, waitroom);
    gates->setExits(vault, NULL, counter, NULL);
    upstairs->setExits(secroom, dirroom, NULL, hall);
    waitroom->setExits(NULL, counter, NULL, NULL);

        currentRoom = hall;

    Roomlist.push_back(hall);
    Roomlist.push_back(secroom);
    Roomlist.push_back(vault);
    Roomlist.push_back(toilets);
    Roomlist.push_back(dirroom);
    Roomlist.push_back(counter);                    //pointer list
    Roomlist.push_back(gates);
    Roomlist.push_back(upstairs);
    Roomlist.push_back(waitroom);

}

void ZorkUL::addtoinventory(Item item){
    Inventory.push_back(item);
}

void ZorkUL::goRoom(string direction) {
    // Try to leave current room.
    Room* nextRoom = currentRoom->nextRoom(direction);

    if (nextRoom == NULL)
        qDebug() << "nope";
    else {
        currentRoom = nextRoom;
    }
}

