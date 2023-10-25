#include<iostream>
#include<queue>
using namespace std;







int main(){
     
     // Creating queue 

     queue<int> q;

     // Insertinf some elements in the queue

     q.push(11);
     
     // Checking the front element of the queue 
     cout << "The front element of queue is :" << q.front() << endl; 

     q.push(15);
     cout << "The front element of queue is :" << q.front() << endl;

     q.push(13);
     cout << "The front element of queue is :" << q.front() << endl;   

     cout << "Size of queue is :" << q.size() << endl;

    // Deleting or removing elements
     q.pop();
     q.pop();
     q.pop();


    // Checking the size of the queue
     cout << "Size of queue is :" << q.size() << endl;

    // Checking if the queue is empty or not
     if(q.empty()){
        cout << "The queue is empty" << endl;
     }
     else{
        cout << "The queue is not empty" << endl;
     }



    return 0;
}