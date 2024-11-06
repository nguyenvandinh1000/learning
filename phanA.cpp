#include<iostream>
#include<string>
using namespace std;
class Hang_hoa
{
private:
    string mathang;/*tên mặt hàng vd:kem đánh răng..*/
    string tenhang;/*tên hàng vd:kem đánh răng PS*/
    string soluong;/*số lương vd:5*/
    string giaca/*giá cả*/
    /* data */
public:
    Hang_hoa(const mathang& mh, const tenhang& th, const soluong&sl, const giaca& gc);
    //toán tử nhập
    friend istream& operator>>(istream& is, HangHoa& hh) {
        cout << "Nhập mặt hàng: ";
        is >> hh.matHang;
        cout << "Nhập tên: ";
        is >> hh.ten;
        cout << "Nhập số lượng: ";
        is >> hh.soLuong;
        cout << "Nhập giá: ";
        is >> hh.gia;
        return is;
    }

    // Toán tử xuất
    friend ostream& operator<<(ostream& os, const HangHoa& hh) {
        os << "Mặt hàng: " << hh.matHang << ", Tên: " << hh.ten 
           << ", Số lượng: " << hh.soLuong << ", Giá: " << hh.gia;
        return os;
    }

    // Toán tử so sánh theo giá
    bool operator<(const HangHoa& other) const {
        return this->gia < other.gia;
    }
};
