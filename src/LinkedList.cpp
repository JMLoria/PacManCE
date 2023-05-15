#include "LinkedList.h"
#include <iostream>
#include "stdio.h"

using namespace std;

/**
 * @brief Is the constructor of the class
 * @tparam T
 */
template <class T>
LinkedList<T>::LinkedList(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}
/*
 * Principal methods
 */
template <class T>
/**
 * @brief Create a Node for to be inserted in the Linked List.
 *
 * @tparam T
 * @param data
 * @return null
 */
void LinkedList<T>::insertNode(T data) {
    auto* node = new Node<T>(data);
    insertNode(node);
}

/**
 * \brief Inserte the Node at the end of the Linked List.
 *
 * @tparam T
 * @param node
 * @return null
 */
template<class T>
void LinkedList<T>::insertNode(Node<T>* node) {

    if(head != nullptr){
        tail->next = node;
        tail = node;
    }else{
        head = node;
        tail = node;
    }
    this->size += 1;
}

/**
 * \brief Delete a Node in the position i.
 *
 * @tparam T
 * @param i
 * @return Node
 */
template<class T>
Node<T> *LinkedList<T>::deleteNode(int i) {
    Node<T>* tmp = head;
    current = head;
    while(tmp != nullptr){
        if(tmp == this->inPosition(i)){
            if(tmp == head){
                head = head->next;
            }else{
                current->next = tmp->next;
            }
            this->size -= 1;
            return tmp;
        }else{
            current = tmp;
            tmp = tmp->next;
        }
    }
    return nullptr;
}

/**
 * \brief Get the size of the Linked List.
 *
 * @tparam T
 * @return size
 */
template<class T>
int LinkedList<T>::getSize() {
    return this->size;
}

/**
 * \brief Get the Node in the position i.
 *
 * @tparam T
 * @param i
 * @return Node
 */
template<class T>
Node<T>* LinkedList<T>::inPosition(int i) {
    if(i <= this->size - 1){
        Node<T>* tmp = head;
        for(int n = 0; n < i; n++){
            tmp = tmp->next;
        }
        return tmp;
    }
    return nullptr;
}
//Is used to confirm the state of the Linked List
template<class T>
void LinkedList<T>::printList() {
    Node<T>* node = head;

    cout << "\nLinked List: " << "\n\tSize:" << this->size << "\n\t";

    while(node != nullptr){
        cout << node->data << ", ";
        node = node->next;
    }
    cout << endl;
}