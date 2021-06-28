//// 전역변수, 전역함수 잘 사용하기
//
//
//
//
//#include <iostream>
//#include <cstring> // 문자열 받는건 다 스트링으로
//
//using namespace std;
//
//void make_acc()
//{
//    int acc_id;
//    std::string name;
//    int first_deposit;
//
//    std::cout<<"[계좌개설]\n";
//    std::cout<<"계좌ID: ";
//    std::cin>>acc_id;
//    std::cout<<acc_id;
//    std::cout<<"\n";
//
//    std::cout<<"이름: ";
//    std::cin>>name;
//    std::cout<<name;
//    std::cout<<"\n";
//
//    std::cout<<"입금액: ";
//    std::cin>>first_deposit;
//    std::cout<<first_deposit;
//    std::cout<<"\n";
//
//    return choice_menu();
//}
//
//void   deposit()
//{
//    int acc_id;
//    int how_much_deposit;
//
//    std::cout<<"[입   금]\n";
//    std::cout<<"계좌ID: ";
//    std::cin>>acc_id;
//    std::cout<<acc_id;
//    std::cout<<"\n";
//
//    std::cout<<"입금액: ";
//    std::cin>>how_much_deposit;
//    std::cout<<how_much_deposit;
//    std::cout<<"\n";
//
//    std::cout<<"입금완료";
//    
//    return (choice_menu);
//}
//
//void    withdraw()
//{
//    int acc_id;
//    int how_much_withdraw;
//    
//    std::cout<<"[출   금]\n";
//    std::cout<<"계좌ID: ";
//    std::cin>>acc_id;
//    std::cout<<acc_id;
//    std::cout<<"\n";
//
//    std::cout<<"출금액: ";
//    std::cin>>how_much_withdraw;
//    std::cout<<how_much_withdraw;
//    std::cout<<"\n";
//
//    if ()
//
//    std::cout<<"출금완료";
//
//    return (choice_menu);
//}
//
//void    info_acc()
//{
//      
//}
//
//int choice_menu()
//{
//   int choice_num;
//    
//   std::cout<<"----Menu----\n";
//   std::cout<<"1.계좌개설\n";
//   std::cout<<"2.입금\n";
//   std::cout<<"3.출금\n";
//   std::cout<<"4.계좌정보 전체 출력\n";
//   std::cout<<"5.프로그램 종료\n";
//   std::cout<<"선택: ";
//   std::cin>>choice_num;
//   std::cout<<choice_num;
//   std::cout<<"\n";
//
//   if ( choice_num == 1 )
//    make_acc();
//   else if (choice_num == 2 )
//       deposit();
//   else if (choice_num == 3 )
//       withdraw();
//   else if (choice_num == 4 )
//       info_acc();
//   else
//       return(0);
//}
//
//int main()
//{
//    choice_menu();
//}