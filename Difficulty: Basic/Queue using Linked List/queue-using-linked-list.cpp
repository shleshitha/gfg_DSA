/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *nn=new QueueNode(x);
        if(rear!=NULL){
            rear->next=nn;
            rear=nn;
        }
        else{
            rear=front=nn;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code 
        int x=-1;
        if(front!=NULL){
        x=front->data;
        front=front->next;}
        if(front==NULL){
            rear=NULL;
        }
        
        return x;
}
