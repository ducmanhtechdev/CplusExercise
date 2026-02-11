#include <iostream>
using namespace std;

int main()
{
    int d;
    if (!(cin >> d))
        return 0; // Đọc dữ liệu đầu vào

    if (d >= 80)
    {
        cout << "Loai A" << endl;
        if (d >= 90)
            cout << "Xuat sac";
        else
            cout << "Gioi";
    }
    else if (d >= 50)
    {
        cout << "Loai B" << endl;
        if (d >= 65)
            cout << "Kha"; // Sửa từ > thành >=
        else
            cout << "Trung binh";
    }
    else
    { // Cover toàn bộ d < 50 (bao gồm cả điểm 0)
        cout << "Loai C" << endl;
        if (d >= 35)
            cout << "Yeu";
        else
            cout << "Kem";
    }

    return 0;
}