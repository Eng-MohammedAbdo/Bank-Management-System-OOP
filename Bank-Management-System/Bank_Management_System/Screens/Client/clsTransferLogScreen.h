#pragma once

#include <iostream>
#include "../clsScreen.h"
#include <iomanip>
#include <fstream>
#include "../../Core/clsBankClient.h"

class clsTransferLogScreen :protected clsScreen {

private:

    static void PrintTransferLogRecordLine(clsBankClient::stTransfersLogRecord TransferRegisterRecord)
    {

        cout << setw(8) << left << "" << "| " << setw(23) << left << TransferRegisterRecord.DateTime;
        cout << "| " << setw(8) << left << TransferRegisterRecord.SourceAccountNumber;
        cout << "| " << setw(8) << left << TransferRegisterRecord.DestinationAccountNumber;
        cout << "| " << setw(8) << left << TransferRegisterRecord.Amount;
        cout << "| " << setw(10) << left << TransferRegisterRecord.srcBalanceAfter;
        cout << "| " << setw(10) << left << TransferRegisterRecord.desBalanceAfter;
        cout << "| " << setw(8) << left << TransferRegisterRecord.UserName;
    }

public:

	static void ShowTransferLogScreen() {


        vector <clsBankClient::stTransfersLogRecord> vTransferLogRecord = clsBankClient::GetTransferLogList();

        string Title = "\tTransfer Log List Screen";
        string SubTitle = "\t    (" + to_string(vTransferLogRecord.size()) + ") Record(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(23) << "Date/Time";
        cout << "| " << left << setw(8) << "s.Acct";
        cout << "| " << left << setw(8) << "d.Acct";
        cout << "| " << left << setw(8) << "Amount";
        cout << "| " << left << setw(10) << "s.Balance";
        cout << "| " << left << setw(10) << "d.Balance";
        cout << "| " << left << setw(8) << "User";

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;


        if (vTransferLogRecord.size() == 0)
            cout << "\t\t\t\tNo Transfers Available In the System!";
        else

            for (clsBankClient::stTransfersLogRecord Record : vTransferLogRecord)
            {

                PrintTransferLogRecordLine(Record);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

	}

};