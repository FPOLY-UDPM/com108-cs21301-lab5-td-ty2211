/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main() {
    int a, b, c;

    printf("Nhap 3 so: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("So lon nhat la: %d\n", max3(a, b, c));

    return 0;
}
