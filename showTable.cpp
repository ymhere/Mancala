#include <iostream>
using namespace std;
extern int AB[];
void display(int AB[])
{
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
}

