#include<iostream>
#include<vector>
#include<string>
using namespace std;
class nguoi{
    private:
        string hoten;
        int tuoi;
    public:
        void nhap(){
            cout<<"nhap ho ten";
          	getline(cin,hoten);
            cout<<"\nnhap tuoi";
            cin>>tuoi;
             cin.ignore();
        } 
		void xuat(){
			cout<<"\nho ten"<<hoten<<"tuoi"<<tuoi<<endl;
		}   
};
class Cauthu:public nguoi{
    private:
        int sbt;
        float sptd;
    public:
    	void nhap(){
    		nguoi::nhap();
    		cout<<"\nnhap so ban thang";
    		cin>>sbt;
    		cout<<"\nnhap so phut thi dau";
    		cin>>sptd;
    	
		}
		void xuat(){
			nguoi::xuat();
			cout<<"\nso ban thang la "<<sbt<<"so phut thi dau la "<<sptd;
		}
};
int main(){
    int n;
    cout<<"\nnhap so cau thu";
    cin>>n;
    
    vector<Cauthu>dscauthu(n);
    for(int i=0;i<n;i++){
        cout<<"\nnhap thong tin cau thu";
        dscauthu[i].nhap();

    }
    for(int i=0;i<n;i++){
    	cout<<"\nthong tin cau thi"<<i+1;
    	dscauthu[i].xuat();
	}
}
