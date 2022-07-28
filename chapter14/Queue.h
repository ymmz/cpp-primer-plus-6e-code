#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class QueueTp
{
public:
    QueueTp(int qs = Q_SIZE); 
    ~QueueTp();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const T &item); 
    bool dequeue(T &item);       
private:
    struct Node { T item; struct Node * next;};
    enum {Q_SIZE = 10};
    Node * front;       
    Node * rear;        
    int items;          
    const int qsize;    
    Queue(const Queue & q) : qsize(0) { }
    Queue & operator=(const Queue & q) { return *this;}
};
template<typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;    // or nullptr
    items = 0;
}

template<typename T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while (front != NULL)   // while queue is not yet empty
    {
        temp = front;       // save address of front item
        front = front->next;// reset pointer to next item
        delete temp;        // delete former front
    }
}

template<typename T>
bool QueueTp<T>::isempty() const
{
    return items == 0;
}

template<typename T>
bool QueueTp<T>::isfull() const
{
    return items == qsize;
}

template<typename T>
int QueueTp<T>::queuecount() const
{
    return items;
}

template<typename T>
bool QueueTp<T>::enqueue(const T & item)
{
    if (isfull())
        return false;
    Node * add = new Node;  // create node
// on failure, new throws std::bad_alloc exception
    add->item = item;       // set node pointers
    add->next = NULL;       // or nullptr;
    items++;
    if (front == NULL)      // if queue is empty,
        front = add;        // place item at front
    else
        rear->next = add;   // else place at rear
    rear = add;             // have rear point to new node
    return true;
}


template<typename T>
bool QueueTp<T>::dequeue(T & item)
{
    if (front == NULL)
        return false;
    item = front->item;     // set item to first item in queue
    items--;
    Node * temp = front;    // save location of first item
    front = front->next;    // reset front to next item
    delete temp;            // delete former first item
    if (items == 0)
        rear = NULL;
    return true;
}
#endif