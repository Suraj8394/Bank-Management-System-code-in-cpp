# 🏦 Bank Management System (C++)  

A **simple and interactive** Bank Management System built using **C++**, allowing users to **create accounts, deposit money, withdraw funds, and check balances** through a **menu-driven** interface.  

---

## 🚀 Features  
✔️ **Create new bank accounts** with user-defined details  
✔️ **Deposit money** into an account  
✔️ **Withdraw money** securely (with insufficient balance check)  
✔️ **Check account details**  
✔️ **User-friendly menu-driven system**  

---

## 📂 Project Structure  



---

## 🛠 How to Run the Program  

### **1️⃣ Compile the Code**  



📌 Example Usage
Creating an Account


📦 Bank Management System
┣ 📜 bank.cpp # Main source code


---

## 🛠 How It Works  

### **1️⃣ Code Explanation**  

The program is based on **C++ classes and vectors**, where each bank account is an **object** of the `BankAccount` class. Below is a breakdown:  

### **📌 Class: `BankAccount`**  
This class represents an individual bank account and includes:  
- **Private attributes:**  
  - `accountHolder` → Name of the account holder  
  - `accountNumber` → Unique account number  
  - `balance` → Stores current balance  

- **Public Methods:**  
  - `deposit(amount)` → Adds money to the balance  
  - `withdraw(amount)` → Deducts money if funds are available  
  - `display()` → Shows account details  
  - `getAccountNumber()` → Returns account number for verification  

---

### **📌 Main Program (`main() function`)**
- **Stores all accounts** in a `vector<BankAccount>` list  
- Displays a menu for user interaction  
- Uses a `while` loop to continuously take user input  
- Processes deposits, withdrawals, and account details based on input  

---

### **2️⃣ Example Usage**  

#### **Step 1: Run the Program**  



Step 2: User Interaction

=== Bank Management System ===
1. Create Account
2. Deposit Money
3. Withdraw Money
4. View Account Details
5. Exit



Enter your choice: 1

🔹 User Inputs:

Enter Account Holder  =  Name: Suraj  |
Enter Account Number: 101  |
Enter Initial Balance: 1000

✅ Output:

Account created successfully!


---

Enter your choice: 2

💰 Deposit Money

Enter your choice: 2
Enter Account Number: 101
Enter amount to deposit: 500


✅ Output:

Deposited: $500 | New Balance: $1500

---

Enter your choice: 3

💳 Withdraw Money

Enter your choice: 3
Enter Account Number: 101
Enter amount to withdraw: 300

✅ Output:

Withdrawn: $300 | Remaining Balance: $1200

---

Enter your choice: 4


🔍 Check Account Details

Enter your choice: 4
Enter Account Number: 101

✅ Output:

Account Holder: John | Account Number: 101 | Balance: $1200

---

Enter your choice: 1

🚪 Exit the Program



✅ Output:

Thank you for using the Bank Management System!

🤝 Contributing
Want to improve this project? Feel free to fork the repository and submit a pull request!

📧 Contact: Surajpratap469@gmail.com

⭐ Support
If you found this project useful, please ⭐ star this repository! 🚀

