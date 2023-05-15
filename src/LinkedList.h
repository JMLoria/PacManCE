/*
╔╗──────╔╗──────╔╦╗──────╔╗
║║──────║║──────║║║─────╔╝╚╗
║║──╔╦═╗║║╔╦══╦═╝║║──╔╦═╩╗╔╝
║║─╔╬╣╔╗╣╚╝╣║═╣╔╗║║─╔╬╣══╣║
║╚═╝║║║║║╔╗╣║═╣╚╝║╚═╝║╠══║╚╗
╚═══╩╩╝╚╩╝╚╩══╩══╩═══╩╩══╩═╝
 */

#ifndef SPACE_BATTLE_LINKEDLIST_H
#define SPACE_BATTLE_LINKEDLIST_H


#include "Node.h"

template <class T> class LinkedList {
    Node<T>* head;
    Node<T>* tail;
    Node<T>* current;
    int size;

public:
    LinkedList();

    void insertNode(T data);
    void insertNode(Node<T>* node);
    Node<T>* deleteNode(int i);
    int getSize();
    Node<T>* inPosition(int i);
    void printList();

};


#endif //SPACE_BATTLE_LINKEDLIST_H