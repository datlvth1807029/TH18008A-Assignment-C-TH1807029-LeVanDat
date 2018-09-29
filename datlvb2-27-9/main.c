#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef  struct {
        char id[10];
        char name [50];
        char phone [20];
    } SINHVIEN;

void themMoiSinhvien (SINHVIEN sinhvien[10]){
   while(1){

        printf("nhap ma sinh vien vien: \n");
        fgets(sinhvien->id, 10, stdin);
        if("sinhvien->id<5 || sinhvien->id<5"){
            printf("Lỗi !!! Bạn phải nhập đủ 5 ký tự !!! \n");
            printf("Vui lòng nhập lại !!!\n");
        } else
            break;
        }
        printf("nhap ten sinh vien: \n");
        fgets(sinhvien->name,50, stdin);
        printf("nham so dien thoai sinh vien: \n");
        fgets(sinhvien->phone, 20, stdin);
}

void hienThiSinhVien(){
    SINHVIEN sinhvien[10];
    printf("%-10s%-20s%-10s%-20s%-10s%-20s", "","Mã sinh viên", "|", "Tên sinh viên", "|", "Số điện thoại" "\n");
    for (int i = 0; i < 10; ++i) {
        printf("\n");
        printf("%-10d%-20s%-10s%-20s%-10s%-20s", i,sinhvien->id, "|",
               sinhvien[i].name,
               "|", sinhvien[i].phone);
    }
}
void luuDanhSach(){
    SINHVIEN sinhvien[10];
    FILE *fp = fopen("danhsachsinhvien.txt", "w+");
    fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s\r\n", "", "Mã sinh viên", "|", "Tên sinh viên", "|", "Điện thoại");
    for (int i = 0; i < 10; ++i) {
        fprintf(fp, "%-10s%-18s%-10s%-18s%-10s%-18s\r\n", "", sinhvien[i].id, "|", sinhvien[i].name, "|",
                sinhvien[i].phone);
    }
    fclose(fp);
}
void docDanhSach() {
    FILE *fp = fopen("danhsachsinhvien.txt", "r");
    printf("Đọc dữ liệu từ file\n");
    char buffer[255];
    while (fgets(buffer, 255, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
}


void menu(){

    int luachon;
    while (1) {
        printf("Vui lòng nhập lựa chọn của bạn:\n");
        printf("1.Thêm mới sinh viên.\n");
        printf("2.Hiển thị dánh sách sinh viên.\n");
        printf("3.Lưu danh sách sinh viên ra file.\n");
        printf("4.Đọc danh sách sinh viên từ file.\n");
        printf("5.Thoát chương trình");
        printf("Nhập lựa chọn của người dùng (1-5): \n");
        scanf("%d", &luachon);
        switch (luachon){
            case 1:
                printf("danh sach da du.\n");
                break;
            case 2:
                printf("danh sách sinh viên.\n");
                break;
            case 3:
                printf("danh sách sinh viên da duoc luu thanh file danhsachsinhvien.txt \n");
                break;
            case 4:
                printf("Đọc danh sách sinh viên từ file.\n");
                break;
            case 5:
                printf("chương trình da duoc thoat ");
                break;
            default:
                printf("Bạn đã nhập sai vui lòng nhập từ 1-5.\n");
        }
        break;
    }
    return;
}

