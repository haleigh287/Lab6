
#ifndef TEST_QUEUE_H
#define TEST_H

#include "Queue.h" //Gone over in class
#include <stdexcept> //For runtime_error

class Test : public Queue
{
    public:

    Test();

    //This will call all your test methods
    void runTests();




    bool test01();
    bool test02();

    bool test03();
    bool test04();
    bool test05();
    bool test06();
    bool test07();
    bool test08();
    bool test09();
     bool test10();
    // bool test11();
};
#endif
