#include <iostream>
#include <vector>
using namespace std;
class rect
{
private:
    /* data */
    int nWidth;
    int nHeight;

public:
    void input();
    void init(int w, int h);
    int area();
    int issquare();
    void output();
};
void rect::input()
{
    cout << "nhap chieu dai:";
    cin >> nHeight;
    cout << "nhap chieu rong";
    cin >> nWidth;
}
void rect::output()
{
    cout << "chieu dai hinh la:" << nHeight << endl;
    cout << "chieu rong hinh la:" << nWidth << endl;
    cout << issquare();
    cout <<area();
}
void rect::init(int w, int h)
{
    nWidth = w;
    nHeight = h;
}
int rect::area()
{
    int s = nWidth * nHeight;
    return s;
}
int rect::issquare()
{
    if (nWidth == nHeight)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    rect hinh1;
    hinh1.init(3, 5);
    hinh1.area();
    hinh1.issquare();
    hinh1.output();
    int n;
    cout <<"nhapsohinh";
    cin >> n;
    vector<rect>daycachinh(n);
    for(int i=0;i<n;i++){
        cout<<"nhap hinh so"<<i+1<<endl;
        daycachinh[i].input();
    }
    int dem;
    int smax=0;
    for(int i=0;i<n;i++){
        if(daycachinh[i].issquare()==1){
            dem++1;
        }
        if(daycachinh[i].area >smax){
            smax=daycachinh[i].area;
        }
    }
    cout<<"dienj tich lon nhat la "<<smax<<endl;
}
