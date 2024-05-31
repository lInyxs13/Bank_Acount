all: BankAccount

BankAccount: BankAccount.cpp
	gcc -o  BankAccount BankAccount.cpp

BankAccount: BankAccount.h
	gcc -o  BankAccount BankAccount.h	

	clean:
		rm BankAccount BankAccount.o



