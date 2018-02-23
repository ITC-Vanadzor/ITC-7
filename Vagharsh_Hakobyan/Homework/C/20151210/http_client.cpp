#include "stdafx.h"
//#include "HTTPClient.h"
#include <afxinet.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		_tprintf(_T("Fatal Error: MFC initialization failed\n"));
		nRetCode = 1;
	}
	else
	{
		CInternetSession ses;
		CHttpConnection * con;
		CHttpFile * file1=NULL;
		INTERNET_PORT port=80;
		const bufmax=10000;
		char buf[bufmax];
		int rec;
		try
		{
			//соединение с Web-сервером
			con=ses.GetHttpConnection("localhost/P-Lib",port);
			//определяем запрос
			file1=con->OpenRequest(1, "index.htm");
			//послать запрос
			file1->SendRequest();
			do
			{
				//читаем порцию или всю
				rec=file1->Read(buf,bufmax-1);
				buf[rec]='\0';
				printf("%s",buf);
			}while(rec>0);
		}
		catch(CInternetException *pe)
		{
			printf("Error!\n");
			return -1;
		}
		con->Close();
		delete file1;
	}
	return nRetCode;
}
