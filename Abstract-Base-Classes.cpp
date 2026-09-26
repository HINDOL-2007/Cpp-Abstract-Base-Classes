#include <iostream>
#include <cstring>
using namespace std;
class TransitSystem
{
protected:
    string transitName;

public:
    TransitSystem(string s) : transitName(s) {}
    virtual void operate() = 0;
};
class Metro : public TransitSystem
{
public:
    Metro(string name) : TransitSystem(name) {}
    void operate()
    {
        cout << transitName << " is routing underground via Aamar Kolkata Metro tracks." << endl;
    }
};
class Train : public TransitSystem
{
public:
    Train(string name) : TransitSystem(name) {}
    void operate()
    {
        cout << transitName << " is departing via IRCTC surface rails." << endl;
    }
};
int main()
{
    TransitSystem *network[2];
    Metro BlueLine("DumDum");
    Train up("Sealdha");
    network[0] = &BlueLine;
    network[1] = &up;
    for (int i = 0; i < 2; i++)
    {
        network[i]->operate();
        cout << endl;
    }
    // TransitSystem generic("Test");

    return 0;
}
