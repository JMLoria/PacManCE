#ifndef PACMANCE_NODE_H
#define PACMANCE_NODE_H


template <class T> class Node {
public:
    T data;
    Node<T>* next;

    explicit Node(T data);
};


#endif //PACMANCE_NODE_H
