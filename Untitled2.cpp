//Machine Problem 1
// Created by: SANTONIA Ivan & GOKIOCO Joshua
//Begin Date: TUESDAY-21-05-2019, file created at 2156 hours (9:56 PM).
//Completion: SATURDAY-25-05-2019, final prototype completed at 

#include <iostream>
#include <string>
using namespace std;

int main()
{     
	  //Input for Quizzes (qx), Exams (ex), Seatworks (sx), Notebook (nb), and Boardwork (bw).
      int q1, q2, q3, q4, e1, e2, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, nb, bw;
      
      //Name Initializers.
	  string lname;
	  string fname;
	  
	  //Name Storage Arrays.
	  string studentLName[50];
	  string studentFName[50];
	  
	  //Placeholder (counter for initialPhase, x for betaPhase) counters.
      int x, z;
      int counter = 0;
      
      //Leaderboard (totalled highests, top students' first and last names) Storage Arrays.
      int htote[10] ={0};
      string sLNtop[10];
      string sFNtop[10];
      
      //Function Results (quiz-, exam-, and seatwork-averages; notebook's average; total overall), Percentage (totalled) Storage Array.
      float qave, eave, save, nbsa, tot;
      float tote[50] = {0};
      
      //Grade Point Average Discriminator (line = borderline), Grade Point Average (fweighted = final weighted) Storage Array.
      float line = 3.00;
	  float fweighted[50] = {0}; 

	  //initialPhase - input of raw data and names.
      while (fname!= "OK"){
		  cout << "=======================================================" << endl;
		  
		  cout << "Enter the student's last and first name: (Type in 'OK' twice to terminate)" << endl;
		  cin >> lname >> fname;
		  //Name Input.
		  studentLName[counter] = lname;
		  studentFName[counter] = fname;
		  
		  cout << "=======================================================" << endl;
		  
		  //Data Input.
		  cout << "WARNING: Please follow the cap values per criteria. This will only be rejected at the end of the input line." << endl;
		  cout << "Scores of quizzes 1 to 4: (Type '-' if you typed OK twice earlier)" << endl;
		  cin >> q1 >> q2 >> q3 >> q4;
		  //^^^Quizzes.
		  
		  cout << "Scores of Prelims and Finals: " << endl;
		  cin >> e1 >> e2;
		  //^^^Exams.
		  
		  cout << "Scores of Seatworks 1 to 10: " << endl;
		  cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;
		  //^^^Seatworks.
		  
		  cout << "Notebook Grade: " << endl;
		  cin >> nb;
		  //^^^Notebook data.
		  
		  cout << "Boardwork Grade: " << endl;
          cin >> bw;
          //^Boardwork data.
          
          //alphaPhase - data computation and checking of states.
          {
              qave = ((q1 + q2 + q3 + q4)/4) * 0.60;
              eave = ((e1 + e2)/2) * 0.40;
              save = ((s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10)/10) * 0.02;
              nbsa = (nb/100);
              tot = qave + eave + save + nbsa;
              tote[counter] = tot;
		  }
		
		//This transmutes percentages to Grade Point Averages.
		//NOTE: The maximum is supposedly 100, but the raw percentage accounts to 105.
		{if (tote[counter] >= 95.57){
     	fweighted[counter] = 1.00;
     	counter++;}
	 	else if (tote[counter] >= 91.12 && tote[counter] <= 95.57){
     	fweighted[counter] = 1.25;
     	counter++;}
	 	else if (tote[counter] >= 86.68 && tote[counter] <= 91.11){ 
     	fweighted[counter] = 1.50;
     	counter++;}
	 	else if (tote[counter] >= 82.23 && tote[counter] <=86.67){
     	fweighted[counter] = 1.75;
     	counter++;}
	 	else if (tote[counter] >= 77.79 && tote[counter] <=82.22){
     	fweighted[counter] = 2.00;
	 	counter++;}
	 	else if (tote[counter] >= 73.34 && tote[counter] <=77.78){
     	fweighted[counter] = 2.25;
     	counter++;}
	 	else if (tote[counter] >= 68.90 && tote[counter] <=73.33){
     	fweighted[counter] = 2.50;
     	counter++;}
	 	else if (tote[counter] >= 64.45 && tote[counter] <=68.89){
     	fweighted[counter] = 2.75;
     	counter++;}
	 	else if (tote[counter] >= 60.00 && tote[counter] <=64.44){
     	fweighted[counter] = 3.00;
     	counter++;}
     	//Else If instead of Else for clarity. This is arbitrary and can be replaced by an Else statement.
	 	else if (tote[counter] <= 59.99){
	 	fweighted[counter] = 5.00;
	 	counter++;}
	    }
	 
	    //betaPhase - analyses and updates leaderboards.
	    for (x = 0; x < counter; x++){
	    	//All succeeding If statements update the leaderboards by a certain degree, depending on what place is being replaced.
            if(tote[x] > htote[0]){
        	htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
            htote [5] = htote [4];
            sLNtop [5] = sLNtop [4];
            sFNtop [5] = sFNtop [4];
            htote [4] = htote [3];
            sLNtop [4] = sLNtop [3];
            sFNtop [4] = sFNtop [3];
            htote [3] = htote [2];
            sLNtop [3] = sLNtop [2];
            sFNtop [3] = sFNtop [2];
            htote [2] = htote [1];
            sLNtop [2] = sLNtop [1];
            sFNtop [2] = sFNtop [1];
            htote[1] = htote [0];
            sLNtop[1] = sLNtop [0];
            sFNtop[1] = sFNtop [0];
			//This updates the 1st position or the highest.
			htote[0] = tote[x];
            sLNtop[0] = studentLName[x];
            sFNtop[0] = studentFName[x];
            } 
          
            if(tote[x] > htote[1] && tote[x] < htote[0]){
            htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
            htote [5] = htote [4];
            sLNtop [5] = sLNtop [4];
            sFNtop [5] = sFNtop [4];
            htote [4] = htote [3];
            sLNtop [4] = sLNtop [3];
            sFNtop [4] = sFNtop [3];
            htote [3] = htote [2];
            sLNtop [3] = sLNtop [2];
            sFNtop [3] = sFNtop [2];
            htote [2] = htote [1];
            sLNtop [2] = sLNtop [1];
            sFNtop [2] = sFNtop [1];
			//This updates the 2nd highest.
			htote[1] = tote[x];
            sLNtop[1] = studentLName[x];
            sFNtop[1] = studentFName[x];
			}
            
            if(tote[x] > htote[2] && tote[x] < htote[1]){
			htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
            htote [5] = htote [4];
            sLNtop [5] = sLNtop [4];
            sFNtop [5] = sFNtop [4];
            htote [4] = htote [3];
            sLNtop [4] = sLNtop [3];
            sFNtop [4] = sFNtop [3];
            htote [3] = htote [2];
            sLNtop [3] = sLNtop [2];
            sFNtop [3] = sFNtop [2];
			//This updates the 3rd highest.
			htote[2] = tote[x];
            sLNtop[2] = studentLName[x];
            sFNtop[2] = studentFName[x];
        	}

        	if(tote[x] > htote[3] && tote[x] < htote[2]){
          	htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
            htote [5] = htote [4];
            sLNtop [5] = sLNtop [4];
            sFNtop [5] = sFNtop [4];
            htote [4] = htote [3];
            sLNtop [4] = sLNtop [3];
            sFNtop [4] = sFNtop [3];
			//This updates the 4th highest.
			htote[3] = tote[x];
            sLNtop[3] = studentLName[x];
            sFNtop[3] = studentFName[x];
        	}
        	
            if(tote[x] > htote[4] && tote[x] < htote[3]){
            htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
            htote [5] = htote [4];
            sLNtop [5] = sLNtop [4];
            sFNtop [5] = sFNtop [4];
			//This updates the 5th highest.
			htote[4] = tote[x];
            sLNtop[4] = studentLName[x];
            sFNtop[4] = studentFName[x];
        	}
            
			if(tote[x] > htote[5] && tote[x] < htote[4]){
            htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
            htote [6] = htote [5];
            sLNtop [6] = sLNtop [5];
            sFNtop [6] = sFNtop [5];
			//This updates the 6th highest.
			htote[5] = tote[x];
            sLNtop[5] = studentLName[x];
            sFNtop[5] = studentFName[x];
			}
            
            if(tote[x] > htote[6] && tote[x] < htote[5]){
          	htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
            htote [7] = htote [6];
            sLNtop [7] = sLNtop [6];
            sFNtop [7] = sFNtop [6];
			//This updates the 7th highest.
			htote[6] = tote[x];
            sLNtop[6] = studentLName[x];
            sFNtop[6] = studentFName[x];
			}
            
			if(tote[x] > htote[7] && tote[x] < htote[6]){
          	htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
            htote [8] = htote [7];
            sLNtop [8] = sLNtop [7];
            sFNtop [8] = sFNtop [7];
			//This updates the 8th highest.
			htote[7] = tote[x];
            sLNtop[7] = studentLName[x];
            sFNtop[7] = studentFName[x];
        	}
        	
            if(tote[x] > htote[8] && tote[x] < htote[7]){
            htote [9] = htote [8];
            sLNtop [9] = sLNtop [8];
            sFNtop [9] = sFNtop [8];
			//This updates the 9th highest.
			htote[8] = tote[x];
            sLNtop[8] = studentLName[x];
            sFNtop[8] = studentFName[x];
			}
			
			if(tote[x] > htote[9] && tote[x] < htote[8]){
            //This updates the 10th highest.
			htote[9] = tote[x];
            sLNtop[9] = studentLName[x];
            sFNtop[9] = studentFName[x];
			}
		}
	}
		
    
    cout << "=======================================================" << endl;
    
    //This displays the names of students scoring approximately 3.0 to 1.0.
      cout << "The following students passed this subject:" << "\n";
     for (x = 0; x <= counter; x++)
      {
          if(fweighted[x] <= line && fweighted[x] > 0)
          {   
            cout << studentLName[x] << ", " << studentFName[x] << " - " << fweighted[x] << "\n";
          } 
      }

	cout << "=======================================================" << endl;

      //This displays the names of students scoring all outside of 1.0 to 3.0, with 0 excluded.
      cout << "The following students are asked to seek counselling: " << "\n";
     for (x = 0; x < counter; x++)
      {
	  	if(fweighted[x] > line)
	  	{
	  		cout << studentLName[x] << ", " << studentFName[x] << " - " << fweighted[x] << "\n";
        } 
      }

	cout << "=======================================================" << endl;

      //This displays the names of students scoring the highest.
      cout << "The following students show the most promise in the subject: " << "\n";
     for (z = 0; z < 10; z++)
	  {
      	cout << sLNtop[z] << ", " << sFNtop[z] << " - " << htote[z] << "\n";
      }
}
 

