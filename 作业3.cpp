#include <stdio.h>
#include <iostream.h>
using namespace std;

/*void list();
void add();
void sweep();
void write();*/

struct Student{
		char name[25];
		char course[20];
		int num;
		int grade;
	
	}student[100];
	
void list(){
	struct Student student;
	
	cout<<"姓名\t"<<"所选科目\t"<<"成绩"<<endl;
	for(int i=0;i<=student.num;i++)
	{
		cout<<student.num<<"\t"<<student.name<<"\t"<<student.course<<"\t"
		    <<student.grade<<endl;
	}
}//菜单 

void input(struct Student &student){
	cout<<"请输入您的学号："; 
	cin>>student.num;
	
	cout<<endl<<"请输入您的姓名：";
	cin>>student.name;
	
   	cout<<endl<<"请输入你要选择的科目：" ; 
	cin>>student.course;
}
void add(){
	struct Student student;
	
    input (student);
}

void sweep(){
	struct Student student;
	
	input(student);
	
   char *p = student.course;
	p = NULL;//此处用指针代替char数组 
}

void write(){
	struct Student student;
	
	int choice;

	cout<<"请输入您的学号:";
	cin>>student.num;
	
	cout<<endl<<"请输入您的成绩:";
	cin>>student.grade;
	
	cout<<"---是否继续?---"<<endl;
	cout<<"---1.Yes.---"<< endl;
	cout<<"---2.No.---"<<endl;
    cin>>choice;
    switch(choice){
    	case 1:
    	 		write();
    	 		break;
		case 2: 
				break;
		default :
		        cout<<"Error!!!!!";
		        break;
    }
}

int main(int argc, char *argv[])
{

	cout<<"---------菜单--------"<<endl; 
	cout<<"1)查看学生名单"<<endl;
	cout<<"2)选课"<<endl;
	cout<<"3)退选"<<endl;
	cout<<"4)录入成绩"<<endl;
	cout<<"5)退出程序"<<endl;
	
	int action;
	cin>>action;
	
	while(1){
		switch(action)
		{
	        case 1:
	               list();
	               break;
  			
  			case 2:
		           add();
		           break;
            
			case 3:
			       sweep();
				   break; 
				   
     		case 4:
   				   write();
   				   break;
			
			case 5:
  			       return 0;
  			       
            default:
                    cout<<"输入错误，请重新输入。"<<endl; 
                    break;
		}
	}
	return 0;
}
