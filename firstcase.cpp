//   #include<iostream>
//            using namespace std;
//           int main(int argc, char *argv[])
//           {
//               cout<<"这个程序的程序名是："<<argv[0]<<"\n";
//               if (argc<=1)
//                   cout<<"没有参数！";
//               else
//              {
//                   int nCount = 1;
//                   while(nCount < argc)
//                  {
//                     cout<<"第"<<nCount<<"个参数是： "<<argv[nCount]<<"\n";
//                     nCount++;
//                    }
//               }
//           return 0;
// }
//         #include<iostream>
//           using namespace std;
//           struct x
// {	char name[99];
// char num[10];
// int a,b,c;
// };
//  	struct x s[5];
//           void func1() { 
//             int i;
//           cout<< "Input data\n";
// 		  for(i=0;i<5;i++)
//  	{
//  		cin>>s[i].name;
//  		cin>>s[i].num;
//  		cin>>s[i].a>>s[i].b>>s[i].c;
// 	 }
// 		  };
//           void func2() { cout<< "output data\n";
// 		   double sum;
//  	for(int i=0;i<5;i++)
//  	{
//  		sum=sum+s[i].a+s[i].b+s[i].c;
	 
// 	 cout<<s[i].name<<"的成绩为"<<sum;
// 		  sum=0;
// 		  }
// 	};
//           int main(){
//               int sel;
//               do {
//                   cout<< "选择:\n\t 1. 输入数据；2. 输出数据；3. 退出程序\n";
//                   cin >> sel;
//                   switch (sel) {
//                   case 1:
//                       func1();
//                       break;
//                   case 2:
//                       func2();
//                       break;
//                   default:
//                         break;
//                   }
//               } while (sel==1||sel==2);}
// #include <iostream>
//     using namespace std;
// void calCircleArea()
//       {
//           double r, area;
//           cout<< "输入圆的半径：";
//           cin>> r;
//           area = 3.14159 * r * r;
//           cout<<"圆的面积为："<<area<<endl;
//       }
//       void calRectangleArea()
//       {
//           double a,b,S;
//           cout<< "输入长方形的长宽：";
//           cin>>a;
//           cin>>b;
//           S = a*b;
//           cout<<"长方形的面积为："<<S<<endl;
//       }
//       void calSquareArea()
//       {
//           double r,S;
//           cout<< "输入正方形的边：";
//           cin>> r;
//           S = r*r;
//           cout<<"正方形的面积为："<<S<<endl;
//       }
// int main()
//       {
//       	int b;
//         double r,a;
//         cout<<"计算圆形面积输入1,长方形面积输入2,正方形面积输入3";
//         cin>> b;
//         switch(b)
//         {
//         	case 1:{
//                 calCircleArea();
//                 break;}
//         	case 2:{
//                 calRectangleArea();
// 				break;}
//         	case 3:{
//                 calSquareArea();
// 				break;
// 			}
// 		}
//       return 0;
// }
// #include<iostream>
//    using namespace std;

//    int main()
//    {
//       cout <<"This is the simplest C++ program.\n";
//       return 0;
//    }
// //引用测试
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i ,&ri = i;
//     i = 5;
//     ri = 10;
//     cout<<i<<" "<<ri<<endl;
//     // int i = 10;
//     // int &a = i;
//     // a = 19;
//     // cout<<i<<endl;
//     // return 0;
// }
//输出19————引用即命名
//测试2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 100,sum = 0;
//     for(i = 0;i != 10;++i)
//     {
//         sum += i;
//     }
//     cout<<i<<" "<<sum<<endl;
//     return 0;
// }
//测试1
// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         cout<<"Hello world"<<endl;
//     }
//     return 0;
// }