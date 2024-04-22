#include <iostream>
#include <set>
#include <string>
using namespace std;

//This function adds a jewel to the bag or the box
void add(const long& value, set<long>& bag, set<long>& box, long& sum, const int& bs)
{
    long min = *bag.begin();
    if (bag.size() < bagsize) { //The forty thieves leave a jewel and your bag isn't full
        bag.insert(value);
        sum += val;
    } else if (value > min) { //The forty thieves leave a jewel and you have taken a jewel with a less value
        bag.insert(value);
        sum += value;
        bag.erase(min);
        sum -= min;
        box.insert(min);
    } else { //The forty thieves leave a jewel but you have your bag full of jewels with more value
        box.insert(value);
    }
}

//This function removes a jewel from the bag or the box
void remove(const long& value, set<long>& bag, set<long>& box, long& sum, const int& bs)
{
    long min = *bag.begin();
    if (value >= min) { //The forty thieves take a jewel from your bag
        bag.erase(value);
        sum -= value;
        if (not box.empty()) { //The forty thieves take a jewel from your bag and the box isn't epmty
            long max = *--box.end();
            box.erase(max);
            bag.insert(max);
            sum += max;
        }
    } else { //The forty thieves take a jewel from the box
        box.erase(value);
    }
}

//This function updates a jewel, they can leave or take one
void update(const long& value, set<long>& bag, set<long>& box, string& s, long& sum, const int& bagsize)
{
    if (s == "leave") { //The forty thieves leave a jewel
        add(value, bag, box, sum, bagsize);
    } else { //The forty thieves take a jewel
        remove(value, bag, box, sum, bagsize);
    }
}

int main()
{
    set<long> box;
    set<long> bag;
    int bagsize;
    cin >> bagsize;
    string s;
    long sum = 0;
    while (cin >> s) {
        long value;
        cin >> value;
        update(value, bag, box, s, sum, bagsize);
        cout << sum << endl;
    }
}
