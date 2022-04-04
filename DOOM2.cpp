#include<sstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include "Colors.h"
#include "FileInfo.h"
using namespace std;

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
	setlocale(0, "rus");
	int i;
bool m_filestate;
//string bTextKey[2] = {"W - Идти вперед , S - Назад , A - поворот камеры влево, D - Поворот камеры на вправо"}
char *files[11] = 
{
   "../DOOM2/Text/title.txt",
   "../DOOM2/Text/DOSBox.txt",
   "../DOOM2/DOOM2.bat",
   "../DOOM2/Text/Logo.txt",
   "../DOOM2/Engine/DOSBox.exe",
   "../DOOM2/Engine/SDL.dll",
   "../DOOM2/Engine/SDL_net.dll",
   "../DOOM2/Engine/Config.cfg",
   "../DOOM2/Game/DOOM2.EXE",
   "../DOOM2/Game/DOOM2.WAD",
   "../DOOM2/Game/DEFAULT.CFG"   
};
SetColor(10);
gRenderText(files[0],6);
Sleep(1000);
system("cls");
SetColor(71);
gRenderText(files[3],6);
SetColor(15);
Sleep(1000);
gRenderText("../DOOM2/Text/DOOM2Logo.txt",40);
Sleep(2000);
system("cls");
SetColor(15);
		SetColor(30);
    cout<<"\t\t                      УПРАВЛЕНИЕ                     "<<endl;
    cout<<"\t\t  __________________________________________________ "<<endl;
    cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  W - Вперед                                         "<<endl;
  	cout<<"\t\t  S - Назад                                          "<<endl;
  	cout<<"\t\t  A - Камера Влево                                   "<<endl;
  	cout<<"\t\t  D - Камера Вправо                                  "<<endl;
  	cout<<"\t\t  __________________________________________________ "<<endl;
  	cout<<"\t\t  Please reInstall Game to run Setup.exe             "<<endl;
  	cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Telegram: @HackerC++ to contact info               "<<endl;
  	cout<<"\t\t                                                     "<<endl;
    Sleep(1000);
    cout<<"\t\t             Нажмите пробел                          "<<endl;
    _getch();
    SetColor(15);
cout<<"Проверка файлов...."<<endl;
for(int y = 1; y > 0; y++)
{   
    i++;
    	if(!gFileCheck(files[8]))
  	{
  		SetColor(71);
    cout<<"\t\t                      ERROR                          "<<endl;
    cout<<"\t\t  __________________________________________________ "<<endl;
    cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Critical File no Found!!->DOOM2.EXE Game Exec file "<<endl;
  		if(!gFileCheck(files[5])) 
  		{
  	cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Critical File no Found!!->SDL.dll   Game Exec file "<<endl;
        }
        if(!gFileCheck(files[4]))
        {
    cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Critical File no Found!!->DOSBox.exe Game Exec file"<<endl;
		}
  	cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Please reInstall Game to run Setup.exe             "<<endl;
  	cout<<"\t\t                                                     "<<endl;
  	cout<<"\t\t  Telegram: @HackerC++ to contact info               "<<endl;
  	cout<<"\t\t                                                     "<<endl;
  	SetColor(15);
  	cout<<"\t\t    Press any Key to Continue..                      "<<endl;
  	_getch();
  	exit(0);
	}
  if(!gFileCheck(files[i]))
  {
  	cout<<"  file->"<<files[i]<<"->No such file directory"   <<endl;
  }
  if(gFileCheck(files[i]))
  {
  	cout<<"file->"<<files[i]<<"->OK"<<endl;
  	Sleep(100);
  }
  if(y > 9)
  {
  	system("start /min ../DOOM2/Engine/DOSBox.exe  DOOM2.bat  -noconsole -fullscreen ");
  }
}

}
