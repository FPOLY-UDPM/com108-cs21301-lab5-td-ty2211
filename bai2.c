/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    if (nam % 400 == 0)
        return 1;
    if (nam % 4 == 0 && nam % 100 != 0)
        return 1;
    return 0;
}

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (laNamNhuan(nam))
        printf("%d la nam nhuan\n", nam);
    else
        printf("%d khong phai la nam nhuan\n", nam);

    return 0;
}


