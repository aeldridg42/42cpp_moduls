#include "MutantStack.hpp"
#include <list>

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "before pop, top elem: " << mstack.top() << std::endl;
        std::cout << "before pop, size: " << mstack.size() << std::endl;
        mstack.pop();
        std::cout << "after pop, top elem: " << mstack.top() << std::endl;
        std::cout << "after pop, size: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(1);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        // *it = *(ite - 1);

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "elem: " << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << std::endl;
    {
        std::list<int>    mlist;

        mlist.push_back(5);
        mlist.push_back(17);
        
        std::cout << "before pop, top elem: " << mlist.back() << std::endl;
        std::cout << "before pop, size: " << mlist.size() << std::endl;

        mlist.pop_back();
        std::cout << "after pop, top elem: " << mlist.back() << std::endl;
        std::cout << "after pop, size: " << mlist.size() << std::endl;

        mlist.push_back(3);
        mlist.push_back(5);
        mlist.push_back(737);
        mlist.push_back(1);

        std::list<int>::iterator it = mlist.begin();
        std::list<int>::iterator ite = mlist.end();

        ++it;
        --it;
        while(it != ite)
        {
            std::cout << "elem: " << *it << std::endl;
            ++it;
        }
        std::list<int> s(mlist);
    }
    return 0;
}
