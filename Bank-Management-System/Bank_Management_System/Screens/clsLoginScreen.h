#pragma once

#include <iostream>
#include "clsScreen.h"
#include "../Core/clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "../Global.h"
#include <fstream>



class clsLoginScreen : protected clsScreen
{
private:

	static bool _Login() {

		bool LoginFaild = false;
		short FaildLoginCount = 0;
		short LoginCountAllowed = 3;

		do {

			string Username, Password;

			if (LoginFaild)
			{
				FaildLoginCount++;

				cout << "\nInvlaid Username/Password!\n";
				cout << "\nYou have " << (LoginCountAllowed - FaildLoginCount)
					<< " Trial(s) to login.\n\n";
			}

			if (FaildLoginCount == LoginCountAllowed) {

				cout << "\nYour are Locked after "<< LoginCountAllowed<<" faild trails \n\n";
				return false;

				// or using function exit(0)
			}
			cout << "\n\t\t\t\t\tEnter User Name : ";
			cin >> Username;

			cout << "\t\t\t\t\tEnter Password : ";
			cin >> Password;

			CurrentUser = clsUser::Find(Username, Password);
			LoginFaild = CurrentUser.IsEmpty();
			

		} while (LoginFaild);

		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();
		return true;
	}

public:

	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t   Login Screen");

		return _Login();
	}

}; 