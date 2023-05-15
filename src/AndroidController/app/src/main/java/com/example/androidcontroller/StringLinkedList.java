package com.example.androidcontroller;

public class StringLinkedList {
    private class Node{
        private String data;
        private Node next;

        public Node(String _data){
            data = _data;
            next = null;
        }
    }

    private Node head;
    private int size;

    public StringLinkedList(){
        head = null;
        size = 0;
    }

    public boolean isEmpty(){
        return head == null;
    }

    public int getSize(){
        return size;
    }

    public void add(String _data){
        Node newNode = new Node(_data);
        if(isEmpty()){
            head = newNode;
        }else{
            Node currentNode = head;
            while (currentNode.next != null){
                currentNode = currentNode.next;
            }
            currentNode.next = newNode;
        }
        size++;
    }

    public String get (int _index){
        if(_index < 0 || _index >= size){
            throw new IndexOutOfBoundsException();
        }
        Node currentNode = head;
        for(int i = 0; i < _index; i++){
            currentNode = currentNode.next;
        }
        return currentNode.data;
    }

    public String remove (int _index){
        if(_index < 0 || _index >= size){
            throw new IndexOutOfBoundsException();
        }
        String removedData;
        if(_index == 0){
            removedData = head.data;
            head = head.next;
        }else{
            Node currentNode = head;
            for(int i = 0; i < _index; i++){
                currentNode = currentNode.next;
            }
            removedData = currentNode.next.data;
            currentNode.next = currentNode.next.next;
        }
        size--;
        return removedData;
    }

    public String remove(){
        return remove(size - 1);
    }
}