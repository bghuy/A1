//#include<iostream>
//#include<iomanip>
//#include<time.h>
//using namespace std;
//int main() {
//	int m;
//	int s;
//	do
//	{
//		cout << "nhap minute:";
//		cin >> m;
//	} while (m<0||m>59);
//	do
//	{
//		cout << "nhap second:";
//		cin >> s;
//	} while (s < 0 || s>59);
//		while (s!=-1)
//		{
//			if (m==0)
//			{
//					switch (s)
//					{
//					case 5: case 4: case 3: case 2: case 1:
//						cout << setfill('0') << setw(2) << m << " : " << setfill('0') << setw(2) << s << " tich tac\n";
//						break;
//					case 0:
//						cout << setfill('0') << setw(2) << m << " : " << setfill('0') << setw(2) << s << " reng reng\n";
//						break;
//					default:
//						cout << setfill('0') << setw(2) << m << " : " << setfill('0') << setw(2) << s << '\n';
//						break;
//					}
//			}
//			else
//			{
//				cout << setfill('0') << setw(2) << m << " : " << setfill('0') << setw(2) << s << '\n';
//			}
//			if (m!=0&&s==0)
//			{
//				m--;
//				s = 59;
//			}
//			else
//			{
//				s--;
//			}
//		
//	}
//	
//}