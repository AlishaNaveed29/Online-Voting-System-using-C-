#  Online Voting System (C++ OOP Project)

##  Overview
The Online Voting System is a console-based application developed in C++ using Object-Oriented Programming (OOP) concepts. This project simulates a basic election system where users can enter their personal details and cast votes through a simple and interactive menu-driven interface.

The system ensures fair participation by validating important user information such as CNIC, mobile number, and age. Only users aged 18 or above are allowed to vote, and duplicate voting is prevented through CNIC verification. Votes are recorded for different political parties, and the system calculates results to determine the winning party.

This project is designed for educational purposes and demonstrates how real-world systems like voting processes can be implemented using programming fundamentals.

---

##  Features
-  CNIC-based voter validation  
-  Input voter details (Name, Father Name, CNIC, Mobile Number, Age)  
-  Age verification (18+ required)  
-  Duplicate vote prevention  
-  Voting options for multiple parties (TLP, PTI, PMLN, PPP)  
-  Display total number of votes  
-  Show votes for each party  
-  Announce the winning party  
-  User-friendly menu-driven console interface  

---

##  Technologies Used
- **C++**
- Standard Libraries:
  - `<iostream>`
  - `<fstream>`
- `<windows.h>` (used for console operations like screen clearing)


##  How to Run

1. Clone the repository:
```bash
git clone https://github.com/AlishaNaveed29/Online-Voting-System-using-C-.git
```
2. Open the project in any C++ compiler (VS Code, Dev C++, CodeBlocks, etc.)
3. Compile the program
4. Run the program

---

## Functional Modules
- **Cast Vote** → Enter user details and vote for a party  
- **Show Total Votes** → Displays total votes cast  
- **Party Votes** → Shows votes received by each party  
- **Winner** → Determines and displays the winning party  
- **Voter Details** → Displays entered voter information  

---

##  Limitations
- Console-based application (no GUI)  
- Basic input validation  
- Limited security features  
- Uses simple file handling instead of a database  

---

##  Future Improvements
- Add graphical user interface (GUI)  
- Integrate database (MySQL/SQLite)  
- Improve authentication and security  
- Enhance validation and error handling  
- Add admin panel for better control  

---

##  Author
Alisha Naveed

---

##  License
This project is for educational purposes only.
