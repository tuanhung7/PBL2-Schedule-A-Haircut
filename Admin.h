#ifndef  admin_h
#define  admin_h
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include "date.h"

using namespace std;

class admin{                                      //Lớp ADMIN
    private:
        char  adphone[15]    = "0987654321";      //Số điện thoại đăng nhập tài khoản chủ
        char  adpassword[15] = "baohunghung";     //Mật khẩu đăng nhập tài khoản chủ
    public:
        void  singin();                           //Hàm đăng nhập tài khoản chủ

};

class staff{                                      //Lớp STAFF
    private:
        char   staffid[8];                        //ID
        char   firstname[15];                     //Họ   
        char   lastname[20];                      //Tên
        int    staffphone;                        //Số điện thoại
        int    gender;                            //Giới tính: Nam: 0, Nữ: 1
        char   BD[15];                            //Ngày sinh
        double pay;                               //Lương tháng
    public:
        int    read_file_staff(staff list0[]);
        void   out_file_staff(staff list0[], int s);
        void   add_staff(staff list0[], int s);                        //Ham them nhan vien
        void   delete_staff(staff list0[]);                     //Ham xoa nhan vien
 
};

class appointment{                                //Lop APPOINTMENT
    private:
        int    maDon;                             //Mã đơn
        char   ngayDatDon[100];                   //Ngày đặt đơn
        char   ngayDenCatToc[100];                //Ngày đến cắt tóc
        char   status[10];                        //Trạng thái đơn hàng (No/Yes)
        int    maRenderService;                   //Mã RSV
        int    sdt;                               //Số điện thoại
    public:
        int    read_file_appointment(appointment list2[]);        //Hàm đọc file appointment.txt
        void   yesorno(appointment list2[], int m, string s1);    //Hàm lọc Status Yes/No
        void   out_file_appointment(appointment list2[], int m);         //Hàm xuất file Danh sách cuộc hẹn (No & Yes) 
        void   out_file_appointmentYES();                         //Hàm xuất file Danh sách cuộc hẹn đã xác nhận (Yes)
        void   deleteappointment(appointment list2[]);
        int    layi(appointment list2[],int m,int h);
        void   nosangyes(appointment list2[], int m);
};

    void  split(char s[], char temp[][250]);       //Hàm bổ trợ đọc file         
    void  esc();                                   //Hàm nhấn Esc để thoát
    void  menu();                                  //Hàm giao diện

#endif