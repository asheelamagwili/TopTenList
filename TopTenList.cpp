//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
    _list.resize(11);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list[index] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index);
}

void TopTenList::display_forward()
{
    if( _list.size() == 0 )
    {
        std::cout<<" is empty.\n";
    }

    else
    {
        for(int i = 1; i <= (int)_list.size()-1; i++)
        {
          std::cout<<i<<". "<<_list[i].url<<std::endl;
        }
    }
}

void TopTenList::display_backward()
{
    if( _list.size() == 0 )
    {
        std::cout<<" is empty.\n";
    }

    else
    {
        for(int i = (int)_list.size()-1; i >= 0; i--)
        {
          std::cout<<i<<". "<<_list[i].url<<std::endl;
        }
    }
}
