#include<iostream>
using namespace std;
int main(){
	char day;
	cout<<"input days between Monday- Friday"<<endl;
	cin>>day;
 switch (day){
 	case 'M':
 		cout<<"Monday";
 		break;
 		case 'T':
 		cout<<"Tuesday/Thursday";
 		break;
 		
 		case 'W':
 		cout<<"Wednesday";
 		break;
 		
 
 		case'F':
 		cout<<"Fridayy";
 		break;
 	
 	default:
 		cout<<"INVALID";
 		break;
 	return 0;	
 		
 }
}
