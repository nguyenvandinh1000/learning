#include<iostream>
#include<vector>
using namespace std;
class nguoi{
    private:
        char hoten;
        int tuoi;
    public:
        void nhap(){
            cout<<"nhap ho ten";
            getline(cin,hoten);
            cout<<"nhap tuoi";
            cin>>tuoi;
        }    
}
class Cauthu:public nguoi{
    private:
        int sbt;
        float sptd;
}
int main(){
    int n;
    cout<<"nhap so cau thu"
    cin>>n;
    cin.ignore();
    vector<Cauthu>(dscauthu);
    for(int i=0;i<n;i++){
        cout<<"nhap thong tin cau thu":
        dscauthu[i].nhap();

    }
}