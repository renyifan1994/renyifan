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
	
	cout<<"����\t"<<"��ѡ��Ŀ\t"<<"�ɼ�"<<endl;
	for(int i=0;i<=student.num;i++)
	{
		cout<<student.num<<"\t"<<student.name<<"\t"<<student.course<<"\t"
		    <<student.grade<<endl;
	}
}//�˵� 

void input(struct Student &student){
	cout<<"����������ѧ�ţ�"; 
	cin>>student.num;
	
	cout<<endl<<"����������������";
	cin>>student.name;
	
   	cout<<endl<<"��������Ҫѡ��Ŀ�Ŀ��" ; 
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
	p = NULL;//�˴���ָ�����char���� 
}

void write(){
	struct Student student;
	
	int choice;

	cout<<"����������ѧ��:";
	cin>>student.num;
	
	cout<<endl<<"���������ĳɼ�:";
	cin>>student.grade;
	
	cout<<"---�Ƿ����?---"<<endl;
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

	cout<<"---------�˵�--------"<<endl; 
	cout<<"1)�鿴ѧ������"<<endl;
	cout<<"2)ѡ��"<<endl;
	cout<<"3)��ѡ"<<endl;
	cout<<"4)¼��ɼ�"<<endl;
	cout<<"5)�˳�����"<<endl;
	
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
                    cout<<"����������������롣"<<endl; 
                    break;
		}
	}
	return 0;
}
