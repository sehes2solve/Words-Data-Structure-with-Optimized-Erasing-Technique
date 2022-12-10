#include <iostream>
#include <map>
#include <iterator>
#include <vector>

using namespace std;

int main ()
{
    string x = "", y = "" ;
    map <string,int> data;
    vector<string> vec;
    cout << "Enter any Words you want" << endl;
    cout << "To end the Insertion of Words Enter the Word Done" << endl;
    while(true)
    {
        cin >> x;
        if(x != "done")
            data[x]++;
        else
            break;
    }

    map <string,int>::iterator it = data.begin();
    for(it ; it!=data.end(); ++it)
    {
        cout << '\t' << it->first <<'\t' << it->second << endl;

    }
    it=data.begin();
    for(it ; it!=data.end(); ++it)
    {
        if( it->first[0] == 'a')
            vec.push_back(it->first);

    }
    for ( int j=0 ; j < vec.size() ; j++)
    {
        data.erase(vec[j]);
    }

    cout << "THE DATA AFTER ERASING ANY WORD BEGINS WITH 'A' : " << endl;
    it=data.begin();
    for(it ; it!=data.end(); ++it)
    {
        cout << '\t' << it->first <<'\t' << it->second << endl;

    }

    return 0;

}
