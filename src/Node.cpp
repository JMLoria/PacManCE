#include "Node.h"

/**
 * @brief Is the constructor of the class
 * @tparam T
 */
template<class T>
Node<T>::Node(T data) {
    this->data = data;
    this->next = nullptr;
}