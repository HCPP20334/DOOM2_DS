#include<sstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include "Colors.h"
#include "FileInfo.h"
using namespace std;
void UpdateZip(string gZipDirectory , string gUnpackpathdirectory)
{
system(("powershell Expand-Archive -Path\t"+gZipDirectory +"\t-DestinationPath\t"+gUnpackpathdirectory+"\t -Force").c_str());
}
bool bClearConsole()
{
	system("cls");
}
bool  gFileCheck(char *file)
{
	ifstream m_file(file);
	m_file.is_open();
	if(!m_file.is_open())
	{
		return false;
	}
	if(m_file.is_open())
	{
		return true;
	}
}
int main(int argc , char *argv[])
{
int64_t m_color1 = 0;
int64_t m_color2 = 0;
int64_t m_color3 = 0;
int64_t m_point = 0;
int64_t m_RegPoint = 0;
string m_key;
string ToSetup;
string m_NullLine = "\t\t                                       \n";
bool bLang = true;
bool bItem1;
bool bItem2;
bool bItem3;
bool bCheckKey = true;
 ofstream Log("Setup.txt");
ConsoleFullScreen(GetConsoleWindow(),1);
  for(int64_t gCycle = 1; gCycle > 0; gCycle++)
  {
	SetColor(15);
     system("mode con cols=45 lines=11");
     bClearConsole();
SetColor(15);
char *FilesGame = "DATA1.ZIP";
cout<<"                                         "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71);
cout<<"               SETUP                     "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71);
cout<<" ______________________________________  "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71);
cout<<"                                         "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71+m_color1);
cout<<"         To Install DOOM2                "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71+m_color2);
cout<<"          Unistall DOOM2                 "<<endl;
SetColor(15);
SetColor(15);
cout<<"  ";
SetColor(71+m_color3);
cout<<"              Exit                       "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71);
cout<<"                                         "<<endl;
SetColor(15);
cout<<"  ";
SetColor(71);
cout<<" ______________________________________  "<<endl;
SetColor(15);
cout<<"  ";
SetColor(78);
cout<<"Build: 1.0.1 |W|S Up/Down E - Return     "<<endl;
SetColor(15);
    m_key = _getch();
  if(bCheckKey)
  {
    if(m_key == "c")
    {
    	m_RegPoint++;
    	if(m_RegPoint > 3)
    	{
    		bCheckKey = false;
		}
	}
  }
    if(m_key == "p")
    {
    	m_RegPoint = m_RegPoint + 2;
    	if(m_RegPoint == 5)
    	{
    	Beep(550.12,140);
    	Beep(329.12,140);
    	Beep(222.12,140);
    	Beep(666.12,140);
    	Beep(550.12,140);
    	Beep(333.12,140);
    	Beep(550.12,140);
    	bCheckKey = true;
		}
	}
    if(m_key == "e")
    {
     if(bItem1)
 { 
bClearConsole();
SetColor(78);
    cout<<"                     SETUP                   "<<endl;
    SetColor(15);
    Log.is_open();
    cout<<"Checking File..."<<endl;
    	Sleep(1000);
    if(gFileCheck(FilesGame))
    {
    cout<<"File :"<<FilesGame<<"\t OK!!"<<endl;
    cout<<"UnPack to :";
    cin >> ToSetup;
    cout<<"Instaling..."<<endl;
    UpdateZip(FilesGame,ToSetup);
	}
	 if(!gFileCheck(FilesGame))
	 {
	 	    SetColor(15);
	 	cout<<"  ";
	 		SetColor(78);
	 	cout<<"                 ERROR                     "<<endl;
	 		SetColor(15);
	 	cout<<"  ";
	 		SetColor(78);
	 	cout<<" _________________________________________ "<<endl;
	 	    SetColor(15);
	 	cout<<"  ";
	 		SetColor(78);
	 	cout<<"           File not Found!!                "<<endl;
	 	 	SetColor(15);
	 	cout<<"  ";
	 		SetColor(78);
	 	cout<<"                                           "<<endl;
	 	SetColor(15);
	 	Sleep(2000);
	 }
 }
      if(bItem2)
      {
      	ifstream LogRead("Setup.txt");
      	LogRead.is_open();
      	getline(LogRead,ToSetup);
      	if(LogRead.is_open())
      	{	
      	system(("RD /s /q\t"+ToSetup).c_str());
 	    cout<<"OK!!"<<endl;
		}
		if(!LogRead.is_open())
		{
      	cout<<"You No Setup Files!!!"<<endl;
      	cout<<"Enter Path Folder to Game:";
      	cin >> ToSetup;
      	Log<<ToSetup<<endl;
      	Log.close();
		}
 	    system(("RD /s /q\t"+ToSetup).c_str());
 	    cout<<"OK!!"<<endl;
      }
      if(bItem3)
      {
      	exit(0);
	  }
	}
    if(m_key == "s")
    {
     m_point++;
     if(m_point > 2)
     {
     	m_point = 0;
     	bItem1 = false;
     	bItem2 = false;
     	bItem3 = false;
	 }
	 if(m_point == 0)
	 {
	 	m_color1 = 38;
	 	m_color2 = 0;
	 	m_color3 = 0;
		bItem1 = true;
     	bItem2 = false;
     	bItem3 = false;
	 	
	 }
	 if(m_point == 1)
	 {
	 	m_color1 = 0;
	 	m_color2 = 38;
	 	m_color3 = 0;
	 	bItem1 = false;
     	bItem2 = true;
     	bItem3 = false;
	 }
	 if(m_point == 2)
	 {
	 	m_color1 = 0;
	 	m_color2 = 0;
	 	m_color3 = 38;
	 	bItem1 = false;
     	bItem2 = false;
     	bItem3 = true;
	 }
	}
	if(m_key == "w")
    {
     m_point--;
     if(m_point < 0)
     {
     	m_point = 2;
     	bItem1 = false;
     	bItem2 = false;
     	bItem3 = false;
	 }
	 if(m_point == 0)
	 {
	 	m_color1 = 38;
	 	m_color2 = 0;
	 	m_color3 = 0;
	 	bItem1 = true;
     	bItem2 = false;
     	bItem3 = false;
	 }
	 if(m_point == 1)
	 {
	 	m_color1 = 0;
	 	m_color2 = 38;
	 	m_color3 = 0;
		bItem1 = false;
     	bItem2 = true;
     	bItem3 = false;
	 }
	 if(m_point == 2)
	 {
	 	m_color1 = 0;
	 	m_color2 = 0;
	 	m_color3 = 38;
	 	bItem1 = false;
     	bItem2 = false;
     	bItem3 = true;
	 }
	}
}
}

