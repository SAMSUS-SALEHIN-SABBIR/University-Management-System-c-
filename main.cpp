#include <iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
void fees_details(int class_no);
void class_subject(int class_no);
void notice(int nOptn);

int Dispaly(){

     int option,class_no,noticeOption;

    cout << "                          Welcome To Our School Managment System\n\n\n\n\n\n\n";

    cout << "1.  Registation.\n";
    cout << "2.  Sarch Information.\n";
    cout << "3.  Find Result.\n";
    cout << "4.  Notice Board.\n";
    cout << "5.  Simple Calculator.\n";
    cout << "6.  Calculate G.P.A\n";
    cout << "7.  Class Shedule.\n";
    cout << "8.  Subject (Class Wise).\n";
    cout << "9.  Fees Details.\n";
    cout << "10. Exit.\n";
    cout << endl;


    while(1){

    printf("\n\nMenu : Choose Any Option : ");
    scanf("%d",&option);



    switch(option)
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            printf("\n\n1. Enter Notice.\n");
            printf("2. Show Notice.\n");
            printf("Choose Any option : ");
            scanf("%d",&noticeOption);
            if(noticeOption == 1){
            }
            //notice(noticeOption);
            //else if(noticeOption == 2)

            else
                printf("You Entered Wrong Number.\n");

            break;
        case 5:
            break;

        case 6:
            break;
        case 7:
            break;
        case 8:
            //printf("\033[2J\033[1;H"); // clear screen
            printf("\nPlease Enter a Class No : ");
            scanf("%d",&class_no);
            printf("\n\n");
            class_subject(class_no);
            break;
        case 9:
            //printf("\033[2J\033[1;H"); // clear screen
            printf("\nPlease Enter a Class No : ");
            scanf("%d",&class_no);
            printf("\n\n");
            fees_details(class_no);
            break;
        case 10:
            return 1;
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }



    }
    return 0;
}


// Fees Details Function



 // declear class

class Student{

    // Data Mebber Declearation
    long long Phone_number;
    string Father_name, Mother_name, Student_name,Blood_group,Versity_name,Nationality;
    int Id;
    public :
    string Set_name(string name){
        Student_name = name;
        return Student_name;
    }
    string  Set_Father_name(string name){
        Father_name = name;
        return Father_name;
    }
    void Set_Mother_name(string name){
        Mother_name = name;
    }
    void Set_Blood(string name){
        Blood_group = name;
    }
    void Set_Versity(string name){
        Versity_name = name;
    }
    void Set_Nationality(string name){
        Nationality = name;
    }
    void Set_Phone_number(long long number){
        Phone_number = number;
    }
    void Genarate_id(){
        Id = rand()%1000 + 100000;
        cout <<"Student Id : " << Id << endl;
    }

};


class Teacher{

    // Data Mebber Declearation
    long long Phone_number;
    string Father_name, Mother_name, Teacher_name,Blood_group,Versity_name,Nationality;
    int Id;
    public :
    string Set_name(string name){
        Teacher_name = name;
        return Teacher_name;
    }
    string  Set_Father_name(string name){
        Father_name = name;
        return Father_name;
    }
    void Set_Mother_name(string name){
        Mother_name = name;
    }
    void Set_Blood(string name){
        Blood_group = name;
    }
    void Set_Versity(string name){
        Versity_name = name;
    }
    void Set_Nationality(string name){
        Nationality = name;
    }
    void Set_Phone_number(long long number){
        Phone_number = number;
    }
    void Genarate_id(){
        Id = rand()%1000 + 100000;
        cout <<"Teacher Id : " << Id << endl;
    }

};

class Administator : private Student , private Teacher{

    // Data Mebber Declearation
    long long Phone_number;
    string Father_name, Mother_name, Student_name,Blood_group,Versity_name,Nationality;
    int Id;
    public :
    string Set_name(string name){
        Student_name = name;
        return Student_name;
    }
    string  Set_Father_name(string name){
        Father_name = name;
        return Father_name;
    }
    void Set_Mother_name(string name){
        Mother_name = name;
    }
    void Set_Blood(string name){
        Blood_group = name;
    }
    void Set_Versity(string name){
        Versity_name = name;
    }
    void Set_Nationality(string name){
        Nationality = name;
    }
    void Set_Phone_number(long long number){
        Phone_number = number;
    }
    void Genarate_id(){
        Id = rand()%1000 + 100000;
        cout <<"Student Id : " << Id << endl;
    }

};




int main()
{
    string name;
    Student student[40];

    for(int i=0;i<40;i++){
    cin >> name;
    cout << "Student Name : " << student[i].Set_name(name) << endl;
    cin >> name;
    cout << "Father name : " << student[i].Set_Father_name(name) << endl;
    student[i].Genarate_id();
    }

    Dispaly();

    return 0;
}


void fees_details(int class_no){
    switch(class_no){

        case 1:
            printf("Per Month 400 Taka.\n");
            break;
        case 2:
            printf("Per Month 450 Taka.\n");
            break;
        case 3:
            printf("Per Month 500 Taka.\n");
            break;
        case 4:
            printf("Per Month 550 Taka.\n");
            break;
        case 5:
            printf("Per Month 600 Taka.\n");
            break;
        case 6:
            printf("Per Month 650 Taka.\n");
            break;
        case 7:
            printf("Per Month 700 Taka.\n");
            break;
        case 8:
            printf("Per Month 750 Taka.\n");
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }

}


// Class subject Funtion


void class_subject(int class_no){
printf("                 We Servies Class 1-8.\n");
    switch(class_no){

        case 1:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n");
            break;
        case 2:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n");
            break;
        case 3:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 4:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 5:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 6:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        case 7:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        case 8:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }

}
