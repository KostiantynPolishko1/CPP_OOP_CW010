#include "KEY.H"

int main(void)
{
    cout << "\tDATA of KEYS\n";

    Key key1;
    key1.printDataKey(key1);

    Key key2(6, 2.343f, (char*)'g');
    key2.printDataKey(key2);
    
    Key key3(6, 1.043f, (char*)'p', "grey");
    key3.printDataKey(key3);

    return 0;
}