//#include <iostream>
//#include<fstream>
//#include <string>
//#include <Windows.h>
//#include<conio.h>
//using namespace std;
//
//bool isLoggedin();
//void reg();
//void display_menu();
//void addmenu();
//void displaymenu();
//void edit_delete();
//void reviews();
//void add_income();
//void add_expense();
//void display_recurring_costs();
//void add_recurring_expense();
//void display_income();
//void display_expenses_history();
//void edit();
//void delete_value();
//void add_recurring_category();
//void quick_review();
//void detailed_review();
//void date_range_report();
//void remaining_days();
//string get_date(int choice);
//int first_time = 1;
//int main()
//{
//	system("title Budget tracker project");
//	int choice;
//	if (first_time==1) {
//		cout << "1.Don't have an account! Sign UP" << endl;
//		cout << "2.Already have an account! just Sign In" << endl;
//		cin >> choice;
//		if (choice == 1)
//		{
//			reg();
//		}
//		else if (choice == 2)
//		{
//			bool status = isLoggedin();
//			if (!status)
//			{
//				cout << "The username or password is incorrect" << endl;
//				system("pause");
//				return 0;
//			}
//			else
//			{
//				cout << "succesfully logged in" << endl;
//			}
//		}
//		system("cls");
//		first_time ++;
//	}
//	display_menu();
//
//	int DisplayChoice;
//	cin >> DisplayChoice;
//
//	switch (DisplayChoice)
//	{
//	case 1:
//		addmenu();
//	case 2:
//		displaymenu();
//	case 3:
//		edit_delete();
//	
//	case 4:
//		reviews();
//		
//	case 5:
//		date_range_report();
//
//	case 6:
//		first_time = 1;
//		system("cls");
//		main();
//
//	default:
//			cout << "Wrong choice"<<endl;
//			system("pause");
//			system("cls");
//		main();
//	}
//	system("pause");
//	return 0;
//	
//}
//
//void addmenu() {
//	system("cls");
//	cout << "1.Add income." << endl;
//	cout << "2.Add expense." << endl;
//	cout << "3.Add recurring costs." << endl;
//	cout << "4.Add recurring category" << endl;
//	int addchoice;
//	cout << "Enter the number of choice: ";
//	cin >> addchoice;
//	switch (addchoice)
//	{
//	case 1:
//		add_income();
//
//	case 2:
//		add_expense();
//
//	case 3:
//		add_recurring_expense();
//
//	case 4:
//		add_recurring_category();
//	}
//
//}
//
//void displaymenu() {
//	system("cls");
//	cout << "1.Display income history." << endl;
//	cout << "2.Display recurring costs." << endl;
//	cout << "3.Display expenses history." << endl;
//	int displaychoice;
//	cout << "Enter the number of choice: ";
//	cin >> displaychoice;
//	switch (displaychoice)
//	{
//	case 1:
//		display_income();
//
//	case 2:
//		display_recurring_costs();
//
//	case 3:
//		display_expenses_history();
//}
//
//}
//
//void edit_delete() {
//	system("cls");
//	cout << "1.Edit value" << endl;
//	cout << "2.Delete value." << endl;
//	int choice;
//	cout << "Enter the number of choice: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		edit();
//
//	case 2:
//		delete_value();
//	}
//}
//
//void reviews() {
//	system("cls");
//	cout << "1.Quick review." << endl;
//	cout << "2.Detailed review" << endl;
//	int choice;
//	cout << "Enter the number of choice: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		quick_review();
//		system("pause");
//		system("cls");
//		main();
//		break;
//
//	case 2:
//		detailed_review();
//		break;
//	}
//}
//
//void display_menu()
//{
//	cout << "Welcome to budget tracker project beta version (choose the a number to proceed)" << endl;
//	cout << "-------------------------------------------------------------------------------" << endl;
//	cout << "1.Add." << endl;
//	cout << "2.Display." << endl;
//	cout << "3.Edit and delete" << endl;
//	cout << "4.Review" << endl;
//	cout << "5.Date range report." << endl;
//	cout << "6.Logout." << endl;
//}
//
//void add_expense()
//{
//	system("cls");
//	double expense, oldValue, currentValue, totalExpense = 0;
//	char choice = 'y';
//	string note;
//	int index, day, month, year;
//	string date;
//
//	cout << "Do you to add date " << endl << "1.manually" << endl << "2.automatically" << endl;
//	int dateChoice;
//	cin >> dateChoice;
//	date = get_date(dateChoice);
//	system("cls");
//
//
//
//
//	ofstream writeExpense("expense history.txt", ios::app);
//
//	while (choice == 'y' || choice == 'Y')
//	{
//		cout << "Enter your expense: ";
//		cin >> expense;
//		cout << "Enter note: ";
//		cin >> note;
//
//		totalExpense += expense;
//
//		writeExpense << date << endl << expense << endl << note << endl;
//
//		cout << "Do you want to add new expense? (y/n): ";
//		cin >> choice;
//		system("cls");
//	}
//
//	writeExpense.close();
//
//	cout << "Total expenses added: " << totalExpense << endl;
//
//	ifstream readIncome("income value.txt");
//	readIncome >> oldValue;
//	readIncome.close();
//
//	currentValue = oldValue - totalExpense;
//
//	ofstream writeIncome("income value.txt");
//	writeIncome << currentValue;
//	writeIncome.close();
//
//	cout << "Income value: " << currentValue << endl;
//	main();
//
//
//
//
//}
//
//void display_recurring_costs()
//{
//	system("cls");
//	int cateNumber;
//	string Cate, subCate;
//
//	ifstream Dispaly_Categories;
//	Dispaly_Categories.open("MainCategories.txt");
//	while (Dispaly_Categories >> cateNumber >> Cate)
//	{
//		cout << cateNumber << '-' << Cate << endl;
//	}
//	cout << endl << "-----------------------" << endl;
//	Dispaly_Categories.close();
//
//	string choice;
//	cout << "Please choose main category: ";
//	cin >> choice;
//
//	system("cls");
//	string fileName = choice.append(".txt");
//
//	cout << endl << "This is the Sub Categoreis:" << endl;
//	cout << "-------------------------------" << endl;
//	Dispaly_Categories.open(fileName);
//	int index;
//	while (Dispaly_Categories >> index >> subCate)
//	{
//		cout << index << '-' << subCate << endl;
//	}
//	cout << endl << "---------------------------------" << endl;
//	Dispaly_Categories.close();
//
//	system("pause");
//	system("cls");
//	main();
//}
//
//void add_income()
//{
//	system("cls");
//	double income_value, old, the_new;
//	char answer = 'y';
//	string source;
//	int index, day, month, year;
//	string date;
//	cout << "Do you to add date " << endl << "1.manually" << endl << "2.automatically" << endl;
//	int dateChoice;
//	cin >> dateChoice;
//	date = get_date(dateChoice);
//
//	system("cls");
//
//	while (answer == 'y' || answer == 'Y') {
//
//		cout << "Enter Income value: ";
//		cin >> income_value;
//		cout << "Enter Income Source: ";
//		cin >> source;
//		ofstream history("income history.txt", ios::app);
//		history << date << '\n' << income_value << '\n' << source << endl;
//		history.close();
//		ifstream current_value("income value.txt");
//		if (current_value.is_open())
//		{
//			current_value >> old;
//			current_value.close();
//			the_new = old + income_value;
//			ofstream new_current_value("income value.txt");
//			new_current_value << the_new;
//			new_current_value.close();
//			cout << "Your current money is: " << the_new << endl;
//		}
//		else
//		{
//			cout << "Your current money is: " << income_value << endl;
//			ofstream intial("income value.txt");
//			intial << income_value;
//		}
//		cout << "...................................................\nDO you want to continue (y or n )";
//		cin >> answer;
//		system("cls");
//	}
//	main();
//
//}
//
//void add_recurring_expense()
//{
//	system("cls");
//
//	/*SYSTEMTIME time;
//	GetLocalTime(&time);
//	string date = to_string(time.wDay) + ' ' + to_string(time.wMonth) + ' ' + to_string(time.wYear);
//	*/
//	//string date;
//	int day, month, year;
//	string Cate, subCate, date;
//	int index1;
//	ifstream Dispaly_Categories;
//	Dispaly_Categories.open("MainCategories.txt");
//	while (Dispaly_Categories >> index1 >> Cate)
//	{
//		cout << index1 << '-' << Cate << endl;
//	}
//	cout << endl << "-----------------------" << endl;
//	Dispaly_Categories.close();
//	string choice;
//	cout << "Please choose main category: ";
//	cin >> choice;
//	system("cls");
//	string fileName = choice.append(".txt");
//
//	cout << endl << "This is the Sub Categoreis:" << endl;
//	cout << "-------------------------------" << endl;
//	Dispaly_Categories.open(fileName);
//	int index;
//	while (Dispaly_Categories >> index >> subCate)
//	{
//		cout << index << '-' << subCate << endl;
//	}
//	cout << endl << "---------------------------------" << endl;
//	Dispaly_Categories.close();
//
//	cout << "Choose what you want to add to recurring cost: ";
//	int recurringChoice;
//	cin >> recurringChoice;
//
//	Dispaly_Categories.open(fileName);
//
//	string catchLine, readLine;
//	int catchIndex;
//
//	while (Dispaly_Categories >> catchIndex >> readLine)
//	{
//		if (catchIndex == recurringChoice)
//		{
//			catchLine = readLine;
//			break;
//		}
//	}
//
//	cout << "Do you want to add date \n1.Manually \n2.Automatically\n";
//	int dateChoice;
//	cin >> dateChoice;
//	date = get_date(dateChoice);
//
//	cout << "Enter your cost: ";
//	double recCost;
//	cin >> recCost;
//
//	ofstream recurringHistory("recurring history.txt", ios::app);
//	recurringHistory << date << endl << recCost << endl << catchLine << endl;
//	recurringHistory.close();
//
//	char again;
//	cout << "Want to add new recurring cost? (y/n): ";
//	cin >> again;
//	if (again == 'y')
//	{
//		add_recurring_expense();
//	}
//	else
//	{
//		system("cls");
//		main();
//	}
//
//
//
//
//}
//
//void display_expenses_history()
//{
//	system("cls");
//	int days, months, years, index = 1;
//	double cost;
//	string note;
//	cout << "First the expenses history"<<endl;
//	cout << "---------------------------" << endl;
//	ifstream expensesReader("expense history.txt");
//
//	while (expensesReader >> days >> months >> years >> cost >> note)
//	{
//		cout << index++ << '.' << "Cost: " << cost << '\t' <<"Note: "<< note << endl<<endl;
//	}
//
//	expensesReader.close();
//	cout << "Second the recurring history" << endl;
//	cout << "---------------------------" << endl;
//		ifstream expensesReader2("recurring history.txt");
//
//	while (expensesReader2 >> days >> months >> years >> cost >> note)
//	{
//		cout << index++ << '.' << "Cost: " << cost << '\t' << "Note: " << note << endl << endl;
//	}
//
//	expensesReader2.close();
//
//	system("pause");
//	system("cls");
//	main();
//}
//
//void edit()
//{
//	system("cls");
//
//	cout << "Choose what you want to edit:" << endl;
//	cout << "-----------------------------" << endl;
//	cout << "1.Edit expenses." << endl;
//	cout << "2.Edit recurring cost." << endl;
//	cout << "3.Edit income value." << endl;
//
//	int choice, days, months, years, index = 1;
//	double cost;
//	string note;
//	cout << "Your choice is: ";
//	cin >> choice;
//
//	if (choice == 1)
//	{
//		system("cls");
//		ifstream expensesReader("expense history.txt");
//
//		while (expensesReader >> days >> months >> years >> cost >> note)
//		{
//			cout << index++ << '.' << cost << '\t' << note << endl;
//		}
//
//		expensesReader.close();
//
//		cout << "Enter the index you want to edit: " << endl;
//		int editIndex;
//		cin >> editIndex;
//
//		ifstream reader("expense history.txt");
//		ofstream writer("dataHolder.txt");
//		int whileIndex = 1;
//		double newCost;
//		string newNote;
//		while (reader >> days >> months >> years >> cost >> note)
//		{
//			if (whileIndex != editIndex)
//			{
//				writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			else
//			{
//				cout << "Enter your New Cost: " << endl;
//				cin >> newCost;
//				cout << "Enter The Note: " << endl;
//				cin >> newNote;
//
//				writer << days << ' ' << months << ' ' << years << endl << newCost << endl << newNote << endl;
//
//			}
//			whileIndex++;
//		}
//		writer.close();
//		reader.close();
//
//		ifstream copy("dataHolder.txt");
//		ofstream paste("expense history.txt");
//		while (copy >> days >> months >> years >> cost >> note)
//		{
//			paste << days << ' ' << months << ' ' << years << endl << cost << ' ' << note << endl;
//		}
//		copy.close();
//		paste.close();
//		cout << "Your value is Edited successfully" << endl;
//		system("pause");
//		system("cls");
//		display_expenses_history();
//	}
//	else if (choice == 2)
//	{
//		system("cls");
//		ifstream expensesReader("recurring history.txt");
//
//		while (expensesReader >> days >> months >> years >> cost >> note)
//		{
//			cout << index++ << '.' << cost << '\t' << note << endl;
//		}
//
//		expensesReader.close();
//
//		cout << "Enter the index you want to edit: " << endl;
//		int editIndex;
//		cin >> editIndex;
//
//		ifstream reader("recurring history.txt");
//		ofstream writer("dataHolder.txt");
//		int whileIndex = 1;
//		double newCost;
//		string newNote;
//		while (reader >> days >> months >> years >> cost >> note)
//		{
//			if (whileIndex != editIndex)
//			{
//				writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			else
//			{
//				cout << "Enter your New Cost: " << endl;
//				cin >> newCost;
//				writer << days << ' ' << months << ' ' << years << endl << newCost << endl << note << endl;
//
//			}
//			whileIndex++;
//		}
//		writer.close();
//		reader.close();
//
//		ifstream copy("dataHolder.txt");
//		ofstream paste("recurring history.txt");
//		while (copy >> days >> months >> years >> cost >> note)
//		{
//			paste << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//		}
//		copy.close();
//		paste.close();
//		cout << "Your value is Edited successfully" << endl;
//	}
//	else if (choice == 3)
//	{
//		system("cls");
//		cout << "choose" << endl;
//		cout << "1.Edit Incomr history" << endl;
//		cout << "2.Edit Income value." << endl;
//
//		int incomeChoice;
//		cin >> incomeChoice;
//
//		if (incomeChoice == 1)
//		{
//			system("cls");
//			ifstream expensesReader("income history.txt");
//
//			while (expensesReader >> days >> months >> years >> cost >> note)
//			{
//				cout << index++ << '.' << cost << '\t' << note << endl;
//			}
//
//			expensesReader.close();
//
//			cout << "Enter the index you want to edit: " << endl;
//			int editIndex;
//			cin >> editIndex;
//
//			ifstream reader("income history.txt");
//			ofstream writer("dataHolder.txt");
//			int whileIndex = 1;
//			double newCost;
//			string newNote;
//			while (reader >> days >> months >> years >> cost >> note)
//			{
//				if (whileIndex != editIndex)
//				{
//					writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//				}
//				else
//				{
//					cout << "Enter your New income: " << endl;
//					cin >> newCost;
//					cout << "Enter The source: " << endl;
//					cin >> newNote;
//
//					writer << days << ' ' << months << ' ' << years << endl << newCost << endl << newNote << endl;
//
//				}
//				whileIndex++;
//			}
//			writer.close();
//			reader.close();
//
//			ifstream copy("dataHolder.txt");
//			ofstream paste("income history.txt");
//			while (copy >> days >> months >> years >> cost >> note)
//			{
//				paste << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			copy.close();
//			paste.close();
//			cout << "Your income is Edited successfully" << endl;
//		}
//		else if (incomeChoice == 2)
//		{
//			system("cls");
//			double oldValue, newValue;
//			ifstream incomeReader("income value.txt");
//			incomeReader >> oldValue;
//			incomeReader.close();
//			cout << "Your current income is: ";
//			cout << oldValue << endl;
//			cout << "----------" << endl;
//			cout << "Enter your new income value: ";
//			cin >> newValue;
//			ofstream incomeWriter("income value.txt");
//			incomeWriter << newValue;
//			incomeWriter.close();
//
//			ofstream incomeClear("income history.txt");
//			incomeClear.clear();
//			incomeClear.close();
//		}
//	}
//	system("pause");
//	system("cls");
//	main();
//}
//
//void delete_value()
//{
//	system("cls");
//
//	cout << "Choose what you want to edit:" << endl;
//	cout << "-----------------------------" << endl;
//	cout << "1.Delete expenses." << endl;
//	cout << "2.Delete recurring cost." << endl;
//	cout << "3.Delete income value." << endl;
//
//	int choice;
//	cout << "Your choice is: ";
//	cin >> choice;
//
//	int days, months, years, index = 1;
//	double cost;
//	string note;
//
//	if (choice == 1)
//	{
//		system("cls");
//		ifstream expensesReader("expense history.txt");
//
//		while (expensesReader >> days >> months >> years >> cost >> note)
//		{
//			cout << index++ << '.' << cost << '\t' << note << endl;
//		}
//
//		expensesReader.close();
//
//		cout << "Enter the index you want to delete: " << endl;
//		int editIndex;
//		cin >> editIndex;
//
//		ifstream reader("expense history.txt");
//		ofstream writer("dataHolder.txt");
//		int whileIndex = 1;
//		double newCost;
//		string newNote;
//		while (reader >> days >> months >> years >> cost >> note)
//		{
//			if (whileIndex != editIndex)
//			{
//				writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			whileIndex++;
//		}
//		writer.close();
//		reader.close();
//
//		ifstream copy("dataHolder.txt");
//		ofstream paste("expense history.txt");
//		while (copy >> days >> months >> years >> cost >> note)
//		{
//			paste << days << ' ' << months << ' ' << years << endl << cost << ' ' << note << endl;
//		}
//		copy.close();
//		paste.close();
//		cout << "Your value is deleted successfully" << endl;
//		system("pause");
//		system("cls");
//		display_expenses_history();
//	}
//	else if (choice == 2)
//	{
//		system("cls");
//		ifstream expensesReader("recurring history.txt");
//
//		while (expensesReader >> days >> months >> years >> cost >> note)
//		{
//			cout << index++ << '.' << cost << '\t' << note << endl;
//		}
//
//		expensesReader.close();
//
//		cout << "Enter the index you want to delete: " << endl;
//		int editIndex;
//		cin >> editIndex;
//
//		ifstream reader("recurring history.txt");
//		ofstream writer("dataHolder.txt");
//		int whileIndex = 1;
//		double newCost;
//		string newNote;
//		while (reader >> days >> months >> years >> cost >> note)
//		{
//			if (whileIndex != editIndex)
//			{
//				writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			whileIndex++;
//		}
//		writer.close();
//		reader.close();
//
//		ifstream copy("dataHolder.txt");
//		ofstream paste("recurring history.txt");
//		while (copy >> days >> months >> years >> cost >> note)
//		{
//			paste << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//		}
//		copy.close();
//		paste.close();
//		cout << "Your value is deleted successfully" << endl;
//	}
//	else if (choice == 3)
//	{
//		system("cls");
//		cout << "choose" << endl;
//		cout << "1.Delete Incomr history" << endl;
//		cout << "2.Delete Income value." << endl;
//
//		int incomeChoice;
//		cin >> incomeChoice;
//
//		if (incomeChoice == 1)
//		{
//			system("cls");
//			ifstream expensesReader("income history.txt");
//
//			while (expensesReader >> days >> months >> years >> cost >> note)
//			{
//				cout << index++ << '.' << cost << '\t' << note << endl;
//			}
//
//			expensesReader.close();
//
//			cout << "Enter the index you want to delete: " << endl;
//			int editIndex;
//			cin >> editIndex;
//
//			ifstream reader("income history.txt");
//			ofstream writer("dataHolder.txt");
//			int whileIndex = 1;
//			double newCost;
//			string newNote;
//			while (reader >> days >> months >> years >> cost >> note)
//			{
//				if (whileIndex != editIndex)
//				{
//					writer << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//				}
//				whileIndex++;
//			}
//			writer.close();
//			reader.close();
//
//			ifstream copy("dataHolder.txt");
//			ofstream paste("income history.txt");
//			while (copy >> days >> months >> years >> cost >> note)
//			{
//				paste << days << ' ' << months << ' ' << years << endl << cost << endl << note << endl;
//			}
//			copy.close();
//			paste.close();
//			cout << "Your income is deleted successfully" << endl;
//		}
//		else if (incomeChoice == 2)
//		{
//			system("cls");
//			double oldValue, newValue;
//			ifstream incomeReader("income value.txt");
//			incomeReader >> oldValue;
//			incomeReader.close();
//			cout << "Your current income is: ";
//			cout << oldValue << endl;
//			cout << "----------" << endl;
//			ofstream incomeWriter("income value.txt");
//			incomeWriter << 0;
//			incomeWriter.close();
//
//
//			ofstream incomeClear("income history.txt");
//			incomeClear.clear();
//			incomeClear.close();
//		}
//	}
//	system("pause");
//	system("cls");
//	main();
//}
//
//void display_income()
//{
//	system("cls");
//
//	int days, months, years;
//	double cost;
//	string note;
//
//	ifstream reader("income history.txt");
//
//	int index = 1;
//
//	while (reader >> days >> months >> years >> cost >> note)
//	{
//		cout << index++ << '.' << note << '\t' << cost << endl;
//	}
//
//	cout << endl;
//	reader.close();
//
//
//	ifstream reader1("income value.txt");
//
//	double incomeValue;
//
//	reader1 >> incomeValue;
//
//	cout << "Your current income value is: $" << incomeValue << endl;
//
//	reader1.close();
//
//	system("pause");
//	system("cls");
//	main();
//
//}
//
//void add_recurring_category()
//{
//	system("cls");
//
//	string MainCategoryName, fileCategories, subCategoryName, fileName, fileIndexString;
//	int fileIndex, whileIndex = 1;
//	char choice;
//
//	cout << "Enter the name of the new category: ";
//	cin >> MainCategoryName;
//
//	ifstream readIndex("MainCategories.txt");
//	while (readIndex >> fileIndex >> fileCategories)
//	{
//		continue;
//	}
//	readIndex.close();
//
//	fileIndexString = to_string(++fileIndex);
//	fileName = fileIndexString.append(".txt");
//
//	ofstream writeCategory("MainCategories.txt", ios::app);
//	writeCategory << fileIndex << ' ' << MainCategoryName << endl;
//	writeCategory.close();
//
//	ofstream writeSubCategory(fileName);
//	do
//	{
//		cout << "Enter subcategory no" << whileIndex << ':' << '\t';
//		cin >> subCategoryName;
//		writeSubCategory << whileIndex++ << ' ' << subCategoryName << endl;
//		cout << "Do you want to add new subcategory? (y/n): ";
//		cin >> choice;
//	} while (choice == 'y' || choice == 'Y');
//	writeSubCategory.close();
//
//	system("pause");
//	system("cls");
//	main();
//}
//
//void quick_review()
//{
//	system("cls");
//	double expense = 0, recurring = 0, totalOutcome, income, currentIncome;
//
//	ifstream readIncome("income value.txt");
//	readIncome >> income;
//	cout << "Your total income value: $" << income << endl;
//	readIncome.close();
//
//	int days, months, years;
//	double cost;
//	string note;
//
//	ifstream readExpense("expense history.txt");
//	while (readExpense >> days >> months >> years >> cost >> note)
//	{
//		expense += cost;
//	}
//	readExpense.close();
//	cout << "Your total expense: $" << expense << endl;
//
//	ifstream readRecurring("recurring history.txt");
//	while (readRecurring >> days >> months >> years >> cost >> note)
//	{
//		recurring += cost;
//	}
//	readRecurring.close();
//	cout << "Your total recurring costs: $" << recurring << endl;
//
//	totalOutcome = expense + recurring;
//	cout << "Your total outcome: $" << totalOutcome << endl;
//	currentIncome = income - totalOutcome;
//	//cout << "Your total income: $" << currentIncome << endl;
//	remaining_days();
//
//	//system("pause");
//	//system("cls");
//	//main();
//}
//
//void remaining_days()
//{
//	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	SYSTEMTIME time;
//	GetLocalTime(&time);
//	int days = time.wDay;
//	int month = time.wMonth;
//	int remaining = months[month + 1] - days;
//	cout << "There is " << remaining << " days to the end of the month" << endl;
//}
//
//void detailed_review()
//{
//	system("cls");
//	quick_review();
//	cout << "----------------------------------------" << endl;
//
//	cout << "View the history of:" << endl;
//	cout << "--------------------" << endl;
//	cout << "1.Income history." << endl;
//	cout << "2.Expenses history." << endl;
//	cout << "3.Recurring costs history." << endl;
//
//	int choice;
//	cout << "Your choice is: ";
//	cin >> choice;
//
//	ifstream reader;
//	int day, month, year;
//	double value;
//	string note;
//
//	if (choice == 1)
//	{
//		system("cls");
//		cout << "Income history" << endl;
//		cout << "--------------" << endl;
//		reader.open("income history.txt");
//		while (reader >> day >> month >> year >> value >> note)
//		{
//			cout << "Date: " << day << '/' << month << '/' << year << endl;
//			cout << "Income source: " << note << endl;
//			cout << "Income value: $" << value << endl;
//			cout << "--------------------------------------" << endl;
//		}
//	}
//
//	else if (choice == 2)
//	{
//		system("cls");
//		cout << "Expense history" << endl;
//		cout << "---------------" << endl;
//		reader.open("expense history.txt");
//		while (reader >> day >> month >> year >> value >> note)
//		{
//			cout << "Date: " << day << '/' << month << '/' << year << endl;
//			cout << "Expense note: " << note << endl;
//			cout << "Expense value: $" << value << endl;
//			cout << "--------------------------------------" << endl;
//		}
//	}
//
//	else if (choice == 3)
//	{
//		system("cls");
//		cout << "Recurring history" << endl;
//		cout << "-----------------" << endl;
//		reader.open("recurring history.txt");
//		while (reader >> day >> month >> year >> value >> note)
//		{
//			cout << "Date: " << day << '/' << month << '/' << year << endl;
//			cout << "Recurring note: " << note << endl;
//			cout << "Recurring value: $" << value << endl;
//			cout << "--------------------------------------" << endl;
//		}
//	}
//
//	reader.close();
//	system("pause");
//	system("cls");
//	main();
//}
//
//void date_range_report()
//{
//	system("cls");
//	int day1, day2, month1, year1;
//	cout << "Enter The Year: ";
//	cin >> year1;
//
//	cout << "Enter The Month: ";
//	cin >> month1;
//
//	cout << "Enter the date range:" << endl;
//	cout << "---------------------" << endl;
//
//	cout << "From Day: ";
//	cin >> day1;
//
//	cout << "To Day: ";
//	cin >> day2;
//
//	cout << "-----------------------" << endl;
//	system("cls");
//	if (day1 > day2)
//		swap(day1, day2);
//	int id;
//	int days, months, years;
//	int cost;
//	string note;
//	cout << "First the expense history" << endl;
//	cout << "-----------------------" << endl;
//	ifstream reader("expense history.txt");
//
//	if (reader.is_open())
//	{
//		while (reader >> days >> months >> years >> cost >> note)
//		{
//			if (years == year1) {
//				if (months == month1)
//				{
//					if (days >= day1 && days <= day2)
//					{
//						cout << "Date: " << days << '/' << months << '/' << years << endl;
//						cout << "Cost: $" << cost << endl;
//						cout << "Note: " << note << endl;
//						cout << endl;
//					}
//				}
//			}
//		}
//	}
//	else
//		cout << "No expenses added yet" << endl;
//	reader.close();
//	cout << "second the income history" << endl;
//	cout << "-----------------------" << endl;
//	ifstream reader2("income history.txt");
//
//	if (reader2.is_open())
//	{
//		while (reader2 >> days >> months >> years >> cost >> note)
//		{
//			if (years == year1) {
//				if (months == month1)
//				{
//					if (days >= day1 && days <= day2)
//					{
//						cout << "Date: " << days << '/' << months << '/' << years << endl;
//						cout << "Cost: $" << cost << endl;
//						cout << "Note: " << note << endl;
//						cout << endl;
//					}
//				}
//			}
//		}
//	}
//	else
//		cout << "No income added yet" << endl;
//	reader2.close();
//
//	system("pause");
//	system("cls");
//	main();
//}
//
//string get_date(int choice)
//{
//	string date;
//	int day, month, year;
//
//	if (choice == 1)
//	{
//		cout << "Enter day : ";
//		cin >> day;
//		cout << "Enter Month : ";
//		cin >> month;
//		cout << "Enter year : ";
//		cin >> year;
//		date = to_string(day) + ' ' + to_string(month) + ' ' + to_string(year);
//	}
//	else
//	{
//		SYSTEMTIME time;
//		GetLocalTime(&time);
//		string date = to_string(time.wDay) + ' ' + to_string(time.wMonth) + ' ' + to_string(time.wYear);
//	}
//	return date;
//}
//
//bool isLoggedin()
//{
//	char username[20], password[20];
//	string un, pw;
//	cout << "Enter username: "; cin >> username;
//	cout << "Enter Password: ";
//	char a;
//	int i = 0;
//	a = _getch();
//	password[i] = a;
//	i++;
//	while (a != '\r')
//	{
//		cout << "*";
//		a = _getch();
//		password[i]=a;
//		i++;
//	}
//	string str1(username);
//	string str2(password);
//	ifstream read("data.txt");
//	getline(read, un);
//	getline(read, pw);
//	if (un == str1 && pw == str2)
//	{
//		return true;
//	}
//	else return false;
//
//}
//
//void reg()
//{
//	char username[20], password[20];
//	cout << "Select a username: "; cin >> username;
//	cout << "Enter your password: ";
//	char a;
//	int i = 0;
//	a = _getch();
//	password[i] = a;
//	i++;
//	while (a != '\r')
//	{
//		cout << "*";
//		a = _getch();
//		password[i]=a;
//		i++;
//
//	}
//	string ss1(username);
//	string ss2(password);
//	ofstream write("data.txt");
//	write << ss1 << endl << ss2;
//	write.close();
//}
