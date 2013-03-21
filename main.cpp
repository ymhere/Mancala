#include <iostream>
#include <cmath>
extern void display(int []);
using namespace std;
int main()
{
	int AB[8];AB[0]=0;AB[1]=4;AB[2]=4;AB[3]=4;
	AB[4]=4;AB[5]=4;AB[6]=4;AB[7]=0;
	bool exit = false;	
		//initialization:
		// AB[0] is scoring pit a AB[1]-AB[3] are pits for a
		// AB[7] is scoring pit b AB[4]-AB[6] are pits for b
	cout<<"Scoring Pit (A)   ||"<<"\t Pit 1 (A)\t||"<<"\t Pit 2 (A)\t||"<<"\t Pit 3 (A)\t ||"<<
	"\t Scoring Pit (B)\t"<<endl;
	cout<<"                  ||"<<"\t          \t||"<<"\t          \t||"<<"\t          \t ||"<<
	"\t                \t"<<endl;
	cout<<"                  ||"<<"\t    "<<AB[1]<<"    \t||"<<"\t    "<<AB[2]<<"    \t||"<<"\t     "<<
	AB[3]<<"     \t ||"<<endl;
	cout<<"        "<<AB[0]<<"         ||"<<"--------------------||"<<"----------------------||"<<
	"-----------------------||"<<"        "<<AB[7]<<"         "<<endl;
        cout<<"                  ||"<<"\t    "<<AB[4]<<"    \t||"<<"\t    "<<AB[5]<<"    \t||"<<"\t     "<<
        AB[6]<<"     \t ||"<<endl;
	cout<<"                  ||"<<"\t          \t||"<<"\t          \t||"<<"\t          \t ||"<<
        "\t                \t"<<endl;
	 cout<<"Scoring Pit (A)   ||"<<"\t Pit 1 (B)\t||"<<"\t Pit 2 (B)\t||"<<"\t Pit 3 (B)\t ||"<<
        "\t Scoring Pit (B)\t"<<endl;	
while(!exit)	
{	cout<<"Player A: please enter a pit to start"<<endl;
	int pick;
	cin>>pick;
//	cout<<pick<<endl;
	int pick_pit_coins=AB[pick];
	//cout<<pick_pit_coins<<endl;
	//int *a = AB;
	int temp = pick;
	AB[pick]=0;
	switch(temp)
 {
	case 1:
	for(int i =0; i<pick_pit_coins;i++)
	{
		switch(i%(7))
		{
		  case 0: AB[0]++;break;
		  case 1: AB[4]++;break;
		  case 2: AB[5]++;break;
		  case 3: AB[6]++;break;
		  case 4: AB[3]++;break;
		  case 5: AB[2]++;break;
		  case 6: AB[1]++;break;
		
		}			
	}
	;break;
	case 2: 
	for(int i =0;i<pick_pit_coins;i++)
	{
		 switch(i%(7))
                {
                  case 0: AB[1]++;break;
                  case 1: AB[0]++;break;
                  case 2: AB[4]++;break;
                  case 3: AB[5]++;break;
                  case 4: AB[6]++;break;
                  case 5: AB[3]++;break;
                  case 6: AB[2]++;break;

                }

	};
	break;	
	case 3:
	for(int i =0; i<pick_pit_coins;i++)
	{
		  switch(i%(7))
                {
                  case 0: AB[2]++;break;
                  case 1: AB[1]++;break;
                  case 2: AB[0]++;break;
                  case 3: AB[4]++;break;
                  case 4: AB[5]++;break;
                  case 5: AB[6]++;break;
                  case 6: AB[3]++;break;
        
                }
	}
	;break;
	default:break;
 }
//	for(int i =0;i<8;i++)
//	cout<<AB[i]<<endl;
	cout<<"do you want to exit? if so, enter 0"<<endl;	
	display(AB);
	int lol;
	cin>>lol;
	if(lol==0)
	exit = true;
}
}

