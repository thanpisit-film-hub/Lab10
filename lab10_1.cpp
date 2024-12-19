#include<iostream>

int main(){
	int count[5] = {};
	char grade;
	int i = 1, _A = 0, _B = 0, _C = 0, _D = 0, _F = 0;
	 //Declare array count for counting A,B,C,D,F and initialize all element = 0
	std::cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	do{
		std::cout << "Student [" << i << "]: ";
		std::cin >> grade;
		if(grade == 'A'){
			_A += 1;
			count[0] = _A;
			i++;
		}else if(grade == 'B'){
			_B += 1;
			count[1] = _B;
			i++;
		}else if(grade == 'C'){
			_C += 1;
			count[2] = _C;
			i++;
		}else if(grade == 'D'){
			_D += 1;
			count[3] = _D;
			i++;
		}else if(grade == 'F'){
			_F += 1;
			count[4] = _F;
			i++;
		}else if(grade > 'F'){
			std::cout << "Wrong input. Please input again." << "\n";
			continue;
		}else{
			if(grade == '0'){
				break;
			}
		}
	}while(grade != '0');
	
	std::cout << "In total " << i-1 << " students." << "\n";
	std::cout << "A = " << count[0] <<", ";
	std::cout << "B = " << count[1] <<", ";
	std::cout << "C = " << count[2] <<", ";
	std::cout << "D = " << count[3] <<", ";
	std::cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
