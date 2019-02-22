#include <iostream>
using namespace std;

class BadGrowList
{
private:
    int* data;
    int len;
public:
    BadGrowList() {
        data = nullptr;
        len = 0;
    }
    void insert(int i, int val);
    void addEnd(int val) {
        int * old = data;
        data = new int[len+1];
        for (int i = 0; i < len; i++)
            data [i] = old[i];
        data[len] = val;
        len++;
        delete [] old; //O(1)
    }
    void addStart(int val) {
        int * old = data;
        
    }
    void removeStart() {
        int* old = data;
        data = new int[--len];
        for (int i = 1; i <= len; i++)
            data[i-1] = old[i];
        delete [] old;
    }
    void Insert(int pos, int val) {
        int* old = data;
        data = new int[len+1];
        for (int i = 0; i < pos; i++)
            data[i] = old[i];
        data[pos] = val;
        for (int i = pos+1; i <= len; i++)
            data[i] = old[i-1];
    }
};

int main()
{
    BadGrowList a;
    const int n = 1000000;
    for (int i = 0; i < n; i++) {
        a.addEnd(i); // O(n)
    }
}
