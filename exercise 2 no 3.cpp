#include<iostream>
using namespace std;
class time
{
private:
    int jam;
    int menit;
    int detik;
public:
    time() : jam(0), menit(0), detik(0)
    { }
    time(int j, int m, int d) : jam(j), menit(m), detik(d)
    { }

    void displayTime() const
    {
        if(jam<10)
            cout<<"0";
        cout<<jam<<":";
        if(menit<10)
            cout<<"0";
        cout<<menit<<":";
        if(detik<10)
            cout<<"0";
        cout<<detik<<endl;
    }

    time addTo(time t1)
    {
        time temp;
        temp.detik = detik + t1.detik;
        temp.menit = menit + t1.menit;
        temp.jam = jam + t1.jam;

        if(temp.detik>= 60)
        {
            temp.detik= temp.detik - 60;
            temp.menit++;
        }

        if(temp.menit>=60)
        {
            temp.menit= temp.menit - 60;
            temp.jam++;
        }

        if(temp.jam>12)
        {
            temp.jam= temp.jam -12;
        }

        return temp;
    }
};

int main()
{
    time t1(11, 59, 59);
    time t2(2, 0, 1);
    time t3;

    t3 = t1.addTo(t2);
    t3.displayTime();

    return 0;
}
