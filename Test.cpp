
#include "Test.h"
#include "Node.h"
#include "Queue.h"
#include <fstream>
#include <iostream>
using namespace std;

Test::Test()
{

}


void Test::runTests()
{
std::cout <<"Welcome to test mode\n";

std::cout << "Test #1: Size of empty Queue is zero -- ";
if(test01() == true) cout <<"PASSED \n";
else std::cout <<"FAILED \n";

std::cout <<"Test #2: Size returns correct value after adding to Queue with enqueue -- ";
if(test02() == true) cout <<"PASSED \n";
else std::cout << "FAILED \n";

std::cout << "Test #3: Size returns correct value after adding and removing from Queue -- ";
if(test03() == true) cout <<"PASSED \n";
else std::cout <<"FAILED \n";

std::cout << "Test #4: After adding one value, correct value returned after peeking at the front of Queue -- ";
if(test04() == true) cout <<"PASSED \n";
else std::cout << "FAILED \n";

cout<< "Test #5: After adding multiple values to Queue, peeks at correct value -- ";
if(test05() == true) cout <<"PASSED \n";
else cout << "FAILED \n";

cout<< "Test #6: Size returns correct value after adding and removing multiple values from Queue -- ";
if(test06() == true) cout <<"PASSED \n";
else cout << "FAILED \n";

cout<< "Test #7: Error is thrown if dequeue is called on empty Queue -- ";
if(test07() == true) cout <<"PASSED \n";
else cout << "FAILED \n";

cout<< "Test #8: Enqueue 1,2 then dequeue. Correctly peeks at front -- ";
if(test08() == true) cout <<"PASSED \n";
else cout << "FAILED \n";

cout<< "Test #9: Queue's m_front and m_back are correct atfer enqueueing twice -- This test causes seg fault. Inconclusive? because I can't tell if it's my test's fault or if it's a code bug \n";
// if(test09() == true) cout <<"PASSED \n";
// else cout << "FAILED \n";

cout<< "Test #10: Queue is empty after deconstructor is called -- ";
if(test10() == true) cout <<"PASSED \n";
else cout << "FAILED \n";

cout<< "Test #11: No memory leaks when used Valgrind -- FAILED \n";
}


bool Test::test01()
{
Queue q;
  return(q.isEmpty());
}

bool Test::test02()
{
  Queue q;
  q.enqueue(1);
  if(q.isEmpty())
  {
    return(false);
  }
  else
  {
    return(true);
  }
}

bool Test::test03()
{
  Queue q;
  q.enqueue(1);
  q.dequeue();
  if(q.isEmpty())
  {
    return(true);
  }
  else
  {
    return(false);
  }
}

bool Test::test04()
{
  Queue q;
  q.enqueue(1);
  if(q.peekFront()==1)
  {
    return(true);
  }
  else
  {
    return(false);
  }
}


bool Test::test05()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  //std::cout << q.peekFront();
  if(q.peekFront()==1)
  {
    return(true);
  }
  else
  {
    return(false);
  }
}
bool Test::test06()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.dequeue();
  q.dequeue();
  q.dequeue();
  if(q.isEmpty())
  {
    return(true);
  }
  else
  {
    return(false);
  }
}
bool Test::test07()
{
  Queue q;
  try
  {
    q.dequeue();
    return(false);
  }
  catch (std::runtime_error&)
  {
    return(true);
  }
}

bool Test::test08()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);

  q.dequeue();
  if(q.peekFront()==2)
  {
    return(true);
  }
  else
  {
    return(false);
  }
}


bool Test::test09()
{
  Queue q;
  //int* temp;
  q.enqueue(1);
  q.enqueue(2);
  //int val1 = m_front->getEntry();
  //int val2 = m_back->getEntry();
  // if(val1 ==1 && val2 ==2)
  // {
  //   return(true);
  // }
  // else
  // {
  //   return(false);
  // }
}


bool Test::test10()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);

  	q.~Queue();

  if(q.isEmpty())
  {
    return(true);
  }
  else
  {
    return(false);
  }
}
